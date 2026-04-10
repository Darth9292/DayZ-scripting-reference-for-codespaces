class CfgPatches
{
	class DZ_Structures_Bliss_Industrial
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
	class Land_DieselPowerPlant_Building: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\DieselPowerPlant\DieselPowerPlant_Building.p3d";
	};
	class Land_DieselPowerPlant_Tank_Big: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\DieselPowerPlant\DieselPowerPlant_Tank_Big.p3d";
	};
	class Land_DieselPowerPlant_Tank_Small: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\DieselPowerPlant\DieselPowerPlant_Tank_Small.p3d";
	};
	class Land_Farm_Hopper2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\Farms\Farm_Hopper2.p3d";
	};
	class Land_Garage_Medium: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\Garages\Garage_Medium.p3d";
	};
	class Land_Garage_Tall: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\Garages\Garage_Tall.p3d";
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
				soundOpen="doorMetalTwinLargeOpen";
				soundClose="doorMetalTwinLargeClose";
				soundLocked="doorMetalTwinLargeRattle";
				soundOpenABit="doorMetalTwinLargeOpenABit";
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
	class Land_Workshop_FuelStation: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\Houses\Workshop_FuelStation.p3d";
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
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
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
	class Land_Shed_Closed2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\Sheds\Shed_Closed2.p3d";
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
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
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
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
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
				class twin2
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin2"
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
	class Land_Shed_Closed_Small1: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\Sheds\Shed_Closed_Small1.p3d";
	};
	class Land_Shed_Closed_Small2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\Sheds\Shed_Closed_Small2.p3d";
	};
	class Land_WindPowerPlant_Grey: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\WindPowerPlant\WindPowerPlant_Grey.p3d";
	};
	class Land_Power_VHV_Tower: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\Power\Power_VHV_Tower.p3d";
	};
	class Land_Power_VHV_Tower_Corner: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Industrial\Power\Power_VHV_Tower_Corner.p3d";
	};
	class StaticObj_Construction_Hopper: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Construction\Construction_Hopper.p3d";
	};
	class StaticObj_Pier_Wooden2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Harbour\Pier_Wooden2.p3d";
	};
	class StaticObj_Misc_CinderBlocks: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_CinderBlocks.p3d";
	};
	class StaticObj_Misc_CinderBlock: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_CinderBlock.p3d";
	};
	class StaticObj_Misc_HayBale_Packed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_HayBale_Packed.p3d";
	};
	class StaticObj_Misc_HayBale_Packed_Stack: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_HayBale_Packed_Stack.p3d";
	};
	class StaticObj_Misc_SurveyMarker_Cover: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_SurveyMarker_Cover.p3d";
	};
	class StaticObj_Misc_SurveyMarker_Post: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_SurveyMarker_Post.p3d";
	};
	class StaticObj_Misc_SurveyMarker_Rod: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_SurveyMarker_Rod.p3d";
	};
	class StaticObj_Misc_Tire: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_Tire.p3d";
	};
	class StaticObj_Misc_TirePile_Large: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_TirePile_Large.p3d";
	};
	class StaticObj_Misc_Transformer: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Misc\Misc_Transformer.p3d";
	};
	class StaticObj_Pipe_Small2_8m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_8m.p3d";
	};
	class StaticObj_Pipe_Small2_Block: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_Block.p3d";
	};
	class StaticObj_Pipe_Small2_24m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_24m.p3d";
	};
	class StaticObj_Pipe_Small2_Curve: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_Curve.p3d";
	};
	class StaticObj_Pipe_Small2_Ground: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_Ground.p3d";
	};
	class StaticObj_Pipe_Small2_High_8m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_High_8m.p3d";
	};
	class StaticObj_Pipe_Small2_High_24m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_High_24m.p3d";
	};
	class StaticObj_Pipe_Small2_High_Curve: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_High_Curve.p3d";
	};
	class StaticObj_Pipe_Small2_High_Ground: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_High_Ground.p3d";
	};
	class StaticObj_Pipe_Small2_High_Ground2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_High_Ground2.p3d";
	};
	class StaticObj_Pipe_Small2_8m_MetalSup: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_8m_MetalSup.p3d";
	};
	class StaticObj_Pipe_Small2_8m_NoSup: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_8m_NoSup.p3d";
	};
	class StaticObj_Pipe_Small2_8m_NoSup_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_8m_NoSup_nolc.p3d";
	};
	class StaticObj_Pipe_Small2_Curve45: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Pipes\Pipe_Small2_Curve45.p3d";
	};
	class StaticObj_Power_Pole_Wood4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood4.p3d";
	};
	class StaticObj_Power_Pole_Wood4_A: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood4_A.p3d";
	};
	class StaticObj_Power_Pole_Wood4_A_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood4_A_End.p3d";
	};
	class StaticObj_Power_Pole_Wood4_A_J: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood4_A_J.p3d";
	};
	class StaticObj_Power_Pole_Wood4_A_J_Nest: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood4_A_J_Nest.p3d";
	};
	class StaticObj_Power_Pole_Wood4_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood4_End.p3d";
	};
	class StaticObj_Power_Pole_Wood4_Lamp: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood4_Lamp.p3d";
	};
	class StaticObj_Power_Pole_Wood5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood5.p3d";
	};
	class StaticObj_Power_Pole_Wood5_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood5_End.p3d";
	};
	class StaticObj_Power_Pole_Wood5_End_rus: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood5_End_rus.p3d";
	};
	class StaticObj_Power_Pole_Wood5_J: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood5_J.p3d";
	};
	class StaticObj_Power_Pole_Wood5_J_Nest_rus: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood5_J_Nest_rus.p3d";
	};
	class StaticObj_Power_Pole_Wood5_J_rus: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood5_J_rus.p3d";
	};
	class StaticObj_Power_Pole_Wood5_rus: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood5_rus.p3d";
	};
	class StaticObj_Power_Pole_Wood6_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood6_End.p3d";
	};
	class StaticObj_Power_Pole_Wood6_H: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood6_H.p3d";
	};
	class StaticObj_Power_Pole_Wood6_H_Trail_B: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood6_H_Trail_B.p3d";
	};
	class StaticObj_Power_Pole_Wood6_H_Trail_G: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood6_H_Trail_G.p3d";
	};
	class StaticObj_Power_Pole_Wood6_H_Trail_R: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood6_H_Trail_R.p3d";
	};
	class StaticObj_Power_Pole_Wood6_H_Trail_Y: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood6_H_Trail_Y.p3d";
	};
	class StaticObj_Power_Pole_Wood6_J: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Pole_Wood6_J.p3d";
	};
	class StaticObj_Power_Wire_50: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Wire_50.p3d";
	};
	class StaticObj_Power_Wire_50_Main: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_Wire_50_Main.p3d";
	};
	class StaticObj_Power_WireTel_50_Main: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Power\Power_WireTel_50_Main.p3d";
	};
	class StaticObj_Shed_Open_Big_Complete: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Sheds\Shed_Open_Big_Complete.p3d";
	};
	class StaticObj_Shed_Open_Big2_Complete: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Sheds\Shed_Open_Big2_Complete.p3d";
	};
	class StaticObj_Shed_Open_Small_Complete: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Sheds\Shed_Open_Small_Complete.p3d";
	};
	class StaticObj_Smokestack_Big_Ruin_Bottom: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Smokestacks\Smokestack_Big_Ruin_Bottom.p3d";
	};
	class StaticObj_Smokestack_Big_Ruin_Low: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Smokestacks\Smokestack_Big_Ruin_Low.p3d";
	};
	class StaticObj_Smokestack_Big_Ruin_Mid: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Smokestacks\Smokestack_Big_Ruin_Mid.p3d";
	};
	class StaticObj_Smokestack_Big_Ruin_Up: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Industrial\Smokestacks\Smokestack_Big_Ruin_Up.p3d";
	};
};
