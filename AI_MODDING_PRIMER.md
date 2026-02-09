# DayZ Modding Primer for AI Agents

**READ THIS FIRST** - This document provides comprehensive context for AI assistants working on DayZ mods in this repository.

---

## Repository Purpose

This repository serves as a **DayZ modding workspace** containing:
1. **Complete vanilla script reference** (`reference/` directory) - Read-only reference for understanding base game implementations
2. **Mod development template** (`mod/Scripts/` directory) - Where custom mod code should be written
3. **GitHub Codespaces optimization** - Configured for cloud-based mod development

**Your role as an AI agent**: Help developers create, debug, and enhance DayZ mods using EnforceScript (the scripting language used by DayZ). You will write code, debug issues, and explain implementations based on the patterns and conventions documented here.

---

## DayZ Scripting Fundamentals

### Language: EnforceScript
- **C-style syntax** similar to C++/Java
- **Object-oriented** with classes, inheritance, and polymorphism
- **Case-sensitive** naming conventions
- **Static typing** with type inference support
- **No garbage collection concerns** - handled automatically

### Core Language Features

#### Arrays and Collections
```c
// Dynamic arrays
array<string> stringArray = new array<string>;
stringArray.Insert("item1");
stringArray.Insert("item2");
int count = stringArray.Count();
string item = stringArray.Get(0);
stringArray.Remove(0);

// Typed aliases (common in DayZ)
TStringArray items = new TStringArray;      // array<string>
TIntArray numbers = new TIntArray;          // array<int>

// Iterating arrays
foreach (string str : stringArray)
{
    Print(str);
}

// Traditional for loop
for (int i = 0; i < stringArray.Count(); i++)
{
    Print(stringArray.Get(i));
}
```

#### Reference Types (autoptr/ref)
```c
// autoptr = automatic reference counting (preferred)
autoptr array<int> numbers = new array<int>;

// ref = manual reference (legacy, avoid in new code)
ref SomeClass obj = new SomeClass();

// Most objects are auto-managed, use autoptr when needed
autoptr EffectSound sound = SEffectManager.PlaySound("MySoundSet", position);
```

#### Math and Random
```c
// Math operations
Math.RandomFloat(0.0, 1.0);           // Random float between 0 and 1
Math.RandomInt(0, 100);               // Random int 0-100 (exclusive max)
Math.RandomIntInclusive(0, 100);      // Random int 0-100 (inclusive)
Math.AbsFloat(value);                 // Absolute value
Math.Sqrt(value);                     // Square root
Math.Pow(base, exponent);             // Power
Math.Round(value);                    // Round to nearest int
Math.Clamp(value, min, max);          // Clamp value between min/max

// Vector math
vector pos1 = "1 2 3";
vector pos2 = "4 5 6";
vector result = pos1 + pos2;          // Vector addition
float distance = vector.Distance(pos1, pos2);
float length = pos1.Length();
vector normalized = pos1.Normalized();
```

#### String Operations
```c
string text = "Hello World";

// Common string methods
text.ToLower();                       // "hello world"
text.ToUpper();                       // "HELLO WORLD"
text.Length();                        // 11
text.Substring(0, 5);                 // "Hello"
text.IndexOf("World");                // 6
text.Contains("World");               // true

// String concatenation
string result = "Player: " + playerName;

// String comparison
if (text == "Hello World") { }        // Case-sensitive

// String to number
int num = text.ToInt();
float fnum = text.ToFloat();

// Type checking strings
if (item.IsKindOf("ItemBase")) { }    // Inheritance check
if (item.GetType() == "Apple") { }    // Exact type match
```

#### Events and Callbacks (ScriptInvoker)
```c
// ScriptInvoker = event system for callbacks
class MyClass
{
    // Define event
    ref ScriptInvoker Event_OnSomethingHappened = new ScriptInvoker();
    
    void DoSomething()
    {
        // Invoke event with parameters
        Event_OnSomethingHappened.Invoke(this, 123, "data");
    }
}

// Subscribe to event
void MyCallback(MyClass sender, int value, string data)
{
    Print("Event fired: " + value + ", " + data);
}

MyClass obj = new MyClass();
obj.Event_OnSomethingHappened.Insert(MyCallback);    // Subscribe
obj.Event_OnSomethingHappened.Remove(MyCallback);    // Unsubscribe
```

#### Static Methods and Variables
```c
class MyUtilityClass
{
    // Static variables (shared across all instances)
    static int s_GlobalCounter = 0;
    static const float MAX_DISTANCE = 100.0;
    
    // Static methods (can be called without instance)
    static void MyStaticMethod()
    {
        s_GlobalCounter++;
        Print("Counter: " + s_GlobalCounter);
    }
}

// Call static method
MyUtilityClass.MyStaticMethod();

// Access static variable
int count = MyUtilityClass.s_GlobalCounter;
```

### Core Principles

#### 1. Module Hierarchy
DayZ scripts are organized in numbered modules representing execution order:
```
1_Core      → Engine fundamentals (rarely modified)
2_GameLib   → Game library systems (occasional hooks)
3_Game      → Game logic (frequent customization)
4_World     → World entities and objects (most common modding target)
5_Mission   → Mission/UI layer (GUI and mission-specific logic)
```

#### 2. Class Inheritance Pattern
**Critical Modding Rule**: EnforceScript has TWO ways to work with classes:
- **`modded class ClassName`** - Modifies the EXISTING vanilla class (adds/overrides methods to ALL instances)
- **`class NewClass extends BaseClass`** - Creates a NEW class type (for new items/entities)

**When to use which**:
- Use `modded class` when you want to change behavior of existing vanilla items (affects ALL instances of that class)
- Use `extends` when creating a completely new item type

```c
// EXAMPLE 1: Modifying ALL vanilla items
// File: mod/Scripts/4_World/entities/itembase.c
modded class ItemBase  // Affects EVERY item in the game that inherits from ItemBase
{
    override void OnWasAttached(EntityAI parent, int slot_id)
    {
        super.OnWasAttached(parent, slot_id);  // Call parent implementation
        // Your custom logic here - runs for ALL items now
    }
}

// EXAMPLE 2: Creating a NEW item type
// File: mod/Scripts/4_World/entities/MyCustomItem.c
class MyCustomItem extends ItemBase  // Creates NEW item type, only affects instances of MyCustomItem
{
    override void OnWasAttached(EntityAI parent, int slot_id)
    {
        super.OnWasAttached(parent, slot_id);
        // Custom logic only for MyCustomItem instances
    }
}
```

**Key syntax elements**:
- `modded class` - Modifies existing vanilla class (GLOBAL effect on all instances)
- `class NewName extends BaseClass` - Creates new class type (LOCAL effect only on new type)
- `override` - Overrides a parent class method
- `super.MethodName()` - Calls the parent implementation (REQUIRED in 99% of cases)

#### 3. File Organization
**Critical Convention**: File naming and location determine script loading order.

**Rules**:
1. **Modded classes**: File name must match the VANILLA class name exactly (lowercase)
   - To modify `ItemBase`: Create `mod/Scripts/4_World/entities/itembase.c`
   - To modify `DayZPlayer`: Create `mod/Scripts/3_Game/dayzplayer.c`

2. **New classes**: File name should match your new class name (PascalCase)
   - For `MyCustomItem`: Create `mod/Scripts/4_World/entities/MyCustomItem.c`

**Example structure**:
```
mod/Scripts/
    ├── 3_Game/
    │   └── dayzplayer.c              // modded class DayZPlayer - affects vanilla player
    ├── 4_World/
    │   ├── entities/
    │   │   ├── itembase.c            // modded class ItemBase - affects all vanilla items
    │   │   ├── MyCustomItem.c        // class MyCustomItem extends ItemBase - NEW item
    │   │   └── MyWeapon.c            // class MyWeapon extends Weapon_Base - NEW weapon
    │   └── classes/
    │       └── useractionscomponent/
    │           └── actions/
    │               └── MyCustomAction.c  // class ActionMyCustomAction extends ActionInteractBase
    └── 5_Mission/
        └── mission/
            └── missionserver.c       // modded class MissionServer - server mission mods
```

---

## Common Modding Patterns

### Pattern 1: Creating a New Item

```c
// mod/Scripts/4_World/entities/MyNewItem.c
class MyNewItem extends ItemBase
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionMyCustomAction);
    }
    
    override void OnInventoryEnter(Man player)
    {
        super.OnInventoryEnter(player);
        Print("MyNewItem entered inventory");
    }
}
```

**Then define in config.cpp**:
```cpp
class CfgVehicles
{
    class ItemBase;  // External reference
    class MyNewItem: ItemBase
    {
        scope = 2;
        displayName = "My New Item";
        model = "\MyMod\Data\MyNewItem.p3d";
    };
};
```

### Pattern 2: Modifying Vanilla Behavior

```c
// mod/Scripts/4_World/entities/itembase.c
modded class ItemBase  // Affects ALL items inheriting from ItemBase
{
    override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
    {
        super.EEHealthLevelChanged(oldLevel, newLevel, zone);
        
        // Custom logic applies to all items now
        Print("Item health changed: " + GetDisplayName());
    }
}
```

### Pattern 3: Custom Actions

```c
// mod/Scripts/4_World/classes/UserActionsComponent/Actions/MyCustomAction.c
class ActionMyCustomAction: ActionInteractBase
{
    void ActionMyCustomAction()
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;  // Animation
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ALL;
    }

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINone;
        m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
    }

    override string GetText()
    {
        return "My Custom Action";
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        return true;  // Conditions for action to be available
    }

    override void OnExecuteServer(ActionData action_data)
    {
        // Server-side execution logic
        Print("Action executed on server");
    }
    
    override void OnExecuteClient(ActionData action_data)
    {
        // Client-side execution logic (visual feedback, sounds)
    }
}
```

### Pattern 4: Modifying Player Behavior

```c
// mod/Scripts/3_Game/dayzplayer.c
modded class DayZPlayer
{
    override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
    {
        super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
        
        // Custom hit reaction logic
        if (damageResult.GetHighestDamage() > 50)
        {
            Print("Heavy hit taken!");
        }
    }
}
```

---

## Critical Concepts

### Client vs Server Architecture

**CRITICAL CONCEPT**: DayZ uses client-server architecture where code can run in THREE contexts:
1. **Dedicated Server** - No player rendering, authoritative game state
2. **Client** - Player's local game, renders world and UI
3. **Listen Server** (singleplayer/host) - Acts as BOTH client and server

**Most methods run on BOTH client and server simultaneously** - you MUST use context checks to control behavior:

```c
override void OnInventoryEnter(Man player)  // Executes TWICE: once on client, once on server
{
    super.OnInventoryEnter(player);  // ALWAYS call super first
    
    // This code runs on BOTH client and server
    Print("Item entered inventory");  // Prints twice (client + server)
    
    if (GetGame().IsServer())  // TRUE only on server
    {
        // Server-only logic
        // - Modify game state (quantity, health, position)
        // - Save to database
        // - Spawn/delete entities
        // - Authoritative logic
        SetQuantity(100);  // ONLY server should modify state
    }
    
    if (GetGame().IsClient())  // TRUE only on client
    {
        // Client-only logic
        // - Play sounds
        // - Visual effects
        // - UI updates
        // - Local notifications
        GetGame().GetCallQueue(CALL_CATEGORY_GUI).Call(this.UpdateUI);  // UI updates
    }
}

// IMPORTANT: Some events are server-only or client-only by design
// Check the reference/ directory to see which context a method runs in
```

**Context check methods**:
- `GetGame().IsServer()` - True on dedicated server OR listen server (singleplayer host)
- `GetGame().IsClient()` - True on client OR listen server (singleplayer host)
- `GetGame().IsDedicatedServer()` - True ONLY on dedicated server (not listen server)
- `GetGame().IsMultiplayer()` - True if multiplayer session (not singleplayer)

**RULE OF THUMB**:
- **Modify game state** → Use `if (GetGame().IsServer())`
- **Visual/audio feedback** → Use `if (GetGame().IsClient())`
- **Both contexts** → No check needed (but be aware it runs twice)

### Event Methods (Prefix Convention)

DayZ uses prefixes to indicate event types:

| Prefix | Meaning | Example |
|--------|---------|---------|
| `EE` | **Engine Event** - Called by engine | `EEInit()`, `EEDelete()`, `EEHitBy()` |
| `On` | **Regular Event** - Game logic event | `OnInventoryEnter()`, `OnWasAttached()` |
| `Set` | **Setter method** - Configures properties | `SetActions()`, `SetQuantity()` |
| `Get` | **Getter method** - Retrieves data | `GetQuantity()`, `GetDisplayName()` |
| `Can` | **Condition check** - Returns boolean | `CanPutInCargo()`, `CanBeUsed()` |
| `Is` | **State check** - Returns boolean | `IsRuined()`, `IsTakeable()` |

### Variable Synchronization

Variables need explicit synchronization between client and server:

```c
class MyItem extends ItemBase
{
    private int m_MyCustomValue;  // NOT synchronized by default
    
    void SetMyCustomValue(int value)
    {
        m_MyCustomValue = value;
        SetSynchDirty();  // Mark for synchronization
    }
    
    // Serialize for network sync and database storage
    override void OnStoreSave(ParamsWriteContext ctx)
    {
        super.OnStoreSave(ctx);
        ctx.Write(m_MyCustomValue);
    }
    
    override bool OnStoreLoad(ParamsReadContext ctx, int version)
    {
        if (!super.OnStoreLoad(ctx, version))
            return false;
        
        if (!ctx.Read(m_MyCustomValue))
            return false;
            
        return true;
    }
}
```

### Quantity System

Items can have quantities (ammo, liquid, stackable items):

```c
override void SetQuantity(float value, bool destroy_config = true, bool destroy_forced = false)
{
    super.SetQuantity(value, destroy_config, destroy_forced);
    
    if (GetQuantity() <= 0)
    {
        // Item is depleted
    }
}

// Check quantity
float qty = GetQuantity();
float maxQty = GetQuantityMax();
```

---

## Configuration (config.cpp)

**Location**: `mod/config.cpp` (root of mod directory)

### Essential Structure

```cpp
class CfgPatches
{
    class MyMod
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data"};  // Dependencies
    };
};

class CfgMods
{
    class MyMod
    {
        dir = "MyMod";
        picture = "";
        action = "";
        hideName = 0;
        hidePicture = 1;
        name = "My Mod";
        credits = "Author Name";
        author = "Author Name";
        authorID = "0";
        version = "1.0";
        extra = 0;
        type = "mod";
        
        dependencies[] = {"Game", "World", "Mission"};
        
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"MyMod/Scripts/3_Game"};
            };
            class worldScriptModule
            {
                value = "";
                files[] = {"MyMod/Scripts/4_World"};
            };
            class missionScriptModule
            {
                value = "";
                files[] = {"MyMod/Scripts/5_Mission"};
            };
        };
    };
};

class CfgVehicles
{
    class ItemBase;  // External class reference
    
    class MyNewItem: ItemBase
    {
        scope = 2;  // 0=hidden, 1=hidden in editor, 2=visible
        displayName = "My New Item";
        descriptionShort = "A custom item";
        model = "\MyMod\Data\MyItem.p3d";
        weight = 500;  // grams
        itemSize[] = {2,3};  // inventory size (width, height)
        
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = {
                        {1.0, {"MyMod\Data\MyItem.rvmat"}},
                        {0.7, {"MyMod\Data\MyItem_worn.rvmat"}},
                        {0.5, {"MyMod\Data\MyItem_damaged.rvmat"}},
                        {0.3, {"MyMod\Data\MyItem_badly_damaged.rvmat"}},
                        {0.0, {"MyMod\Data\MyItem_ruined.rvmat"}}
                    };
                };
            };
        };
    };
};
```

### Inheritance in Config

```cpp
class CfgVehicles
{
    class Clothing;  // External reference to vanilla class
    
    class MyJacket: Clothing
    {
        // Inherits ALL properties from Clothing, override as needed
        displayName = "My Custom Jacket";
        // Other properties inherited automatically
    };
};
```

---

## Debugging Best Practices

### 1. Print Statements
```c
Print("Debug message: " + variableName);
Print("Object type: " + item.GetType());
Print(item);  // Prints object info
```

### 2. Error Handling
```c
ItemBase item = ItemBase.Cast(entity);
if (item)
{
    // Safe to use item
    item.DoSomething();
}
else
{
    Print("ERROR: Entity is not an ItemBase");
}
```

### 3. Logging Levels
```c
Debug.Log("Info level message");
Debug.LogWarning("Warning message");
Debug.LogError("Error message");
```

### 4. Script Errors Location
- Check `script.log` in DayZ installation directory
- Server logs: DayZ Server directory
- Look for exceptions, null references, type mismatches

---

## Common Pitfalls & Solutions

### ❌ Pitfall 1: Confusing `modded` vs `extends`
```c
// WRONG - Trying to modify vanilla ItemBase but creating new class instead
// File: mod/Scripts/4_World/entities/MyItemBase.c
class MyItemBase extends ItemBase  // This creates NEW class type, doesn't affect vanilla items
{
    // This code only affects instances of MyItemBase, NOT vanilla items
}

// CORRECT - Modifying vanilla ItemBase behavior
// File: mod/Scripts/4_World/entities/itembase.c (lowercase, matches vanilla)
modded class ItemBase  // Affects ALL items inheriting from ItemBase
{
    override void SomeMethod()
    {
        super.SomeMethod();
        // Now ALL items execute this custom logic
    }
}

// ALSO CORRECT - Creating a new item type
// File: mod/Scripts/4_World/entities/MyNewItem.c
class MyNewItem extends ItemBase  // Creates new item type
{
    // Custom behavior for MyNewItem only
}
```

### ❌ Pitfall 2: Not calling `super`
```c
// WRONG - Parent logic skipped
override void EEInit()
{
    // Custom logic only - breaks initialization
}

// CORRECT
override void EEInit()
{
    super.EEInit();  // ALWAYS call parent first
    // Then add custom logic
}
```

### ❌ Pitfall 3: Client/Server mismatch
```c
// WRONG - Setting server data on client
override void OnInventoryEnter(Man player)
{
    SetQuantity(100);  // Runs on both client and server, causes desync
}

// CORRECT
override void OnInventoryEnter(Man player)
{
    if (GetGame().IsServer())  // Only server modifies data
    {
        SetQuantity(100);
    }
}
```

### ❌ Pitfall 4: Incorrect casting
```c
// WRONG - Can crash if not ItemBase
ItemBase item = player.GetItemInHands();
item.DoSomething();  // NULL reference if not ItemBase

// CORRECT
EntityAI entity = player.GetItemInHands();
ItemBase item = ItemBase.Cast(entity);
if (item)
{
    item.DoSomething();
}
```

### ❌ Pitfall 5: Ternary operators in script modules
Some EnforceScript parsers choke on ternary operators in certain modules (notably 4_World and 5_Mission), producing misleading "Broken expression" or "missing ';'" errors.

```c
// WRONG (can fail to parse in some modules)
string state = player.GetCommand_Vehicle() ? "vehicle" : "none";

// CORRECT
string state;
if (player.GetCommand_Vehicle())
{
    state = "vehicle";
}
else
{
    state = "none";
}
```

---

## Reference Directory Structure

```
reference/
├── 1_core/                    # Engine fundamentals
│   ├── constants.c            # Global constants
│   ├── defines.c              # Type definitions
│   └── proto/                 # Prototype declarations
├── 2_gamelib/                 # Game library
│   ├── gamelib.c              # Core game functions
│   ├── inputmanager.c         # Input handling
│   └── components/            # Reusable components
├── 3_game/                    # Game logic layer
│   ├── dayzplayer.c           # Player class
│   ├── dayzgame.c             # Game instance
│   ├── entities/              # Game entities
│   └── systems/               # Game systems
├── 4_world/                   # World objects (MOST MODDED)
│   ├── entities/              # World entities
│   │   ├── itembase.c         # Base item class
│   │   ├── manbase.c          # Base character class
│   │   └── vehicles/          # Vehicle implementations
│   ├── classes/               # Helper classes
│   └── plugins/               # Plugin systems
└── 5_mission/                 # Mission/UI layer
    ├── gui/                   # GUI components
    └── mission/               # Mission logic
```

---

## Workflow for AI Agents

### When creating a new mod feature:

1. **Research**: 
   - Search `reference/` directory for similar vanilla implementations
   - Identify the base class you need to extend or modify
   - Note which methods are commonly overridden
   - Check if similar functionality already exists

2. **Plan**:
   - Determine module: 3_Game (game logic), 4_World (entities/items), 5_Mission (UI/mission)
   - Decide: `modded class` (modify existing) or `extends` (create new)
   - Map out which methods need overriding
   - Identify client vs server logic requirements

3. **Implement**:
   - Create properly named file in `mod/Scripts/[module]/` matching structure
   - Use correct keyword (`modded` or `extends`)
   - Override methods with `super` calls
   - Add client/server context checks where needed
   - Implement safe casting and null checks
   - Add Print() statements for debugging

4. **Configure** (if creating new entities):
   - Add class definition to `mod/config.cpp`
   - Define scope, displayName, model paths
   - Set up damage system, inventory size, weight
   - Register in appropriate CfgVehicles/CfgWeapons section

5. **Test**:
   - Check script.log for errors
   - Test in both singleplayer and multiplayer
   - Verify client/server synchronization
   - Test edge cases (null objects, ruined items, etc.)
   - Confirm no conflicts with other mods

### When debugging existing mod code:

1. **Locate**:
   - Find the class file in `mod/Scripts/` (check module structure)
   - Determine if it's a modded class or new class
   - Identify all methods being overridden

2. **Reference**:
   - Find vanilla implementation in `reference/` directory
   - Compare method signatures and logic
   - Check if vanilla implementation changed (version mismatch)
   - Verify inheritance chain is correct

3. **Trace**:
   - Add Print() statements at method entry: `Print("[MyClass::MethodName] Entry")`
   - Log variable values: `Print("[MyClass] value: " + value)`
   - Check execution context: `Print("[MyClass] IsServer: " + GetGame().IsServer())`
   - Check script.log for exceptions and errors

4. **Verify**:
   - ✓ Every override has `super.MethodName()` call (unless intentionally skipped)
   - ✓ State changes only in `if (GetGame().IsServer())` blocks
   - ✓ All object access uses safe casting: `ItemBase.Cast(entity)`
   - ✓ Null checks before accessing: `if (item) { item.Method(); }`
   - ✓ File name matches class name (case-sensitive)
   - ✓ Modded class files use lowercase vanilla naming

5. **Fix**:
   - Apply corrections following patterns from this primer
   - Test fix in both client and server contexts
   - Remove debug Print() statements (or comment out)
   - Document the fix for future reference

### When asked to explain code:

1. **Identify**: Class hierarchy and module location
2. **Context**: Client, server, or both
3. **Purpose**: What the code achieves
4. **Relations**: Dependencies and inheritance
5. **Caveats**: Potential issues or important notes

---

## Advanced Concepts

### Spawning/Creating Entities

**Server-only operation** - Always wrap in `GetGame().IsServer()` check:

```c
if (GetGame().IsServer())
{
    // Method 1: GetGame().CreateObject()
    ItemBase item = ItemBase.Cast(GetGame().CreateObject("Apple", player.GetPosition(), false));
    
    // Method 2: GetGame().CreateObjectEx() with more control
    ItemBase item = ItemBase.Cast(GetGame().CreateObjectEx("Apple", position, ECE_PLACE_ON_SURFACE));
    
    // Always check if creation succeeded
    if (item)
    {
        item.SetQuantity(100);
    }
}
```

**Object creation flags (ECE_)**:
- `ECE_NONE` - Default creation
- `ECE_PLACE_ON_SURFACE` - Places on ground surface
- `ECE_CREATEPHYSICS` - Creates physics simulation
- `ECE_TRACE` - Traces to surface below

### Timers and Delayed Execution

**Two methods for delayed/repeated execution**:

```c
// Method 1: GetGame().GetCallQueue() - Recommended for most cases
void SomeMethod()
{
    // Call once after 5 seconds
    GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.DelayedMethod, 5000, false);
    
    // Repeat every 1 second
    GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.RepeatingMethod, 1000, true);
}

void DelayedMethod()
{
    Print("Executed after 5 seconds");
}

void RepeatingMethod()
{
    Print("Executes every second");
    
    // To stop repeating:
    GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(this.RepeatingMethod);
}

// Method 2: Direct CallLater (simpler syntax)
void SomeMethod()
{
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DoSomething, 2000, false, param1, param2);
}

void DoSomething(int param1, string param2)
{
    Print("Called with params: " + param1 + ", " + param2);
}
```

**Call categories**:
- `CALL_CATEGORY_SYSTEM` - System-level calls
- `CALL_CATEGORY_GAMEPLAY` - Gameplay logic
- `CALL_CATEGORY_GUI` - UI updates (client-only)

### Inventory System

**Key inventory methods**:

```c
// Get player's inventory
InventoryLocation inv_loc = new InventoryLocation;
player.GetInventory().GetCurrentInventoryLocation(inv_loc);

// Check if item can go in inventory
if (player.GetInventory().CanAddEntityInCargo(item))
{
    player.GetInventory().AddEntityToInventory(item);
}

// Take item into hands
player.GetHumanInventory().CreateInHands("Apple");

// Attachment slots
EntityAI attachment = player.FindAttachmentBySlotName("Body");
if (attachment)
{
    Print("Player has: " + attachment.GetType());
}

// Get all items in cargo
array<EntityAI> cargoItems = new array<EntityAI>;
container.GetInventory().EnumerateInventory(InventoryTraversalType.PREORDER, cargoItems);
```

**Common inventory checks**:
```c
player.GetItemInHands();                    // Item currently in hands
player.GetHumanInventory().GetEntityInHands();  // Alternative method
player.GetInventory().IsInInventory(item);  // Check if item is in player inventory
item.GetHierarchyRootPlayer();              // Get player who owns item
```

### RPC (Remote Procedure Calls)

**Client-Server communication** - Execute code on the other side:

```c
// In your class
class MyItem extends ItemBase
{
    // Define RPC IDs as constants
    const int RPC_MY_CUSTOM_RPC = 12345;
    
    // Send RPC from client to server
    void SendRPCToServer(int someValue, string someText)
    {
        if (GetGame().IsClient())
        {
            ScriptRPC rpc = new ScriptRPC();
            rpc.Write(someValue);
            rpc.Write(someText);
            rpc.Send(this, RPC_MY_CUSTOM_RPC, true, null);  // true = send to server
        }
    }
    
    // Receive RPC
    override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
    {
        super.OnRPC(sender, rpc_type, ctx);
        
        if (rpc_type == RPC_MY_CUSTOM_RPC)
        {
            int receivedValue;
            string receivedText;
            
            if (ctx.Read(receivedValue) && ctx.Read(receivedText))
            {
                // Process RPC on server
                Print("RPC received: " + receivedValue + ", " + receivedText);
            }
        }
    }
}
```

**RPC best practices**:
- Always define unique RPC IDs (use high numbers to avoid conflicts)
- Validate all data received in OnRPC
- Use `true` for server, `false` for clients in Send()
- RPCs are for small data transfers (use variables sync for large data)

### Raycasting and Position Queries

```c
// Raycast from player's eyes
vector rayStart = player.GetPosition() + "0 1.6 0";  // Eye level
vector rayEnd = rayStart + (player.GetDirection() * 10);  // 10 meters forward

vector hitPosition;
vector hitNormal;
Object hitObject;
RaycastRayTest(rayStart, rayEnd, player, null, false, false, ObjIntersectView, 0.0, CollisionFlags.ALLOBJECTS, hitPosition, hitNormal, hitObject);

if (hitObject)
{
    Print("Hit object: " + hitObject.GetType());
}

// Get surface type under position
string surfaceType;
vector pos = player.GetPosition();
GetGame().SurfaceGetType(pos[0], pos[2], surfaceType);  // Note: [0]=x, [2]=z
Print("Surface: " + surfaceType);

// Check if position is water
GetGame().SurfaceIsSea(pos[0], pos[2]);      // Ocean
GetGame().SurfaceIsPond(pos[0], pos[2]);     // Pond/lake
```

---

## Quick Reference: Essential Classes

| Class | Purpose | Location |
|-------|---------|----------|
| `ItemBase` | Base for all items | `reference/entities/itembase.c` |
| `DayZPlayer` | Player character | `reference/3_game/dayzplayer.c` |
| `DayZPlayerImplement` | Player functionality | `reference/entities/dayzplayerimplement.c` |
| `ManBase` | Base character class | `reference/entities/manbase.c` |
| `ActionBase` | Base for player actions | `reference/4_world/classes/useractionscomponent/` |
| `MissionGameplay` | Main mission logic | `reference/5_mission/mission/missiongameplay.c` |
| `PluginBase` | Plugin system base | `reference/4_world/plugins/pluginbase.c` |

---

## Code Style Guidelines

```c
// Class names: PascalCase
class MyCustomItem extends ItemBase

// Method names: PascalCase
void DoSomething()

// Variable names: camelCase with m_ prefix for members
int m_customValue;
float m_healthAmount;

// Constants: UPPER_SNAKE_CASE
const int MAX_HEALTH = 100;

// Local variables: camelCase
int localCounter = 0;

// Braces: K&R style (opening brace on same line)
if (condition)
{
    // code
}

// Spacing: spaces around operators
int result = a + b;

// Comments: C++ style
// Single line comment
/* Multi-line
   comment */
```

---

## Testing Checklist

Before finalizing mod code, verify:

- [ ] All `override` methods call `super` appropriately
- [ ] Client/server context is respected (`GetGame().IsServer()` checks)
- [ ] Null checks before accessing objects (use `Cast()` safely)
- [ ] Variable synchronization implemented if needed (`OnStoreSave`/`OnStoreLoad`)
- [ ] Entity creation wrapped in `GetGame().IsServer()` check
- [ ] RPC IDs are unique and not conflicting
- [ ] Timers cleaned up properly (Remove() called when needed)
- [ ] Config.cpp includes all new items/classes
- [ ] Print statements added for debugging (can be removed later)
- [ ] File names match class names exactly
- [ ] Inheritance chain is correct
- [ ] No syntax errors (check script.log)

---

## Common API Patterns

### Working with Players
```c
// Get all players on server
array<Man> players = new array<Man>;
GetGame().GetPlayers(players);

// Iterate through players
foreach (Man man : players)
{
    PlayerBase player = PlayerBase.Cast(man);
    if (player && player.IsAlive())
    {
        Print("Player: " + player.GetIdentity().GetName());
    }
}

// Get player's identity
PlayerIdentity identity = player.GetIdentity();
string playerName = identity.GetName();
string playerID = identity.GetId();
```

### Damage and Health
```c
// Deal damage to player/entity
player.AddHealth("", "Health", -25);  // Remove 25 HP
player.AddHealth("", "Blood", -500);   // Remove blood

// Specific body zones
player.AddHealth("RightArm", "Health", -10);

// Check health
float health = player.GetHealth("", "Health");
float blood = player.GetHealth("", "Blood");

// Kill entity
player.SetHealth("", "Health", 0);

// Check if alive
if (player.IsAlive()) { }
```

### Sounds and Effects
```c
// Play sound at position (client-side)
if (GetGame().IsClient())
{
    EffectSound sound = SEffectManager.PlaySound("MySound_SoundSet", position);
    sound.SetAutodestroy(true);
}

// Play sound on object
EffectSound sound = SEffectManager.PlaySoundOnObject("SoundSetName", this);

// Particles
Particle particle = Particle.PlayOnObject(ParticleList.GRENADE_SMOKE, this);
particle.SetOrientation(vector.Zero);

// Client-side effects should check IsClient()
```

### Weather and Time
```c
// Get current game time
int hour, minute, second;
GetGame().GetWorld().GetDate(year, month, day, hour, minute, second);

// Weather
Weather weather = GetGame().GetWeather();
weather.GetRain().Set(1.0, 0, 0);     // Full rain instantly
weather.GetFog().Set(0.5, 5, 30);     // 50% fog over 30 seconds, 5 sec interpolation

// Day/night cycle speed (hours per second)
GetGame().GetWorld().SetTimeMultiplier(32);  // 32x speed
```

---

## Additional Resources

- **This Repository**: Browse `reference/` for vanilla implementations
- **Official Docs**: Bohemia Interactive Community Wiki
- **DayZ Forums**: Community support and examples
- **Script.log**: Always check for runtime errors

---

## General Modding Dos and Donts

### UI and Widget Safety
- **Do** create UI widgets via `CALL_CATEGORY_GUI` after the mission and UI manager exist. Early widget creation can crash.
- **Do** use a fullscreen root widget for overlays (`FrameWidgetTypeID` with `VISIBLE | HEXACTPOS | VEXACTPOS`).
- **Don't** rely on exact-size flags for root containers unless you intend a 1x1 pixel parent.

### Textures and Alpha Channels
- **Do** use DDS formats that preserve alpha (DXT5 or ARGB) and verify the alpha channel in your tool.
- **Do** prefer `_ca` textures for UI sprites when alpha is required.
- **Don't** bake checkerboards into the color layer; transparent pixels must live in alpha.

### PPE (Post-Process) Behavior
- **Do** reset exposure or any PP overrides on stop (`SetTargetValueFloatDefault`).
- **Do** use exposure or saturation as a fallback if `PPEColors` appears to have no visible effect.
- **Don't** stack conflicting PP requests at the same priority if you need predictable output.

### CallLater and Input Safety
- **Do** call `CallLater(functionRef, delay, repeat)` with a function reference (not string names).
- **Do** guard missing inputs and log only once to avoid spam.

### Performance and Raycasts
- **Do** reuse arrays for `GetObjectsAtPosition3D` and avoid per-frame allocations.
- **Do** cull early: run raycasts only for points that are on-screen and inside FOV.
- **Don't** raycast per point at full rate for large crowds; reduce points by distance or type.

### Bones, Selections, and Compatibility
- **Do** use selection positions (`GetSelectionPositionWS`) as a safer alternative to bones on some creatures.
- **Do** include case variants for selection names (e.g., `Head` and `head`).
- **Don't** assume all entities share the same bone set or selection names.

### Energy and Power Checks
- **Do** check attached batteries directly (`FindAttachmentBySlotName`) and their energy managers.
- **Do** fall back to headgear energy or energy source when attachments are absent.

### Debugging and Maintainability
- **Do** gate debug logs with a config flag in `CfgMods`.
- **Do** log a version string on init to correlate issues with builds.
- **Don't** leave noisy logs enabled by default.

### Visual Fidelity Tips
- **Do** scale overlay effects with FOV for scopes vs. hip-fire.
- **Do** remove off-screen indicators immediately to avoid directional hints.
- **Don't** let stacked sprites fully occlude targets; control alpha to preserve detail.

---

## Summary for AI Agents

You are working in a **DayZ modding environment using EnforceScript**. Your primary tasks are:

1. **Create new mod features** in `mod/Scripts/` following DayZ patterns
2. **Debug existing code** by comparing with `reference/` vanilla implementations
3. **Explain code** with context about module hierarchy, client/server architecture, and inheritance
4. **Follow conventions**: modded keyword, super calls, client/server checks, proper casting

**Key principles**:
- Always use `modded class` to modify vanilla classes (affects all instances globally)
- Always use `extends` to create new item types (local scope only)
- Always call `super.MethodName()` in overrides (unless intentionally skipping)
- Always check client/server context for state-changing operations (`GetGame().IsServer()`)
- Always use safe casting with null checks (`ItemBase.Cast()` then `if (item)`)
- Always maintain file naming conventions (lowercase for modded, PascalCase for new)
- Always wrap entity spawning in `GetGame().IsServer()` checks
- Always use `autoptr` for reference-counted objects
- Always validate RPC data in `OnRPC()` method

**Language features you'll use frequently**:
- Arrays: `array<Type>`, `TStringArray`, `TIntArray`
- Loops: `foreach`, traditional `for`, `while`
- Math: `Math.RandomInt()`, `Math.Clamp()`, `vector.Distance()`
- Strings: `.ToLower()`, `.Contains()`, `.Substring()`
- Events: `ScriptInvoker` for callbacks
- Timers: `CallLater()` for delayed/repeated execution
- Inventory: `GetInventory()`, `FindAttachmentBySlotName()`
- Casting: Always use `.Cast()` and check for null

**When in doubt**: Reference the vanilla implementation in `reference/` directory to understand how DayZ handles similar situations.

---

**This primer is your complete reference for DayZ modding in this repository. Refer back to specific sections as needed while working on mod development tasks.**
