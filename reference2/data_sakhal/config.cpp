class CfgPatches
{
	class DZ_Data_Sakhal
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
class CfgMods
{
	class sakhal
	{
		type="mod";
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"DZ/data_sakhal/scripts/4_World"
				};
			};
		};
		dir="sakhal";
		appId=2968040;
		name="$STR_dlc_frostline_name";
		picture="DZ\data_bliss\gui\textures\picture_bliss_ca.paa";
		logo="DZ\data_bliss\gui\textures\logo_bliss_ca.paa";
		logoOver="DZ\data_bliss\gui\textures\logoOver_bliss_ca.paa";
		logoSmall="DZ\data_bliss\gui\textures\logoSmall_bliss_ca.paa";
		tooltip="";
		tooltipOwned="";
		overview="$STR_dlc_frostline_overview";
		action="https://dayz.com/";
		author="$STR_bohemia_interactive";
		version="";
	};
};
