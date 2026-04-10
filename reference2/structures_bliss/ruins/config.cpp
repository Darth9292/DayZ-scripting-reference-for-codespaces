class CfgPatches
{
	class DZ_Structures_Bliss_Ruins
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
	class Land_Ruin_BusStop_Village2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_BusStop_Village2.p3d";
	};
	class Land_Ruin_Camp_House: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Camp_House.p3d";
	};
	class Land_Ruin_Slum_House2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Slum_House2.p3d";
	};
	class Land_Ruin_Slum_House3: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Slum_House3.p3d";
	};
	class Land_Ruin_Slum_House4: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Slum_House4.p3d";
	};
	class Land_Ruin_Highway_Pillar1: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Highway_Pillar1.p3d";
	};
	class Land_Ruin_Highway_Pillar1_Garage: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Highway_Pillar1_Garage.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodChurchLargeOpen";
				soundClose="doorWoodChurchLargeClose";
				soundLocked="doorWoodChurchLargeRattle";
				soundOpenABit="doorWoodChurchLargeOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodChurchLargeOpen";
				soundClose="doorWoodChurchLargeClose";
				soundLocked="doorWoodChurchLargeRattle";
				soundOpenABit="doorWoodChurchLargeOpenABit";
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
				class twin1
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorstwin1"
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
				class twin2
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorstwin2"
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
	class Land_Ruin_Chapel2_White: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Chapel2_White.p3d";
	};
	class Land_Ruin_Chapel2_Yellow: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Chapel2_Yellow.p3d";
	};
	class Land_Ruin_Church2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Church2.p3d";
	};
	class Land_Ruin_Church2_NoIvy: Land_Ruin_Church2
	{
		model="\DZ\structures_bliss\Ruins\Ruin_Church2_NoIvy.p3d";
	};
	class Land_Ruin_House_1B01: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1B01.p3d";
	};
	class Land_Ruin_House_1W01: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W01.p3d";
	};
	class Land_Ruin_House_1W02: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W02.p3d";
	};
	class Land_Ruin_House_1W03: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W03.p3d";
	};
	class Land_Ruin_House_1W04: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W04.p3d";
	};
	class Land_Ruin_House_1W05: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W05.p3d";
	};
	class Land_Ruin_House_1W06: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W06.p3d";
	};
	class Land_Ruin_House_1W07: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W07.p3d";
	};
	class Land_Ruin_House_1W08: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W08.p3d";
	};
	class Land_Ruin_House_1W09: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W09.p3d";
	};
	class Land_Ruin_House_1W10: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W10.p3d";
	};
	class Land_Ruin_House_1W11: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W11.p3d";
	};
	class Land_Ruin_House_1W12: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W12.p3d";
	};
	class Land_Ruin_House_1W13: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_1W13.p3d";
	};
	class Land_Ruin_House_2B01: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_2B01.p3d";
	};
	class Land_Ruin_House_2B02: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_2B02.p3d";
	};
	class Land_Ruin_House_2B03: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_2B03.p3d";
	};
	class Land_Ruin_House_2B04: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_2B04.p3d";
	};
	class Land_Ruin_House_2W01: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_2W01.p3d";
	};
	class Land_Ruin_House_2W02: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_2W02.p3d";
	};
	class Land_Ruin_House_2W03: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_2W03.p3d";
	};
	class Land_Ruin_House_2W04: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_2W04.p3d";
	};
	class Land_Ruin_House_2W05: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_House_2W05.p3d";
	};
	class Land_Ruin_HouseBig1: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig1.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
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
				class twin1
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
	class Land_Ruin_HouseBig1_NoIvy: Land_Ruin_HouseBig1
	{
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig1_NoIvy.p3d";
	};
	class Land_Ruin_HouseBig1_Half: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig1_Half.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
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
				class twin1
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
	class Land_Ruin_HouseBig1_NoIvy_Half: Land_Ruin_HouseBig1_Half
	{
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig1_NoIvy_Half.p3d";
	};
	class Land_Ruin_HouseBig2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig2.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
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
				class twin1
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
				class twin2
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
	class Land_Ruin_HouseBig2_NoIvy: Land_Ruin_HouseBig2
	{
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig2_NoIvy.p3d";
	};
	class Land_Ruin_HouseBig2_Half: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig2_Half.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
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
				class twin1
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
				class twin2
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
	class Land_Ruin_HouseBig2_NoIvy_Half: Land_Ruin_HouseBig2_Half
	{
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig2_NoIvy_Half.p3d";
	};
	class Land_Ruin_HouseBig3: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig3.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
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
				class twin1
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
	class Land_Ruin_HouseBig3_NoIvy: Land_Ruin_HouseBig3
	{
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig3_NoIvy.p3d";
	};
	class Land_Ruin_HouseBig3_Half: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig3_Half.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
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
				class twin1
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
	class Land_Ruin_HouseBig3_NoIvy_Half: Land_Ruin_HouseBig3_Half
	{
		model="\DZ\structures_bliss\Ruins\Ruin_HouseBig3_NoIvy_Half.p3d";
	};
	class Land_Ruin_HouseSmall1: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_HouseSmall1.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
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
				class twin1
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
	class Land_Ruin_HouseSmall1_NoIvy: Land_Ruin_HouseSmall1
	{
		model="\DZ\structures_bliss\Ruins\Ruin_HouseSmall1_NoIvy.p3d";
	};
	class Land_Ruin_HouseSmall1_Half: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_HouseSmall1_Half.p3d";
	};
	class Land_Ruin_HouseSmall1_NoIvy_Half: Land_Ruin_HouseSmall1_Half
	{
		model="\DZ\structures_bliss\Ruins\Ruin_HouseSmall1_NoIvy_Half.p3d";
	};
	class Land_Ruin_HouseSmall2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_HouseSmall2.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
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
				class twin1
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
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
	class Land_Ruin_HouseSmall2_NoIvy: Land_Ruin_HouseSmall2
	{
		model="\DZ\structures_bliss\Ruins\Ruin_HouseSmall2_NoIvy.p3d";
	};
	class Land_Ruin_Mil_ControlTower: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Mil_ControlTower.p3d";
	};
	class Land_Ruin_Mil_GuardBox_Brown: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Mil_GuardBox_Brown.p3d";
	};
	class Land_Ruin_Mil_GuardBox_Green: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Mil_GuardBox_Green.p3d";
	};
	class Land_Ruin_Mil_GuardBox_Smooth: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Mil_GuardBox_Smooth.p3d";
	};
	class Land_Ruin_Shed_Closed: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Shed_Closed.p3d";
	};
	class Land_Ruin_Shed_Closed2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Shed_Closed2.p3d";
	};
	class Land_Ruin_Smokestack_Metal: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Ruins\Ruin_Smokestack_Metal.p3d";
	};
	class StaticObj_bed_large_metal: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\bed_large_metal.p3d";
	};
	class StaticObj_bed_large_metal_broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\bed_large_metal_broken.p3d";
	};
	class StaticObj_bed_large_metal_crushed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\bed_large_metal_crushed.p3d";
	};
	class StaticObj_carpet_big_dirty: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\carpet_big_dirty.p3d";
	};
	class StaticObj_carpet_big_dirty2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\carpet_big_dirty2.p3d";
	};
	class StaticObj_case_bedroom_a: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\case_bedroom_a.p3d";
	};
	class StaticObj_case_bedroom_b: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\case_bedroom_b.p3d";
	};
	class StaticObj_chair: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\chair.p3d";
	};
	class StaticObj_chair_broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\chair_broken.p3d";
	};
	class StaticObj_chair_crushed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\chair_crushed.p3d";
	};
	class StaticObj_chair_leisure: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\chair_leisure.p3d";
	};
	class StaticObj_chair_leisure_broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\chair_leisure_broken.p3d";
	};
	class StaticObj_chair_leisure_crushed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\chair_leisure_crushed.p3d";
	};
	class StaticObj_classroom_case_a: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\classroom_case_a.p3d";
	};
	class StaticObj_classroom_case_a_broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\classroom_case_a_broken.p3d";
	};
	class StaticObj_classroom_case_a_crushed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\classroom_case_a_crushed.p3d";
	};
	class StaticObj_classroom_case_b: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\classroom_case_b.p3d";
	};
	class StaticObj_classroom_case_b_broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\classroom_case_b_broken.p3d";
	};
	class StaticObj_classroom_case_b_crushed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\classroom_case_b_crushed.p3d";
	};
	class StaticObj_drapes_long_torn: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\drapes_long_torn.p3d";
	};
	class StaticObj_drapes_torn: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\drapes_torn.p3d";
	};
	class StaticObj_flowerpot: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\flowerpot.p3d";
	};
	class StaticObj_lobby_table: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\lobby_table.p3d";
	};
	class StaticObj_piano_broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\piano_broken.p3d";
	};
	class StaticObj_picture_a: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\picture_a.p3d";
	};
	class StaticObj_picture_b: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\picture_b.p3d";
	};
	class StaticObj_picture_c: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\picture_c.p3d";
	};
	class StaticObj_picture_d: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\picture_d.p3d";
	};
	class StaticObj_picture_e: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\picture_e.p3d";
	};
	class StaticObj_picture_f: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\picture_f.p3d";
	};
	class StaticObj_picture_g: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\picture_g.p3d";
	};
	class StaticObj_racks: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\racks.p3d";
	};
	class StaticObj_racks_broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\racks_broken.p3d";
	};
	class StaticObj_racks_crushed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\racks_crushed.p3d";
	};
	class StaticObj_Ruin_Church2_01_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_Church2_01_Proxy.p3d";
	};
	class StaticObj_Ruin_Church2_02_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_Church2_02_Proxy.p3d";
	};
	class StaticObj_Ruin_Church2_03_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_Church2_03_Proxy.p3d";
	};
	class StaticObj_Ruin_Church2_04_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_Church2_04_Proxy.p3d";
	};
	class StaticObj_Ruin_Church2_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_Church2_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_House_1B01_1_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1B01_1_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1B01_2_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1B01_2_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1W02_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1W02_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1W03_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1W03_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1W04_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1W04_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1W05_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1W05_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1W06_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1W06_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1W07_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1W07_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1W09_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1W09_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1W11_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1W11_Proxy.p3d";
	};
	class StaticObj_Ruin_House_1W12_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_1W12_Proxy.p3d";
	};
	class StaticObj_Ruin_House_2B01_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_2B01_Proxy.p3d";
	};
	class StaticObj_Ruin_House_2B02_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_2B02_Proxy.p3d";
	};
	class StaticObj_Ruin_House_2B03_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_2B03_Proxy.p3d";
	};
	class StaticObj_Ruin_House_2B04_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_2B04_Proxy.p3d";
	};
	class StaticObj_Ruin_House_2W01_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_2W01_Proxy.p3d";
	};
	class StaticObj_Ruin_House_2W02_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_2W02_Proxy.p3d";
	};
	class StaticObj_Ruin_House_2W03_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_2W03_Proxy.p3d";
	};
	class StaticObj_Ruin_House_2W04_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_2W04_Proxy.p3d";
	};
	class StaticObj_Ruin_House_2W05_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_House_2W05_Proxy.p3d";
	};
	class StaticObj_Ruin_HouseBig1_Half_Proxy_01: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig1_Half_Proxy_01.p3d";
	};
	class StaticObj_Ruin_HouseBig1_Half_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig1_Half_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_HouseBig1_Proxy_01: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig1_Proxy_01.p3d";
	};
	class StaticObj_Ruin_HouseBig1_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig1_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_HouseBig1_Proxy_overgrowth_02: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig1_Proxy_overgrowth_02.p3d";
	};
	class StaticObj_Ruin_HouseBig1_Proxy_overgrowth_02_template: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig1_Proxy_overgrowth_02_template.p3d";
	};
	class StaticObj_Ruin_HouseBig1_Proxy_overgrowth_template: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig1_Proxy_overgrowth_template.p3d";
	};
	class StaticObj_Ruin_HouseBig2_Half_Proxy_01: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig2_Half_Proxy_01.p3d";
	};
	class StaticObj_Ruin_HouseBig2_Half_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig2_Half_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_HouseBig2_Proxy_01: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig2_Proxy_01.p3d";
	};
	class StaticObj_Ruin_HouseBig2_Proxy_02: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig2_Proxy_02.p3d";
	};
	class StaticObj_Ruin_HouseBig2_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig2_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_HouseBig3_Half_Proxy_01: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig3_Half_Proxy_01.p3d";
	};
	class StaticObj_Ruin_HouseBig3_Half_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig3_Half_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_HouseBig3_Proxy_01: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig3_Proxy_01.p3d";
	};
	class StaticObj_Ruin_HouseBig3_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseBig3_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_HouseSmall1_Half_Proxy_01: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseSmall1_Half_Proxy_01.p3d";
	};
	class StaticObj_Ruin_HouseSmall1_Half_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseSmall1_Half_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_HouseSmall1_Proxy_01: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseSmall1_Proxy_01.p3d";
	};
	class StaticObj_Ruin_HouseSmall1_Proxy_02: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseSmall1_Proxy_02.p3d";
	};
	class StaticObj_Ruin_HouseSmall1_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseSmall1_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_HouseSmall2_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseSmall2_Proxy.p3d";
	};
	class StaticObj_Ruin_HouseSmall2_Proxy_bricks: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseSmall2_Proxy_bricks.p3d";
	};
	class StaticObj_Ruin_HouseSmall2_Proxy_overgrowth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_HouseSmall2_Proxy_overgrowth.p3d";
	};
	class StaticObj_Ruin_Mil_ControlTower_Proxy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\Ruin_Mil_ControlTower_Proxy.p3d";
	};
	class StaticObj_Furniture_shelfs_small: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\shelfs_small.p3d";
	};
	class StaticObj_Furniture_shelfs_small_broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\shelfs_small_broken.p3d";
	};
	class StaticObj_Furniture_shelfs_small_crushed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\shelfs_small_crushed.p3d";
	};
	class StaticObj_Furniture_skrin_bar: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\skrin_bar.p3d";
	};
	class StaticObj_Furniture_SofaCorner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\SofaCorner.p3d";
	};
	class StaticObj_Furniture_table: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\table.p3d";
	};
	class StaticObj_Furniture_table_broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\table_broken.p3d";
	};
	class StaticObj_Furniture_table_crushed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\table_crushed.p3d";
	};
	class StaticObj_Furniture_tools_racking: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\tools_racking.p3d";
	};
	class StaticObj_Furniture_wardrobe_a: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\wardrobe_a.p3d";
	};
	class StaticObj_Furniture_wardrobe_b: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Ruins\Proxy\wardrobe_b.p3d";
	};
};
