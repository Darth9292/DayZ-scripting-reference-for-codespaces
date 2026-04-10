class CfgPatches
{
	class DZ_Structures_Bliss_Underground
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Underground_Corridor_Main_Both: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Corridor\Underground_Corridor_Main_Both.p3d";
	};
	class Land_Underground_Corridor_Main_Left: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Corridor\Underground_Corridor_Main_Left.p3d";
	};
	class Land_Underground_Corridor_Main_Right: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Corridor\Underground_Corridor_Main_Right.p3d";
	};
	class Land_Underground_Corridor_Connector: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Corridor\Underground_Corridor_Connector.p3d";
	};
	class Land_Underground_Corridor_Connector_Inv: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Corridor\Underground_Corridor_Connector_Inv.p3d";
	};
	class Land_Underground_Tunnel_Single: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Tunnel\Underground_Tunnel_Single.p3d";
	};
	class Land_Underground_Tunnel_Single_Left: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Tunnel\Underground_Tunnel_Single_Left.p3d";
	};
	class Land_Underground_Tunnel_Single_Right: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Tunnel\Underground_Tunnel_Single_Right.p3d";
	};
	class Land_Underground_Stairs_Block: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Stairs\Underground_Stairs_Block.p3d";
	};
	class Land_Underground_Stairs_Block_Corridor: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Stairs\Underground_Stairs_Block_Corridor.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0;
				soundOpen="doorMetalValveOpen";
				soundClose="doorMetalValveClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=2.5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Underground_Stairs_Block_Corridor_NoDoor: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Stairs\Underground_Stairs_Block_Corridor_NoDoor.p3d";
	};
	class Land_Underground_Stairs_Block_Terminator: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Stairs\Underground_Stairs_Block_Terminator.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalValveOpen";
				soundClose="doorMetalValveClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=2.5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Underground_Stairs_Exit: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Stairs\Underground_Stairs_Exit.p3d";
		class Doors
		{
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=10;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
		class AnimationSources
		{
			class EntranceDoor
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	class Land_Underground_Stairs_Start: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Stairs\Underground_Stairs_Start.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0;
				soundOpen="doorMetalValveOpen";
				soundClose="doorMetalValveClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=2.5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Underground_Stairs_Collapsed: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Stairs\Underground_Stairs_Collapsed.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalValveOpen";
				soundClose="doorMetalValveClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=2.5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Underground_Entrance: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Entrance\Underground_Entrance.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
		};
		class AnimationSources
		{
			class EntranceDoor
			{
				source="user";
				initPhase=0;
				animPeriod=60;
			};
			class EntranceLight
			{
				source="user";
				initPhase=0;
				animPeriod=140;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=2.5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=2.5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Underground_Floor_Comms: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Floor\Underground_Floor_Comms.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=10;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=10;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Underground_Floor_Crew: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Floor\Underground_Floor_Crew.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=10;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=10;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Underground_WaterMaintenance: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Water\Underground_WaterMaintenance.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=10;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
	class Land_Underground_WaterReservoir: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Water\Underground_WaterReservoir.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=10;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
		class AnimationSources
		{
			class Valve1
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class Valve2
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class ValveGauge1
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class ValveGauge2
			{
				source="user";
				initPhase=1;
				animPeriod=0.5;
			};
		};
	};
	class Land_Underground_WaterReservoir_Water: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Water\Underground_WaterReservoir_Water.p3d";
	};
	class Land_Underground_Storage_Big: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_Big.p3d";
	};
	class Land_Underground_Storage_Big_Vent: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_Big_Vent.p3d";
	};
	class Land_Underground_Storage_Ammo: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_Ammo.p3d";
	};
	class Land_Underground_Storage_Ammo2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_Ammo2.p3d";
	};
	class Land_Underground_Storage_Barracks: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_Barracks.p3d";
	};
	class Land_Underground_Storage_Hospital: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_Hospital.p3d";
	};
	class Land_Underground_Storage_Laboratory: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_Laboratory.p3d";
	};
	class Land_Underground_Storage_POX: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_POX.p3d";
	};
	class Land_Underground_Storage_POX2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_POX2.p3d";
	};
	class Land_Underground_Storage_Prison: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_Prison.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
		};
	};
	class Land_Underground_Storage_Workshop: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\Underground_Storage_Workshop.p3d";
	};
	class Land_Underground_Panel: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Entrance\Underground_Panel.p3d";
		hiddenSelections[]=
		{
			"LED_Red",
			"LED_Green"
		};
	};
	class Land_Underground_Panel_Lever: Land_Underground_Panel
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Entrance\Underground_Panel_Lever.p3d";
		hiddenSelections[]=
		{
			"LED_Red",
			"LED_Green"
		};
		class AnimationSources
		{
			class PanelLever
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
		};
	};
	class StaticObj_Underground_Corridor_Main_Gate_L: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Underground\Corridor\Underground_Corridor_Main_Gate_L.p3d";
	};
	class StaticObj_Underground_Corridor_Main_Gate_R: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Underground\Corridor\Underground_Corridor_Main_Gate_R.p3d";
	};
	class StaticObj_Terrain_Livonia_ForestPatch: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Underground\Terrain\Terrain_Livonia_ForestPatch.p3d";
	};
	class StaticObj_Terrain_Livonia_GrassPatch: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Underground\Terrain\Terrain_Livonia_GrassPatch.p3d";
	};
	class StaticObj_ammoboxes_big: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\ammoboxes_big.p3d";
	};
	class StaticObj_ammoboxes_single: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\ammoboxes_single.p3d";
	};
	class StaticObj_ammoboxes_stacked: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\ammoboxes_stacked.p3d";
	};
	class StaticObj_Curtain_Divider: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\Curtain_divider.p3d";
	};
	class StaticObj_Medical_Tarp_Large_Yellow: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\Medical_Tarp_Large_Yellow.p3d";
	};
	class StaticObj_EngineCrane_01_F: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\EngineCrane_01_F.p3d";
	};
	class StaticObj_PalletTrolley_01_yellow_F: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\PalletTrolley_01_yellow_F.p3d";
	};
	class StaticObj_ToolTrolley_02_F: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\ToolTrolley_02_F.p3d";
	};
	class StaticObj_WhiteBoard: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\WhiteBoard.p3d";
	};
	class StaticObj_WhiteBoard_Laboratory: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Underground\Storage\proxy\WhiteBoard_Laboratory.p3d";
	};
};
