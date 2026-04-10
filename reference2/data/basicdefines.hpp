//--------------
// LIQUID TYPES
//--------------
// BEWARE ALL INDIVIDUAL LIQUID TYPES ARE ALSO REPRESENTED SCRIPT-SIDE AND MUST MATCH(all changes must be made on both sides)
// NOTE ANY NUMBER HERE MUST BE A 1 OR ANY POWER OF TWO, THERE IS A MAXIMUM OF 32 INDIVIDUAL LIQUID TYPES POSSIBLE
#define LIQUID_BLOOD_0_P 1
#define LIQUID_BLOOD_0_N 2
#define LIQUID_BLOOD_A_P 4
#define LIQUID_BLOOD_A_N 8
#define LIQUID_BLOOD_B_P 16
#define LIQUID_BLOOD_B_N 32
#define LIQUID_BLOOD_AB_P 64
#define LIQUID_BLOOD_AB_N 128
#define LIQUID_SALINE 256

#define LIQUID_WATER 512
#define LIQUID_RIVERWATER 1024
#define LIQUID_VODKA 2048
#define LIQUID_BEER 4096
#define LIQUID_GASOLINE 8192
#define LIQUID_DIESEL 16384
#define LIQUID_DISINFECTANT 32768
#define LIQUID_SOLUTION 65536 //sodium bicarbonate, currently
#define LIQUID_SNOW 131072
#define LIQUID_SALTWATER 262144
#define LIQUID_FRESHWATER 524288
#define LIQUID_STILLWATER 1048576
#define LIQUID_HOTWATER 2097152
#define LIQUID_CLEANWATER 4194304

// THESE ARE GROUPS MADE FOR CONTAINER SETUP, THESE DO NOT HAVE TO BE REPRESENTED SCRIPT-SIDE AND ARE A COMBINATION OF INDIVIDUAL LIQUID TYPES, THERE IS NO MAX LIMIT
#define CONTAINER_BLOOD_ALL LIQUID_BLOOD_0_P + LIQUID_BLOOD_0_N + LIQUID_BLOOD_A_P + LIQUID_BLOOD_A_N + LIQUID_BLOOD_B_P + LIQUID_BLOOD_B_N + LIQUID_BLOOD_AB_P + LIQUID_BLOOD_AB_N + LIQUID_SALINE
#define CONTAINER_ALL CONTAINER_BLOOD_ALL + LIQUID_WATER + LIQUID_RIVERWATER + LIQUID_VODKA + LIQUID_BEER + LIQUID_GASOLINE + LIQUID_DIESEL + LIQUID_DISINFECTANT + LIQUID_SOLUTION + LIQUID_SNOW + LIQUID_SALTWATER + LIQUID_FRESHWATER + LIQUID_HOTWATER + LIQUID_CLEANWATER
#define CONTAINER_ALL_BLOODLESS CONTAINER_ALL - (CONTAINER_BLOOD_ALL) - LIQUID_DISINFECTANT
#define CONTAINER_ALL_GASOLINELESS CONTAINER_ALL - (CONTAINER_BLOOD_ALL) - LIQUID_DISINFECTANT - LIQUID_GASOLINE - LIQUID_DIESEL

//--------------
// AGENTS
//--------------
// BEWARE, ALL NUMBERS 2 RAISED TO THE POWER OF 0 - 32, MAX 32 INDIVIDUAL AGENTS, MUST MATCH SCRIPT-SIDE AGENT CONFIGURATION
#define AGENT_CHOLERA 			  1
#define AGENT_INFLUENZA 		  2
#define AGENT_SALMONELLA		  4
#define AGENT_BRAIN 			  8
#define AGENT_FOOD_POISON		  16
#define AGENT_CHEMICAL_POISON	  32
#define AGENT_WOUND				  64
#define AGENT_NERVE				  128

//--------------------------------
// DAMAGE LABELS
#define PRISTINE 0
#define WORN 1
#define DAMAGED 2
#define BADLY_DAMAGED 3
#define RUINED 4
//---------------------

#define PRISTINE_VALUE		1.0
#define WORN_VALUE			0.7
#define DAMAGED_VALUE		0.5
#define BADLY_DAMAGED_VALUE	0.3
#define RUINED_VALUE		0.0

#define WETNESS_DRY     0.049
#define WETNESS_DAMP    0.249
#define WETNESS_WET     0.49
#define WETNESS_SOAKED    0.79
#define WETNESS_DRENCHED  1.0


#define DMG_LABELS_COMMON_EDGES	{{PRISTINE_VALUE,{}}, {WORN_VALUE,{}}, {DAMAGED_VALUE,{}}, {BADLY_DAMAGED_VALUE,{}}, {RUINED_VALUE,{}}};

//--------------------------------
// ENERGY MANAGER CONSTANTS

// List of energy providers and their capacity
#define BATTERY_9V_ENERGY_SPAWN 			50
#define CAR_BATTERY_ENERGY_MAX 				500
#define CAR_BATTERY_ENERGY_SPAWN 			500
#define TRUCK_BATTERY_ENERGY_MAX 			1500
#define TRUCK_BATTERY_ENERGY_SPAWN 			1500
#define POWER_GENERATOR_ENERGY_MAX 			10000
#define POWER_GENERATOR_ENERGY_SPAWN 		5000
#define LARGE_GAS_CANISTER_ENERGY_SPAWN		800
#define MEDIUM_GAS_CANISTER_ENERGY_SPAWN	650
#define SMALL_GAS_CANISTER_ENERGY_SPAWN 	330
#define POWER_GENERATOR_TISY_ENERGY_MAX 	60000
#define POWER_GENERATOR_TISY_ENERGY_SPAWN 	0

// Energy consumption (per second) of devices running on 9V battery
#define HEAD_TORCH 						0.01
#define FLASHLIGHT 						0.01
#define WALKIE_TALKIE 					0.01
#define MEGAPHONE 						0.02
#define RANGE_FINDER 					0.01
#define POWERED_OPTICS 					0.02
#define CASSETTE_PLAYER 				0.02
#define DEFIBRILLATOR_PER_CHARGE 		9
#define DEFIBRILLATOR_AFTER_CHARGE_IDLE 0.02
#define CATTLE_PROD_PER_ATTACK 			1.5
#define STUN_BATON_PER_ATTACK 			3

// Energy consumption (per second) of bigger devices powered by car battery/generator)
#define POWER_GENERATOR 				0.28
#define BASE_RADIO 						0.05
#define RADIO_PANEL_BIG 				0.20
#define PAS_TERMINAL 					0.15
#define BARBED_WIRE_IDLE 				0.01
#define BARBED_WIRE_PER_SHOCK 			3
#define SPOTLIGHT 						0.14
#define XMAS_LIGHTS 					0.05
#define REFRIDGERATOR 					0.1
#define BATTERY_CHARGER_IDLE 			0.01
#define BATTERY_CHARGER_ENERGY_TRANSFER 1
#define POWER_GENERATOR_TISY 			8

// Gas burners (value is gas units per second)
#define PORTABLE_GAS_STOVE 				1
#define PORTABLE_GAS_LAMP 				0.1


// Plug types
#define PLUG_UNDEFINED 0
#define PLUG_BATTERY_SLOT 1
#define PLUG_COMMON_APPLIANCE 2
#define PLUG_CROCODILE_PINS 3
#define PLUG_CROCODILE_PINS_CHARGER 4
#define PLUG_PAS_DEVICE 5
#define PLUG_BARBED_WIRE 6
#define PLUG_GAS_CAN_SLOT 7
#define PLUG_VEHICLE_BATTERY_PINS 8

// Wetness exposure
#define STOP_WORK_WHEN_DAMP 1
#define STOP_WORK_WHEN_WET 0.5
#define STOP_WORK_WHEN_SOAKING_WET 0.1

// Automatic attachment actions on energy providers
#define NO_ATTACHMENT_ACTION 0
#define PLUG_THIS_INTO_ATTACHMENT 1
#define PLUG_ATTACHMENTS_INTO_THIS 2

// END OF ENERGY MANAGER CONSTANTS
//--------------------------------

//--------------------------------
// COOKING METHODS
#define COOKING_METHOD_NONE		0		//all values must be the same as in Scripts/4_World/Classes/Cooking/Cooking.c - enum CookingMethodType
#define COOKING_METHOD_BAKING	1
#define COOKING_METHOD_BOILING	2
#define COOKING_METHOD_DRYING	3
#define COOKING_METHOD_TIME		4
//FOOD STAGES
#define FOOD_STAGE_NONE			0		//all values must be the same as in Scripts/4_World/Classes/FoodStage/FoodStage.c - enum FoodStageType
#define FOOD_STAGE_RAW			1
#define FOOD_STAGE_BAKED		2
#define FOOD_STAGE_BOILED		3
#define FOOD_STAGE_DRIED		4
#define FOOD_STAGE_BURNED		5
#define FOOD_STAGE_ROTTEN		6
//--------------------------------

// SKINNING CONSTANTS
// Only basic values are here for easy adjustments. For more options go to configs of each animal.
// After changing these constants, do not forget to build all PBOs that reads them!
#define HumanSteaksCount 					10
#define HumanSteaksQuantityMinMaxCoef 		{0.5, 1}
#define HumanGutsCount 						1
#define HumanGutsQuantityMinMaxCoef 		{0.5, 0.8}
#define HumanLardCount 						1
#define HumanLardQuantityMinMaxCoef 		{0.5, 1}
#define HumanBonesCount 					2
#define HumanBonesQuantityMinMaxCoef 		{0.75, 1}

#define CervusSteaksCount				 	17
#define CervusSteaksQuantityMinMaxCoef 		{0.75, 1}
#define CervusGutsCount 					3
#define CervusGutsQuantityMinMaxCoef 		{0.5, 0.8}
#define CervusLardCount 					3
#define CervusLardQuantityMinMaxCoef 		{0.5, 1}
#define CervusBonesCount 					3
#define CervusBonesQuantityMinMaxCoef 		{0.8, 1}

#define CowSteaksCount 						20
#define CowSteaksQuantityMinMaxCoef 		{0.75, 1}
#define CowGutsCount 						5
#define CowGutsQuantityMinMaxCoef 			{0.5, 0.8}
#define CowLardCount 						3
#define CowLardQuantityMinMaxCoef 			{0.5, 1}
#define CowBonesCount 						4
#define CowBonesQuantityMinMaxCoef 			{0.8, 1}

#define CapreolusSteaksCount 				10
#define CapreolusSteaksQuantityMinMaxCoef 	{0.3, 7}
#define CapreolusGutsCount 					2
#define CapreolusGutsQuantityMinMaxCoef 	{0.5, 0.8}
#define CapreolusLardCount 					1
#define CapreolusLardQuantityMinMaxCoef 	{0.2, 0.5}
#define CapreolusBonesCount 				1
#define CapreolusBonesQuantityMinMaxCoef 	{0.8, 1}

#define FoxSteaksCount 						4
#define FoxSteaksQuantityMinMaxCoef 		{0.5, 1}
#define FoxGutsCount 						1
#define FoxGutsQuantityMinMaxCoef 			{0.5, 0.8}
#define FoxLardCount 						1
#define FoxLardQuantityMinMaxCoef 			{0.2, 0.4}
#define FoxBonesCount 						1
#define FoxBonesQuantityMinMaxCoef 			{0.6, 8}

#define WildBoarSteaksCount 				13
#define WildBoarSteaksQuantityMinMaxCoef 	{0.5, 1}
#define WildBoarGutsCount 					2
#define WildBoarGutsQuantityMinMaxCoef 		{0.5, 0.8}
#define WildBoarLardCount 					1
#define WildBoarLardQuantityMinMaxCoef 		{0.5, 0.8}
#define WildBoarBonesCount 					2
#define WildBoarBonesQuantityMinMaxCoef 	{0.8, 1}

#define PigSteaksCount 						14
#define PigSteaksQuantityMinMaxCoef 		{0.5, 1}
#define PigGutsCount 						2
#define PigGutsQuantityMinMaxCoef 			{0.5, 0.8}
#define PigLardCount 						1
#define PigLardQuantityMinMaxCoef 			{0.5, 0.8}
#define PigBonesCount 						2
#define PigBonesQuantityMinMaxCoef 			{0.8, 1}
// Sheep & Mouflon
#define OvisSteaksCount 					13
#define OvisSteaksQuantityMinMaxCoef 		{0.5, 1}
#define OvisGutsCount 						2
#define OvisGutsQuantityMinMaxCoef 			{0.5, 0.8}
#define OvisLardCount 						1
#define OvisLardQuantityMinMaxCoef 			{0.4, 8}
#define OvisBonesCount 						2
#define OvisBonesQuantityMinMaxCoef 		{0.8, 1}

#define RabbitSteaksCount 					2
#define RabbitSteaksQuantityMinMaxCoef 		{0.75, 1}
#define RabbitSmallGutsCount 				1
#define RabbitSmallGutsQuantityMinMaxCoef 	{0.5, 0.8}
#define RabbitLardCount 					1
#define RabbitLardQuantityMinMaxCoef 		{0.1, 0.2}
#define RabbitBonesCount 					1
#define RabbitBonesQuantityMinMaxCoef 		{0.2, 0.3}

#define ChickenSteaksCount 					2
#define ChickenSteaksQuantityMinMaxCoef 	{0.5, 1}
#define ChickenFeathersCount 				10
#define ChickenFeathersQuantityMinMaxCoef 	{0.5, 1}
#define ChickenSmallGutsCount 				0
#define ChickenSmallGutsQuantityMinMaxCoef 	{0.5, 0.8}
#define ChickenBonesCount 					1
#define ChickenBonesQuantityMinMaxCoef 		{0.2, 0.3}

#define GoatSteaksCount 					10
#define GoatSteaksQuantityMinMaxCoef 		{0.5, 1}
#define GoatGutsCount 						2
#define GoatGutsQuantityMinMaxCoef 			{0.5, 0.8}
#define GoatLardCount 						1
#define GoatLardQuantityMinMaxCoef 			{0.3, 6}
#define GoatBonesCount 						1
#define GoatBonesQuantityMinMaxCoef 		{0.8, 1}

#define WolfHead 							1
#define WolfHeadQuantityMinMaxCoef 			{0, 0.55}
#define WolfSteaksCount 					10
#define WolfSteaksQuantityMinMaxCoef 		{0.5, 1}
#define WolfGutsCount 						2
#define WolfGutsQuantityMinMaxCoef 			{0.5, 0.8}
#define WolfLardCount 						1
#define WolfLardQuantityMinMaxCoef 			{0.5, 1}
#define WolfBonesCount						1
#define WolfBonesQuantityMinMaxCoef 		{0.7, 1}

//Xmas Reindeer

#define TarandusLightsCount					1
#define TarandusLightsMinMaxCoef 			{1, 1}

// END OF SKINNING CONSTANTS
//--------------------------------

//----------------------
// MINING/GATHERING
//----------------------
#define MINE_DATA_CUSTOM_BARK(cuttable, primary_amount,secondary_amount, damage, time, primary_output, secondary_output, bark_type) \
	isCuttable = ##cuttable##; \
	primaryDropsAmount = ##primary_amount##; \
	secondaryDropsAmount = ##secondary_amount##; \
	toolDamage = ##damage##; \
	cycleTimeOverride = ##time##; \
	primaryOutput = ##primary_output##; \
	secondaryOutput = ##secondary_output##; \
	barkType = ##bark_type##; \
	
#define MINE_DATA_DEFAULT_BARK(cuttable, primary_amount,secondary_amount, damage, time, primary_output, secondary_output) \
	isCuttable = ##cuttable##; \
	primaryDropsAmount = ##primary_amount##; \
	secondaryDropsAmount = ##secondary_amount##; \
	toolDamage = ##damage##; \
	cycleTimeOverride = ##time##; \
	primaryOutput = ##primary_output##; \
	secondaryOutput = ##secondary_output##; \
	
#define MINING_WOOD_FAST 2
#define MINING_WOOD_MEDIUM 2
#define MINING_WOOD_SLOW 3


// OPTICS FOV CONSTANTS

#define FOV_45 		0.3926
#define FOV_60 		0.5236
#define FOV_70 		0.610865

// END OF OPTICS CONSTANTS
//--------------------------------

#define true 1
#define false 0

// type scope
#define private 0
#define protected 1
#define public 2
#define crafted 1

// storageCategory
#define SC_dynamic		1
#define SC_animal		2
#define SC_zombie		3
#define SC_vehicle		4
#define SC_random		5
#define SC_custom		6
#define SC_building		7
#define SC_door			8
#define SC_player		9
#define SC_volatile		10

// loot placement rotation bitmask
#define PLACEMENT_ROT_Bottom							32
#define PLACEMENT_ROT_Top								2
#define PLACEMENT_ROT_BottomTop							34
#define PLACEMENT_ROT_Left								4
#define PLACEMENT_ROT_Right								8
#define PLACEMENT_ROT_LeftRight							12
#define PLACEMENT_ROT_Front								1
#define PLACEMENT_ROT_Back								16
#define PLACEMENT_ROT_FrontBack							17
#define PLACEMENT_ROT_All								63
#define PLACEMENT_ROT_Ignore							64		//! to ignore rotations and placements
#define PLACEMENT_ROT_DEPlacementCorrection				256		//! correct angle when placing InventoryItem at Building pos


// steer type simulation
#define STEER_NORMAL   0
#define STEER_INVERSE  1
#define STEER_NONE     2


#define ReadAndWrite 0 //! any modifications enabled
#define ReadAndCreate 1 //! only adding new class members is allowed
#define ReadOnly 2 //! no modifications enabled
#define ReadOnlyVerified 3 //! no modifications enabled, CRC test applied

#define LockNo		0
#define LockCadet	1
#define LockYes		2

#define NEVER_DESTROY 1000	// for MP - destroying dead bodies

/*
Synchronized Variable Definitions

basic importance is 1 � this mean that difference 1 in this variable is as important as offset 10 meters in the entity position
you can increase the importance a bit (up to cca 10) for very important variables or decrease (down to cca 0.1) for not so important variables based on testing
*/
#define SYNC_USED 1
#define SYNC_QUANTITY 1
#define SYNC_SETUP 1
#define SYNC_INUSAGE 1
#define SYNC_NOTE 0.5
#define SYNC_BUTANE 0.5
#define SYNC_WET 0.2
#define SYNC_BLOOD 0.2
#define SYNC_HEALTH 0.2
#define SYNC_SHOCK 0.2
#define SYNC_KPLAYERS 0.1
#define SYNC_KZOMBIES 0.1
#define SYNC_POWER 0.1
#define SYNC_TEMP 0.2
#define SYNC_TEMPERATURE 0.2
#define SYNC_RESTRAINEDWITH 1

//p(k) = C * k^(-T) * e^(-k/K) + d
#define ROUNDS_PER_MINUTE(rpm) __EXEC(_c=50.1984; _r=rpm; _T=0.954088; _e=2.71828; _K=-5403.26; _d=-0.0393994; _K=-1*_r/_K; _e=_e^_K; _T=-1*_T; _r=_r^_T); reloadTime = __EVAL(_C*_r*_e+_d)

enum
{
  DestructNo,
  DestructBuilding,
  DestructEngine,
  DestructTree,
  DestructTent,
  DestructMan,
  DestructDefault,
  DestructWreck
};

#define VIEW_GUNNER 1000
#define VIEW_PILOT 1100
#define VIEW_CARGO 1200

#define DAMAGE_MAT(x,y) x####y,x##destruct_half_##y,x##destruct_full_##y,
	
#define RepairNone 0
#define RepairWeaponKit 1
#define RepairSewingKit 2
#define RepairLeatherSewingKit 3
#define RepairWhetstone 4
#define RepairDuctTape 5
#define RepairTireKit 6
#define RepairElectronicRepairKit 7
#define RepairEpoxyPutty 8
#define RepairGlassKit 9
#define RepairBlowtorch 10

/* 
	Restraining defs
*/

#define DEFAULT_SHARP_UNLOCK 3

//--------------
// BASE BUILDING
//--------------
#define TOOL_NO_ACTION	0		//tool is not compatible with any action of given type
#define TOOL_MOUNT_WIRE	1		//tool compatible with parts that are built by mounting a wire material on construction
#define TOOL_NAIL 		2		//tool compatible with parts that are nailed with material + nails
#define TOOL_DIG_BASE	4		//tool compatible with base parts that are built by digging
#define TOOL_MOUNT_LOG	8		//tool compatible with base parts that are built by mounting a wooden log (2nd and 3rd floor on watchtower)
#define TOOL_HEAVY 		16		//tool for heavy construction (sledgehammer)
#define TOOL_EXCAVATION 32		//tool for serious digging (pickaxe)
#define TOOL_WOODWORK 	64		//tool for cutting(destroying) wooden building parts
#define TOOL_HANDS 		128		//no tool, de/construction doable by hands

#define MATERIAL_NONE	0
#define MATERIAL_LOG	1
#define MATERIAL_WOOD	2
#define MATERIAL_STAIRS	3
#define MATERIAL_METAL	4
#define MATERIAL_WIRE	5


//----------------------
// HIT IMPACT BEHAVIOUR
//----------------------
#define IMPACT_LIGHT	0
#define IMPACT_HEAVY	1

//----------------------
// HIT IMPACT BEHAVIOUR
//----------------------
#define BEHAVIOUR_HEAVY			0
#define BEHAVIOUR_ONEHANDED		1
#define BEHAVIOUR_TWOHANDED		2

//----------------------
// SHOCK IMPACT BEHAVIOUR
//----------------------
#define SHOCK_IMPACT_DEFAULT	1
#define SHOCK_IMPACT_LONG		1.75
#define SHOCK_IMPACT_MEDLONG	2.75
#define SHOCK_IMPACT_MEDSHORT	4
#define SHOCK_IMPACT_SHORT		6

//----------------------
//Hair selection hiding listing
//----------------------
#define HAIR_HIDING_SELECTIONS \
"Clipping_GhillieHood", \
"Clipping_grathelm", \
"Clipping_ConstructionHelmet", \
"Clipping_Hockey_hekmet", \
"Clipping_Maska", \
"Clipping_ProtecSkateHelmet2", \
"Clipping_BandanaFace", \
"Clipping_NioshFaceMask", \
"Clipping_NBC_Hood", \
"Clipping_MotoHelmet", \
"Clipping_FireHelmet", \
"Clipping_ushanka", \
"Clipping_TankerHelmet", \
"Clipping_SantasBeard", \
"Clipping_Surgical_mask", \
"Clipping_PumpkinHelmet", \
"Clipping_Balaclava_3holes", \
"Clipping_Balaclava", \
"Clipping_GP5GasMask", \
"Clipping_AirborneMask", \
"Clipping_BoonieHat", \
"Clipping_prison_cap", \
"Clipping_MilitaryBeret_xx", \
"Clipping_Policecap", \
"Clipping_OfficerHat", \
"Clipping_Hat_leather", \
"Clipping_CowboyHat", \
"Clipping_BandanaHead", \
"Clipping_SantasHat", \
"Clipping_FlatCap", \
"Clipping_MxHelmet", \
"Clipping_baseballcap", \
"Clipping_BeanieHat", \
"Clipping_MedicalScrubs_Hat", \
"Clipping_RadarCap", \
"Clipping_ZmijovkaCap", \
"Clipping_HeadTorch", \
"Clipping_pilotka", \
"Clipping_HeloHelmet", \
"Clipping_HelmetMich", \
"Clipping_Ssh68Helmet", \
"Clipping_Mich2001", \
"Clipping_Welding_Mask", \
"Clipping_VintageHockeyMask", \
"Clipping_mouth_rags", \
"Clipping_Gasmask", \
"Clipping_WitchHood", \
"Clipping_WitchHat", \
"Clipping_NVGHeadstrap", \
"Clipping_headCover_improvised", \
"Clipping_BurlapSack"

//----------------------
// PRELOADING
//----------------------
#define PRELOAD_CLASS_ONLY		0
#define PRELOAD_SHAPE_QUICK		1
#define PRELOAD_SHAPE_ALL		2

//----------------------
// ITEM LOCKING
//----------------------

#define LOCK_NONE	0 //When item cannot be locked
#define LOCK_SCREW	1
#define LOCK_BOLT	2
#define LOCK_NUT	3
#define LOCK_WIRE	4

//----------------------
// BAIT TYPES
//----------------------
#define BAIT_TYPE_EMPTY			0
#define BAIT_TYPE_MEAT_SMALL	1
#define BAIT_TYPE_MEAT_LARGE	2
#define BAIT_TYPE_PLANT			3
#define BAIT_TYPE_SEED			4
#define BAIT_TYPE_MUSHROOM		5

//----------------------
// FINISHER ATTACKS
//----------------------
#define FINISHER_LIVER	1
#define FINISHER_NECK	2

//----------------------
// NOISE FOR AI SENSOR
//----------------------

#define NOISE(str, typ) \
class NoiseShoot\
{ \
	strength = ##str##; \
	type = ##typ##; \
};

#define NOISE_FIRESHOT_MAX() \
NOISE(100,"shot");

#define NOISE_FIRESHOT_HIGH() \
NOISE(80,"shot");

#define NOISE_FIRESHOT_MEDIUM() \
NOISE(60,"shot");

#define NOISE_FIRESHOT_LOW() \
NOISE(40,"shot");

#define NOISE_FIRESHOT_VERYLOW() \
NOISE(20,"shot");

#define NOISE_FIRESHOT_MIN() \
NOISE(5,"sound");

//----------------------
// DEBUG ITEM CATEGORY (MAX 32 categories allowed)
//----------------------
#define CATEGORY_FIREARMS			1
#define CATEGORY_MELEE				2
#define CATEGORY_ATTACHMENTS		3
#define CATEGORY_MAGAZINES			4
#define CATEGORY_AMMO				5
#define CATEGORY_FOOD				6
#define CATEGORY_MEDICAL			7
#define CATEGORY_CARS				8
#define CATEGORY_BACKPACKS			9
#define CATEGORY_BBUILDING			10


//Static object macro
#define Static_OBJECT(classname, path) \
class StaticObj_##classname##: HouseNoDestruct\
{ \
	scope = protected; \
	model = ##path##; \
};

//Static DE object macro
#define Static_DE_OBJECT(classname, path) \
class StaticObj_##classname##: HouseNoDestruct\
{ \
	scope = public; \
	storageCategory = SC_vehicle; \
	model = ##path##; \
};