//-----------------------------
// ANIMAL BLEEDING
//-----------------------------
/*
Animal bleeding is handled by this component.
*/

class ComponentAnimalBleeding : Component
{
	// Member variables
	protected ref Timer m_BleedTimer;
	protected const float BASE_BLEED_RATE = 250;
	protected const float PASS_OUT_AMOUT = 500;

	// Constructor
	void ComponentAnimalBleeding()
	{
		
	}
	
	void InflictWoundDamage( TotalDamageResult damage_result, string zone_name, string ammo )
	{
		if ( ammo == "MeleeWolf")
		{
			m_ThisEntityAI.SetHealth( "", "", 0 );
		}	
		
		if ( !zone_name )
			return;
		
		float health_damage_inflicted = damage_result.GetDamage( zone_name, "Health");
		//float blood_damage_inflicted = damage_result.GetDamage( zone_name, "Blood");	
		float wound_healt_damage = health_damage_inflicted;
		//float wound_blood_damage = health_damage_inflicted;
		
		m_ThisEntityAI.DecreaseHealth( "", "Health", wound_healt_damage );
		//m_ThisEntityAI.DecreaseHealth( "", "Blood", wound_blood_damage );
		
		if ( zone_name != "" )
		{
			m_ThisEntityAI.DecreaseHealth( zone_name, "Health", wound_healt_damage );
			//m_ThisEntityAI.DecreaseHealth( zone_name, "Blood", wound_blood_damage );
		}	
		
		//Print("Zone hit: " + zone_name );
		
		//Print("damage_result Health: " + damage_result.GetDamage( zone_name, "Health" ) );
		//Print("damage_result Blood: " + damage_result.GetDamage( zone_name, "Blood" ) );
	}
	
	void CreateWound( TotalDamageResult damage_result, string zone_name, string ammo )
	{
		InflictWoundDamage( damage_result, zone_name, ammo );
		
		// The bleeding logic below appears to be disabled. 
		// It's kept for reference but will not execute.
		bool can_bleed = GetGame().ConfigGetFloat( "CfgVehicles " + m_ThisEntityAI.GetType() + " DamageSystem " + "DamageZones " + zone_name + " canBleed" ) > 0;
		float bleed_threshold = GetGame().ConfigGetFloat( "CfgAmmo " + ammo + " DamageApplied " + "bleedThreshold" );
		float chance = Math.RandomFloat01();
		
		if ( can_bleed && chance <= bleed_threshold )
		{
			m_BleedTimer = new Timer();
			float wound_intensity = GetWoundIntensity( bleed_threshold );
			m_BleedTimer.Run( 1, this, "Bleed", new Param1<float>( wound_intensity ), true ); 
		}
		/*
		else
		{
			Print("Not bleeding");
		}
		*/
	}

	void Bleed( float wound_intensity )
	{
		if ( m_ThisEntityAI.IsAlive() )
		{
			float bleeding_intensity = BASE_BLEED_RATE * wound_intensity;
			//Print("bleeding_intensity: " + bleeding_intensity);
			float global_blood_lvl = m_ThisEntityAI.GetHealth( "", "Blood" );

			m_ThisEntityAI.DecreaseHealth( "", "Blood", bleeding_intensity );

			if ( global_blood_lvl < PASS_OUT_AMOUT )
			{
				m_ThisEntityAI.SetHealth( "", "", 0 );
				//Print("global_blood_lvl < PASS_OUT_AMOUT => Zabijam zviera.");	
			}
			
			//Print( "GetHealth Global Health: " + m_ThisEntityAI.GetHealth( "", "Health" ));
			//Print( "GetHealth Global Blood: " + m_ThisEntityAI.GetHealth( "", "Blood" ));
			//Print( "GetHealth Global Shock: " + m_ThisEntityAI.GetHealth( "", "Shock" ));
			
		}
		else
		{
			m_BleedTimer.Stop();	
			//Print("Vypinam timer.");		
		}
	}

	float GetWoundIntensity( float bleed_treshold )
	{
		//higher the bleeding treshold => more intense bleeding
		return bleed_treshold * 2;
	}
}