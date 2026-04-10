class CfgPatches
{
	class DZ_Structures_Bliss_Military
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
	class Land_Bunker1_Double: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Bunkers\Bunker1_Double.p3d";
	};
	class Land_Bunker1_Left: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Bunkers\Bunker1_Left.p3d";
	};
	class Land_Bunker1_Right: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Bunkers\Bunker1_Right.p3d";
	};
	class Land_Bunker2_Double: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Bunkers\Bunker2_Double.p3d";
	};
	class Land_Bunker2_Left: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Bunkers\Bunker2_Left.p3d";
	};
	class Land_Bunker2_Right: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Bunkers\Bunker2_Right.p3d";
	};
	class Land_Mil_ControlTower: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Houses\Mil_ControlTower.p3d";
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
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
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
				class door3
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
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
				class door4
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
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
	class Land_Mil_GuardBox_Brown: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Houses\Mil_GuardBox_Brown.p3d";
	};
	class Land_Mil_GuardBox_Green: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Houses\Mil_GuardBox_Green.p3d";
	};
	class Land_Mil_GuardBox_Smooth: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Houses\Mil_GuardBox_Smooth.p3d";
	};
	class Land_Mil_GuardHouse3: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Military\Houses\Mil_GuardHouse3.p3d";
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
	class StaticObj_Misc_DeconShower_Large: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Misc\Misc_DeconShower_Large.p3d";
	};
	class StaticObj_Misc_DragonTeeth_Multiple: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Misc\Misc_DragonTeeth_Multiple.p3d";
	};
	class StaticObj_Misc_DragonTeeth_Multiple_RedWhite: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Misc\Misc_DragonTeeth_Multiple_RedWhite.p3d";
	};
	class StaticObj_Misc_DragonTeeth_Single: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Misc\Misc_DragonTeeth_Single.p3d";
	};
	class StaticObj_Misc_DragonTeeth_Single_RedWhite: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Misc\Misc_DragonTeeth_Single_RedWhite.p3d";
	};
	class StaticObj_ShellCrater1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\ShellCrater1.p3d";
	};
	class StaticObj_ShellCrater1_Decal: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\ShellCrater1_Decal.p3d";
	};
	class StaticObj_ShellCrater2_Debris: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\ShellCrater2_Debris.p3d";
	};
	class StaticObj_ShellCrater2_Decal: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\ShellCrater2_Decal.p3d";
	};
	class StaticObj_ShellCrater2_Large: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\ShellCrater2_Large.p3d";
	};
	class StaticObj_ShellCrater2_Small: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\ShellCrater2_Small.p3d";
	};
	class StaticObj_Target_Concrete_Block: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\Target_Concrete_Block.p3d";
	};
	class StaticObj_Target_Concrete_Ramp: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\Target_Concrete_Ramp.p3d";
	};
	class StaticObj_Target_Concrete1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\Target_Concrete1.p3d";
	};
	class StaticObj_Target_Concrete2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\Target_Concrete2.p3d";
	};
	class StaticObj_Target_Support: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Military\Training\Target_Support.p3d";
	};
};
