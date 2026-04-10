class CfgPatches
{
	class DZ_Structures_Bliss_Walls
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
	class Land_Wall_FenForest_Gate: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Walls\Wall_FenForest_Gate.p3d";
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
				soundOpen="doorWoodGateSmallOpen";
				soundClose="doorWoodGateSmallClose";
				soundLocked="doorWoodGateSmallRattle";
				soundOpenABit="doorWoodGateSmallOpenABit";
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
	class Land_Wall_Gate_Fen3: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Walls\Wall_Gate_Fen3.p3d";
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
				soundOpen="doorMetalGateMeshOpen";
				soundClose="doorMetalGateMeshClose";
				soundLocked="doorMetalGateMeshRattle";
				soundOpenABit="doorMetalGateMeshOpenABit";
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
						hitpoints=1000;
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
	class Land_Wall_Gate_Fen4: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Walls\Wall_Gate_Fen4.p3d";
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
				soundOpen="doorMetalGateMeshOpen";
				soundClose="doorMetalGateMeshClose";
				soundLocked="doorMetalGateMeshRattle";
				soundOpenABit="doorMetalGateMeshOpenABit";
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
						hitpoints=1000;
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
	class Land_Wall_Gate_Ind3: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Walls\Wall_Gate_Ind3.p3d";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
	class Land_Wall_Gate_Tin6_1: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Walls\Wall_Gate_Tin6_1.p3d";
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
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
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
						hitpoints=1000;
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
	class Land_Wall_Gate_Tin6_2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Walls\Wall_Gate_Tin6_2.p3d";
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
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
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
						hitpoints=1000;
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
	class Land_Wall_Gate_IndCnc4: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Walls\Wall_Gate_IndCnc4.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSlideLargeOpen";
				soundClose="doorMetalSlideLargeClose";
				soundLocked="doorMetalSlideLargeRattle";
				soundOpenABit="doorMetalSlideLargeOpenABit";
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
				class doors1
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
			};
		};
	};
	class Land_Wall_Gate_IndCnc4_Low: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Walls\Wall_Gate_IndCnc4_Low.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSlideLargeOpen";
				soundClose="doorMetalSlideLargeClose";
				soundLocked="doorMetalSlideLargeRattle";
				soundOpenABit="doorMetalSlideLargeOpenABit";
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
				class doors1
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
			};
		};
	};
	class Land_Wall_BackAlley_01_l_gate_F: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_bliss\Walls\Wall_BackAlley_01_l_gate_F.p3d";
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
	class StaticObj_Wall_Barricade1_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Barricade1_4.p3d";
	};
	class StaticObj_Wall_Barricade1_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Barricade1_10.p3d";
	};
	class StaticObj_Wall_Canal_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Canal_10.p3d";
	};
	class StaticObj_Wall_CncBarrier_4Block: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_CncBarrier_4Block.p3d";
	};
	class StaticObj_Wall_CncBarrier_Block: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_CncBarrier_Block.p3d";
	};
	class StaticObj_Wall_Fen3_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen3_4.p3d";
	};
	class StaticObj_Wall_Fen3_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen3_8.p3d";
	};
	class StaticObj_Wall_Fen3_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen3_D.p3d";
	};
	class StaticObj_Wall_Fen3_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen3_Pole.p3d";
	};
	class StaticObj_Wall_Fen4_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen4_4.p3d";
	};
	class StaticObj_Wall_Fen4_4_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen4_4_nolc.p3d";
	};
	class StaticObj_Wall_Fen4_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen4_8.p3d";
	};
	class StaticObj_Wall_Fen4_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen4_D.p3d";
	};
	class StaticObj_Wall_Fen4_D_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen4_D_nolc.p3d";
	};
	class StaticObj_Wall_Fen4_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen4_Pole.p3d";
	};
	class StaticObj_Wall_Fen5_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen5_5.p3d";
	};
	class StaticObj_Wall_Fen5_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen5_10.p3d";
	};
	class StaticObj_Wall_Fen5_10_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen5_10_D.p3d";
	};
	class StaticObj_Wall_Fen5_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen5_Pole.p3d";
	};
	class StaticObj_Wall_Fen6_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen6_8.p3d";
	};
	class StaticObj_Wall_Fen6_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen6_Pole.p3d";
	};
	class StaticObj_Wall_Fen7_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen7_4.p3d";
	};
	class StaticObj_Wall_Fen7_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Fen7_Pole.p3d";
	};
	class StaticObj_Wall_FenForest_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_FenForest_5.p3d";
	};
	class StaticObj_Wall_FenForest_5_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_FenForest_5_D.p3d";
	};
	class StaticObj_Wall_FenForest_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_FenForest_Pole.p3d";
	};
	class StaticObj_Wall_FenStadium: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_FenStadium.p3d";
	};
	class StaticObj_Wall_FenVineyard: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_FenVineyard.p3d";
	};
	class StaticObj_Wall_IndCnc3_1_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc3_1_4.p3d";
	};
	class StaticObj_Wall_IndCnc3_1_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc3_1_D.p3d";
	};
	class StaticObj_Wall_IndCnc3_2_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc3_2_4.p3d";
	};
	class StaticObj_Wall_IndCnc3_2_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc3_2_D.p3d";
	};
	class StaticObj_Wall_IndCnc3_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc3_End.p3d";
	};
	class StaticObj_Wall_IndCnc3_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc3_Pole.p3d";
	};
	class StaticObj_Wall_IndCnc4_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc4_4.p3d";
	};
	class StaticObj_Wall_IndCnc4_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc4_8.p3d";
	};
	class StaticObj_Wall_IndCnc4_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc4_D.p3d";
	};
	class StaticObj_Wall_IndCnc4_Low_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc4_Low_4.p3d";
	};
	class StaticObj_Wall_IndCnc4_Low_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc4_Low_8.p3d";
	};
	class StaticObj_Wall_IndCnc4_Low_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc4_Low_D.p3d";
	};
	class StaticObj_Wall_IndCnc4_Low_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc4_Low_Pole.p3d";
	};
	class StaticObj_Wall_IndCnc4_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndCnc4_Pole.p3d";
	};
	class StaticObj_Wall_IndFnc2_3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_3.p3d";
	};
	class StaticObj_Wall_IndFnc2_3_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_3_D.p3d";
	};
	class StaticObj_Wall_IndFnc2_3_Hole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_3_Hole.p3d";
	};
	class StaticObj_Wall_IndFnc2_9: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_9.p3d";
	};
	class StaticObj_Wall_IndFnc2_3_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_3_nolc.p3d";
	};
	class StaticObj_Wall_IndFnc2_3_D_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_3_D_nolc.p3d";
	};
	class StaticObj_Wall_IndFnc2_Pole_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_Pole_nolc.p3d";
	};
	class StaticObj_Wall_IndFnc2_9_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_9_nolc.p3d";
	};
	class StaticObj_Wall_IndFnc2_Corner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_Corner.p3d";
	};
	class StaticObj_Wall_IndFnc2_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndFnc2_Pole.p3d";
	};
	class StaticObj_Wall_IndVar3_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndVar3_5.p3d";
	};
	class StaticObj_Wall_IndVar3_5_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndVar3_5_D.p3d";
	};
	class StaticObj_Wall_IndVar3_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_IndVar3_Pole.p3d";
	};
	class StaticObj_Wall_MilCnc_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_MilCnc_4.p3d";
	};
	class StaticObj_Wall_MilCnc_Corner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_MilCnc_Corner.p3d";
	};
	class StaticObj_Wall_MilCncBarrier: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_MilCncBarrier.p3d";
	};
	class StaticObj_Wall_PipeFence_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_PipeFence_4.p3d";
	};
	class StaticObj_Wall_PipeFence_4_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_PipeFence_4_nolc.p3d";
	};
	class StaticObj_Wall_PipeFence_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_PipeFence_8.p3d";
	};
	class StaticObj_Wall_PipeFenceWall_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_PipeFenceWall_8.p3d";
	};
	class StaticObj_Wall_PoleWall_5_1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_PoleWall_5_1.p3d";
	};
	class StaticObj_Wall_PoleWall_5_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_PoleWall_5_2.p3d";
	};
	class StaticObj_Wall_PoleWall_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_PoleWall_End.p3d";
	};
	class StaticObj_Wall_Railing_1_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Railing_1_Pole.p3d";
	};
	class StaticObj_Wall_SilageWall_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_SilageWall_5.p3d";
	};
	class StaticObj_Wall_SilageWall_5_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_SilageWall_5_D.p3d";
	};
	class StaticObj_Wall_SilageWall_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_SilageWall_Pole.p3d";
	};
	class StaticObj_Wall_Stone2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Stone2.p3d";
	};
	class StaticObj_Wall_Stone2D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Stone2D.p3d";
	};
	class StaticObj_Wall_Tin6_1_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Tin6_1_4.p3d";
	};
	class StaticObj_Wall_Tin6_1_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Tin6_1_Pole.p3d";
	};
	class StaticObj_Wall_Tin6_2_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Tin6_2_4.p3d";
	};
	class StaticObj_Wall_Tin7_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Tin7_4.p3d";
	};
	class StaticObj_Wall_Tin7_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Tin7_8.p3d";
	};
	class StaticObj_Wall_Tin7_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_Tin7_Pole.p3d";
	};
	class StaticObj_Wall_BackAlley_01_l_1m_F: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_BackAlley_01_l_1m_F.p3d";
	};
	class StaticObj_Wall_BackAlley_01_l_gap_F: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_BackAlley_01_l_gap_F.p3d";
	};
	class StaticObj_Wall_BackAlley_02_l_1m_F: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_bliss\Walls\Wall_BackAlley_02_l_1m_F.p3d";
	};
};
