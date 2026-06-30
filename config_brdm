class CfgPatches {
  class BRDK_BRDM_2_ADDON {
    units[] = { "" };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = { "DZ_Vehicles_Wheeled", "DZ_Vehicles_Parts", "DZ_Sounds_Effects", "DZ_Data", "DZ_Scripts","BRDK_BRDM_2_CLIENT"};
		magazines[] = {"BRDK_BRDM2_500_mag", "Ammo_14x5mm_BRDM2"};
		ammo[] = {"Bullet_14x5mm_BRDM2"};
  };
};

class CfgMods {
  class BRDK_BRDM_2_ADDON {
    dir = "BRDK_BRDM_2_ADDON";
    picture = "";
    action = "";
    hideName = 1;
    hidePicture = 1;
    name = "BRDK_BRDM_2_ADDON";
    credits = "BarDuck";
    author = "BarDuck";
    authorID = "0";
    version = 1;
    extra = 0;
    type = "mod";
		dependencies[] = {"World"};
		
		class defs {
			class worldScriptModule {
				value = "";
				files[] = {"BRDK_BRDM_2_ADDON/scripts/4_World"};
			};
		};
  };
};

class CfgVehicles {
  class Doors;
  class Health;
  class DamageZones;
  class Window;
  class GlobalHealth;
  class DamageSystem;
  class AnimationSources;
  class CarDoor;
  class Inventory_Base;
  class Bottle_Base;
  class Container_Base;
  class CarWheel;
  class CarScript;
  class Crew;
  class Driver;
  class CoDriver;
  class TentBase;
	class SeaChest;
	
  class BRDK_BRDM_2_wheel : CarWheel {
    scope = 2;
    model = "BRDK_BRDM_2_CLIENT\proxy\BRDK_BRDM_2_wheel.p3d";
    displayName = "$STR_BRDK_BRDM_2_wheel0";
    descriptionShort = "$STR_BRDK_BRDM_2_wheel1";
    itemSize[] = { 6, 6 };
    physLayer = "item_large";
    rotationFlags = 8;
    inventorySlot[] = {"BRDK_BRDM_2_wheel_1_1","BRDK_BRDM_2_wheel_1_2","BRDK_BRDM_2_wheel_2_1","BRDK_BRDM_2_wheel_2_2"};
    radiusByDamage[] = { 0, 0.40000001, 0.25999999, 0.25999999, 0.99980003, 0.25, 0.99989998, 0.273 };
    radius = 0.6;
    width = 0.40000001;
		tyreOffroadResistance = 1.0;
		tyreGrip = 2.2;
		tyreRollResistance = 0.03;
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 200;
          healthLevels[] = { { 1, { "DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat" } }, { 0.69999999, { "DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat" } }, { 0.5, { "DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_damage.rvmat" } }, { 0.30000001, { "DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_damage.rvmat" } }, { 0, { "DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_destruct.rvmat" } } };
        };
      };
    };
  };
  class BRDK_BRDM_2_2_wheel : BRDK_BRDM_2_wheel {
    scope = 2;
    model = "BRDK_BRDM_2_CLIENT\proxy\BRDK_BRDM_2_2_wheel.p3d";
    itemSize[] = { 6, 6 };
  };
  class BRDK_BRDM_2_wheel_destroyed : BRDK_BRDM_2_wheel {
    scope = 2;
    model = "BRDK_BRDM_2_CLIENT\proxy\BRDK_BRDM_2_wheel_destroyed.p3d";
		tyreOffroadResistance = 0.1;
		tyreGrip = 0.2;
		tyreRollResistance = 0.3;
	};


  class BRDK_BRDM_2_doors_driver : CarDoor {
    scope = 2;
    displayName = "$STR_BRDK_BRDM_2_doors_driver0";
    descriptionShort = "$STR_BRDK_BRDM_2_doors_driver1";
    model = "BRDK_BRDM_2_CLIENT\proxy\BRDK_BRDM_2_doors_driver.p3d";
    itemSize[] = { 10, 10 };
    itemBehaviour = 0;
    inventorySlot = "BRDK_BRDM_2_doors_driver";
    rotationFlags = 8;
    physLayer = "item_large";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_pose1_lp_exterior1_co.paa" };
    class DamageSystem : DamageSystem {
      class GlobalHealth : GlobalHealth {};
      class DamageZones : DamageZones {
        class Window : Window {
          class Health : Health {
            healthLevels[] = { { 1, { "dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat" } }, { 0.69999999, {} }, { 0.5, { "dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat" } }, { 0.30000001,   { "dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat" } }, { 0, "hidden" } };
          };
        };
        class Doors : Doors {
          class Health : Health {
            healthLevels[] = { { 1, { "dz\vehicles\wheeled\offroadhatchback\data\niva_door.rvmat" } },{ 0.69999999, {} },{ 0.5, { "dz\vehicles\wheeled\offroadhatchback\data\niva_door_damage.rvmat" } },{ 0.30000001, {} },{ 0, { "dz\vehicles\wheeled\offroadhatchback\data\niva_door_destruct.rvmat" } } };
          };
        };
      };
    };
  };
  class BRDK_BRDM_2_doors_codriver : BRDK_BRDM_2_doors_driver {
    displayName = "$STR_BRDK_BRDM_2_doors_codriver0";
    descriptionShort = "$STR_BRDK_BRDM_2_doors_codriver1";
    model = "BRDK_BRDM_2_CLIENT\proxy\BRDK_BRDM_2_doors_codriver.p3d";
    inventorySlot = "BRDK_BRDM_2_doors_codriver";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_pose1_lp_exterior1_co.paa" };
  };
  class BRDK_BRDM_2_doors_codriver_Dubok : BRDK_BRDM_2_doors_codriver {
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_pose1_lp_exterior1_Dubok_co.paa" };
  };
  class BRDK_BRDM_2_doors_driver_Dubok : BRDK_BRDM_2_doors_driver {
    scope = 2;
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_pose1_lp_exterior1_dubok_co.paa" };
  };

  class BRDK_BRDM_2_doors_codriver_Berezka : BRDK_BRDM_2_doors_codriver {
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_pose1_lp_exterior1_Berezka_co.paa" };
  };
  class BRDK_BRDM_2_doors_driver_Berezka : BRDK_BRDM_2_doors_driver {
    scope = 2;
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_pose1_lp_exterior1_Berezka_co.paa" };
  };

  class BRDK_BRDM_2_doors_codriver_Winter : BRDK_BRDM_2_doors_codriver {
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "BRDK_BRDM_2_Addon\data\brdm_2u_lowpoly_pose1_lp_exterior1_Winter_co.paa" };
  };
  class BRDK_BRDM_2_doors_driver_Winter : BRDK_BRDM_2_doors_driver {
    scope = 2;
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "BRDK_BRDM_2_Addon\data\brdm_2u_lowpoly_pose1_lp_exterior1_Winter_co.paa" };
  };
  class BRDK_BRDM_2 : CarScript {
    scope = 2;
    displayName = "#STR_BRDK_BRDM_20";
    descriptionShort = "#STR_BRDK_BRDM_21";
    Model = "BRDK_BRDM_2_CLIENT\BRDK_BRDM_2.p3d";
    attachments[] = { "Cassette","BRDK_CarLock","BRDK_BRDM2_500_mag","CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Truck_01_WoodenCrate1","CanisterGasoline","Back","BRDK_BRDM_2_wheel_1_1","BRDK_BRDM_2_wheel_1_2","BRDK_BRDM_2_wheel_2_1","BRDK_BRDM_2_wheel_2_2","BRDK_BRDM_2_doors_driver","BRDK_BRDM_2_doors_codriver"};
    hiddenSelections[] = { "light_1_1","light_2_1","light_brake_1_2","light_brake_2_2","light_reverse_1_2","light_reverse_2_2","light_1_2","light_2_2","light_dashboard","camo","camo1","bashnya"};
    hiddenSelectionsTextures[] = { "","","","","","","","","BRDK_BRDM_2_CLIENT\data\BRDM_D_5_co.paa","BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_paintertest3_lp_exterior2_co.paa","BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_pose1_lp_exterior1_co.paa","BRDK_BRDM_2_CLIENT\data\BRDM_2_M_Tower_co.paa"};
    weight = 1500000;
    fuelCapacity = 100;
    fuelConsumption = 20;
		useNewNetworking=0;  // 0- вкл симуляцию 1-выключить
    class Sounds {
      thrust = 0.60000002;
      thrustTurbo = 1;
      thrustGentle = 0.30000001;
      thrustSmoothCoef = 0.1;
      camposSmoothCoef = 0.029999999;
      soundSetsFilter[] = {"BRDK_BRDM_2_Engine_Offload_Ext_Rpm1_SoundSet", "BRDK_BRDM_2_Engine_Offload_Ext_Rpm2_SoundSet","BRDK_BRDM_2_Engine_Offload_Ext_Rpm3_SoundSet", "BRDK_BRDM_2_Engine_Offload_Ext_Rpm4_SoundSet","BRDK_BRDM_2_Engine_Offload_Ext_Rpm5_SoundSet", "BRDK_BRDM_2_Engine_Ext_Rpm0_SoundSet","BRDK_BRDM_2_Engine_Ext_Rpm1_SoundSet",         "BRDK_BRDM_2_Engine_Ext_Rpm2_SoundSet","BRDK_BRDM_2_Engine_Ext_Rpm3_SoundSet", "BRDK_BRDM_2_Engine_Ext_Rpm4_SoundSet","BRDK_BRDM_2_Engine_Ext_Rpm5_SoundSet", "BRDK_BRDM_2_Engine_Ext_Broken_SoundSet"};
      soundSetsInt[] = { "offroad_Tires_Asphalt_Slow_General_Int_SoundSet","offroad_Tires_Asphalt_Fast_General_Int_SoundSet","offroad_Wind_SoundSet" };
    };
	  // class Buoyancy {
			// linearDampeningCoefficient = 0.1;
			// angularDampeningCoefficient = 0.4;
			// linearDragCoefficient = 0.2;
			// quadraticDragCoefficient = 0.0;
			// falloffPower = 0.4;
			// sinkRate = 0.05;
	// };
    hornSoundSetEXT = "";
    hornSoundSetINT = "";
    class Crew {
      class Driver {
        actionSel = "seat_driver";
        proxyPos = "crewDriver";
        getInPos = "pos_driver";
        getInDir = "pos_driver_dir";
        isDriver = 1;
      };
      class CoDriver {
        actionSel = "seat_coDriver";
        proxyPos = "crewCoDriver";
        getInPos = "pos_coDriver";
        getInDir = "pos_coDriver_dir";
      };
      class Cargo1
			{
				actionSel = "seat_cargo1";
				proxyPos = "crewCargo1";
				getInPos = "pos_cargo1";
				getInDir = "pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel = "seat_cargo2";
				proxyPos = "crewCargo2";
				getInPos = "pos_cargo2";
				getInDir = "pos_cargo2_dir";
			};
    };
		class SimulationModule {
			class Steering {
				maxSteeringAngle = 35;
				increaseSpeed[] = {0, 45, 60, 25, 100, 15};
				decreaseSpeed[] = {0, 90, 60, 45, 100, 15};
				centeringSpeed[] = {0, 0, 15, 28, 60, 45, 100, 60};
			};
			
			class Throttle {
				reactionTime = 1;
				defaultThrust = 0.899;
				gentleThrust = 0.79;
				turboCoef = 3.4;
				gentleCoef = 0.955;
			};
			
			class Brake {
				pressureBySpeed[] = {0, 0.851, 10, 0.7, 20, 0.55, 40, 0.45, 60, 0.43, 80, 0.465, 100, 0.522, 120, 0.73};
				reactionTime = 0.33;
				driverless = 0.11;
			};
			
			class Aerodynamics {
				frontalArea = 4.1;
				dragCoefficient = 0.81;
			};
			drive = DRIVE_AWD;
			
			class Engine {
				torqueCurve[] = {650, 0, 950, 120, 1800, 210, 3600, 430, 5600, 225, 7600, 0};
				inertia = 0.95;
				frictionTorque = 100;
				rollingFriction = 0.8;
				viscousFriction = 0.8;
				rpmIdle = 800;
				rpmMin = 900;
				rpmClutch = 1400;
				rpmRedline = 5450;
			};
			
			class Clutch {
				maxTorqueTransfer = 420;
				uncoupleTime = 0.3;
				coupleTime = 0.45;
			};
			
			class Gearbox {
				type = "GEARBOX_MANUAL";
				reverse = 7.77;
				ratios[] = {6.55, 3.09, 2.61, 1.71};
			};
			
			class CentralDifferential {
				ratio = 1.5;
				type = "DIFFERENTIAL_LOCKED";
			};
      class Axles {
        class Front {
         maxBrakeTorque=2000;
					maxHandbrakeTorque=2500;
					wheelHubMass=5;
					wheelHubRadius=0.14;
          class Differential {
            ratio = 4.1;
            type = "DIFFERENTIAL_OPEN";
          };
          class Suspension {
            stiffness = 32550;
						compression = 2400;
						damping = 8000;
						travelMaxUp = 0.17;
						travelMaxDown = 0.17;
          };
          class Wheels {
            class Left {
              animTurn = "turnfrontleft";
              animRotation = "wheelfrontleft";
              wheelHub = "wheel_1_1_damper_land";
              animDamper = "damper_1_1";
              inventorySlot = "BRDK_BRDM_2_wheel_1_1";
            };
            class Right {
              animTurn = "turnfrontright";
              animRotation = "wheelfrontright";
              wheelHub = "wheel_2_1_damper_land";
              animDamper = "damper_2_1";
              inventorySlot = "BRDK_BRDM_2_wheel_2_1";
            };
          };
        };
        class Rear {
         maxBrakeTorque=1000;
					maxHandbrakeTorque=2500;
					wheelHubMass=5;
					wheelHubRadius=0.15;
          class Differential {
            ratio = 4.1;
            type = "DIFFERENTIAL_OPEN";
          };
          class Suspension {
            stiffness = 32500;
						compression = 2400;
						damping = 8000;
						travelMaxUp = 0.17;
						travelMaxDown = 0.17;
          };
          class Wheels {
            class Left {
              animTurn = "turnbackleft";
              animRotation = "wheelbackleft";
              wheelHub = "wheel_1_2_damper_land";
              animDamper = "damper_1_2";
              inventorySlot = "BRDK_BRDM_2_wheel_1_2";
            };
            class Right {
              animTurn = "turnbacktright";
              animRotation = "wheelbackright";
              wheelHub = "wheel_2_2_damper_land";
              animDamper = "damper_2_2";
              inventorySlot = "BRDK_BRDM_2_wheel_2_2";
            };
          };
        };
      };
    };
    class Cargo {
      itemsCargoSize[] = { 10, 100 };
      allowOwnedCargoManipulation = 1;
      openable = 0;
    };
    class AnimationSources {
      class doorsDriver {
        source = "user";
        initPhase = 0;
        animPeriod = 0.5;
      };
      class doorsCoDriver : doorsDriver {};
      class doorscargo1 : doorsDriver {};
      class doorscargo2 : doorsDriver {};
      class doorsHood : doorsDriver {};
      class doorstrunk : doorsDriver {};
       class bashnya {
        source = "user";
        initPhase = 0;
        animPeriod = 0.1;
      };
       class dulo {
        source = "user";
        initPhase = 0;
        animPeriod = 0.1;
      };
     class HideDestroyed_1_1 {
        source = "user";
        initPhase = 0;
        animPeriod = 0.001;
      };
      class HideDestroyed_1_2 {
        source = "user";
        initPhase = 0;
        animPeriod = 0.001;
      };
      class HideDestroyed_2_1 {
        source = "user";
        initPhase = 0;
        animPeriod = 0.001;
      };
      class HideDestroyed_2_2 {
        source = "user";
        initPhase = 0;
        animPeriod = 0.001;
      };
      class AnimHitWheel_1_1 {
        source = "Hit";
        hitpoint = "HitWheel_1_1";
        raw = 1;
      };
      class AnimHitWheel_1_2 : AnimHitWheel_1_1 {
        hitpoint = "HitWheel_1_2";
      };
      class AnimHitWheel_2_1 : AnimHitWheel_1_1 {
        hitpoint = "HitWheel_2_1";
      };
      class AnimHitWheel_2_2 : AnimHitWheel_1_1 {
        hitpoint = "HitWheel_2_2";
      };
      class HitdoorsDrivers : AnimHitWheel_1_1 {
        hitpoint = "HitdoorsDriver";
      };
      class HitdoorsCoDrivers : AnimHitWheel_1_1 {
        hitpoint = "HitdoorsCoDriver";
      };
      class HitdoorsCargo : AnimHitWheel_1_1 {
        hitpoint = "HitdoorsCargo";
      };
    };
    class DamageSystem {
      class GlobalHealth {
        class Health {
          hitpoints = 53780440;
          healthLevels[] = { { 1, {} }, { 0.69999999, {} }, { 0.5, {} }, { 0.30000001, {} }, { 0, {} } };
        };
      };
      class DamageZones {
        class Chassis {
          displayName = "$STR_CfgVehicleDmg_Chassis0";
          class Health {
            hitpoints = 53780440;
            transferToGlobalCoef = 0;
          };
          componentNames[] = { "dmgZone_chassis" };
          fatalInjuryCoef = -1;
          inventorySlots[] = {};
        };
        class Front {
          displayName = "$STR_CfgVehicleDmg_Bumper0";
          class Health {
            hitpoints = 53780440;
            transferToGlobalCoef = 1;
            healthLevels[] = { { 1, { "dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat" } },{ 0.69999999, { "dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat" } },{ 0.5, { "dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat" } },{ 0.30000001, { "dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat" } },{ 0, { "dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat" } } };
          };
          transferToZonesNames[] = {};
          transferToZonesThreshold[] = { 0.5, 0.5, 0.5, 0.1 };
          transferToZonesCoefs[] = {};
          memoryPoints[] = { "dmgZone_front" };
          componentNames[] = { "dmgZone_front", "dmgZone_bumper_1" };
          fatalInjuryCoef = -1;
          inventorySlotsCoefs[] = { 0.0000001, 0.0000001 };
          inventorySlots[] = {
            "BRDK_BRDM_2_doors_hood", "CarRadiator", "BRDK_BRDM_2_Wheel_1_1", "BRDK_BRDM_2_Wheel_2_1"
          };
        };
        class Reflector_1_1 {
          displayName = "$STR_CfgVehicleDmg_Reflector0";
          class Health {
            hitpoints = 53780440;
            transferToGlobalCoef = 0;
            healthLevels[] = { { 1, { "dz\vehicles\wheeled\offroadhatchback\data\headlights_glass.rvmat" } },{ 0.69999999, {} },{ 0.5, { "dz\vehicles\wheeled\offroadhatchback\data\glass_i_damage.rvmat" } },{ 0.30000001, {} },{ 0, { "dz\vehicles\wheeled\offroadhatchback\data\glass_i_destruct.rvmat" } } };
          };
          transferToZonesNames[] = {};
          transferToZonesCoefs[] = {};
          memoryPoints[] = { "dmgZone_lights_1_1" };
          componentNames[] = { "dmgZone_lights_1_1" };
          fatalInjuryCoef = -1;
          inventorySlotsCoefs[] = { 1 };
          inventorySlots[] = { "Reflector_1_1" };
        };
        class Reflector_2_1 : Reflector_1_1 {
          transferToZonesNames[] = {};
          transferToZonesCoefs[] = {};
          memoryPoints[] = { "dmgZone_lights_2_1" };
          componentNames[] = { "dmgZone_lights_2_1" };
          inventorySlotsCoefs[] = { 1 };
          inventorySlots[] = {"Reflector_2_1" };
        };
        class Back {
          displayName = "$STR_CfgVehicleDmg_Bumper0";
          class Health {
            hitpoints = 53780440;
            transferToGlobalCoef = 0;
            healthLevels[] = { { 1, { "dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat" } },{ 0.69999999, { "dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat" } },{ 0.5, { "dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat" } },{ 0.30000001, { "dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat" } },{ 0, { "dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat" } } };
          };
          transferToZonesNames[] = {};
          transferToZonesCoefs[] = {};
          memoryPoints[] = { "dmgZone_back" };
          componentNames[] = { "dmgZone_back", "dmgZone_bumper_2" };
          fatalInjuryCoef = -1;
          inventorySlots[] = {};
        };
        class Roof {
          displayName = "$STR_CfgVehicleDmg_Roof0";
          class Health {
            hitpoints = 53780440;
            transferToGlobalCoef = 0;
            healthLevels[] = { { 1, { "dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat" } },{ 0.69999999, { "dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat" } },{ 0.5, { "dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat" } },{ 0.30000001, { "dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat" } },{ 0, { "dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat" } } };
          };
          memoryPoints[] = { "dmgZone_roof" };
          componentNames[] = { "dmgZone_roof" };
          fatalInjuryCoef = -1;
          inventorySlots[] = {};
        };
        class Fender_1_1 {
          displayName = "$STR_CfgVehicleDmg_Fender0";
          class Health {
            hitpoints = 53780440;
            transferToGlobalCoef = 0;
            healthLevels[] = { { 1, { "dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat" } },{ 0.69999999, { "dz\vehicles\wheeled\offroadhatchback\data\niva.rvmat" } },{ 0.5, { "dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat" } },{ 0.30000001, { "dz\vehicles\wheeled\offroadhatchback\data\niva_damage.rvmat" } },{ 0, { "dz\vehicles\wheeled\offroadhatchback\data\niva_destruct.rvmat" } } };
          };
          transferToZonesNames[] = {};
          transferToZonesThreshold[] = {};
          transferToZonesCoefs[] = {};
          memoryPoints[] = { "dmgZone_fender_1_1" };
          componentNames[] = { "dmgZone_fender_1_1" };
          fatalInjuryCoef = -1;
          inventorySlotsCoefs[] = {};
          inventorySlots[] = {};
        };
        class Fender_1_2 : Fender_1_1 {
          transferToZonesNames[] = {};
          transferToZonesThreshold[] = {};
          transferToZonesCoefs[] = {};
          memoryPoints[] = { "dmgZone_fender_1_2" };
          componentNames[] = { "dmgZone_fender_1_2" };
          inventorySlotsCoefs[] = {};
          inventorySlots[] = {};
        };
        class Fender_2_1 : Fender_1_1 {
          transferToZonesNames[] = {};
          transferToZonesThreshold[] = {};
          transferToZonesCoefs[] = {};
          memoryPoints[] = { "dmgZone_fender_2_1" };
          componentNames[] = { "dmgZone_fender_2_1" };
          inventorySlotsCoefs[] = {};
          inventorySlots[] = {};
        };
        class Fender_2_2 : Fender_1_1 {
          transferToZonesNames[] = {};
          transferToZonesThreshold[] = {};
          transferToZonesCoefs[] = {};
          memoryPoints[] = { "dmgZone_fender_2_2" };
          componentNames[] = { "dmgZone_fender_2_2" };
          inventorySlotsCoefs[] = {};
          inventorySlots[] = {};
        };
        class WindowFront {
          displayName = "$STR_CfgVehicleDmg_Window0";
          class Health {
            hitpoints = 53780440;
            transferToGlobalCoef = 0;
            healthLevels[] = { { 1, { "dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat" } },{ 0.69999999, {} },{ 0.5, { "dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat" } },{ 0.30000001, { "dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat" } },{ 0, "hidden" } };
          };
          memoryPoints[] = { "dmgZone_windowFront" };
          componentNames[] = { "dmgZone_windowFront" };
          fatalInjuryCoef = -1;
          inventorySlots[] = {};
        };
        class Engine {
          class Health {
            hitpoints = 53780440;
            transferToGlobalCoef = 0;
            healthLevels[] = { { 1, { "dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat" } },{ 0.69999999, { "dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat" } },{ 0.5, { "dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat" } },{ 0.30000001, { "dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat" } },{ 0, { "dz\vehicles\wheeled\offroadhatchback\data\engine_niva_destruct.rvmat" } } };
          };
          memoryPoints[] = { "dmgZone_engine" };
          componentNames[] = { "dmgZone_engine" };
          fatalInjuryCoef = 0.001;
          inventorySlotsCoefs[] = {};
          inventorySlots[] = {};
        };
        class FuelTank {
          class Health {
            hitpoints = 53780440;
            transferToGlobalCoef = 0;
            healthLevels[] = { { 1, {} }, { 0.69999999, {} }, { 0.5, {} }, { 0.30000001, {} }, { 0, {} } };
          };
          componentNames[] = { "dmgZone_fuelTank" };
          fatalInjuryCoef = -1;
          inventorySlots[] = {};
        };
      };
    };
    class ObstacleGenerator {
      carve = 1;
      timeToStationary = 5;
      moveThreshold = 0.5;
      class Shapes {
        class Cylindric {
          class Cyl1 {
            radius = 1;
            height = 1.5;
            center[] = { 0, 0, 0.69999999 };
          };
          class Cyl3 {
            radius = 1;
            height = 1.5;
            center[] = { 0, 0, -0.69999999 };
          };
        };
      };
    };
    class GUIInventoryAttachmentsProps {
      class Engine {
        name = "$STR_BRDK_BRDM_Engine";
        description = "";
        attachmentSlots[] = { "CarBattery", "CarRadiator", "SparkPlug" };
        icon = "cat_vehicle_engine";
      };
      class Body {
        name = "$STR_BRDK_BRDM_kuzov";
        description = "";
        attachmentSlots[] = { "Reflector_1_1","Reflector_2_1","BRDK_BRDM_2_doors_driver","BRDK_BRDM_2_doors_codriver"};
        icon = "cat_vehicle_body";
      };
      class Chassis {
        name = "$STR_BRDK_BRDM_chassis";
        description = "";
        attachmentSlots[] = {
          "BRDK_BRDM_2_wheel_1_1", "BRDK_BRDM_2_wheel_2_1", "BRDK_BRDM_2_wheel_1_2", "BRDK_BRDM_2_wheel_2_2"
        };
        icon = "cat_vehicle_chassis";
      };
			class BaseBuildingContainers
			{
				name = "$STR_attachment_containers0";
				description = "";
				icon = "set:dayz_inventory image:cat_common_cargo";
				attachmentSlots[] = { "Truck_01_WoodenCrate1","CanisterGasoline","Back","Cassette"};
			};
			class WeaponBRDM
			{
				name = "$STR_WeaponBRDM0";
				description = "";
				icon = "set:dayz_inventory image:explosive";
				attachmentSlots[] = {"BRDK_BRDM2_500_mag"};
			};

    };
  };
  class BRDK_BRDM_2_Dubok : BRDK_BRDM_2 {
    scope = 2;
    displayName = "#STR_BRDK_BRDM_20";
    descriptionShort = "#STR_BRDK_BRDM_21";
    hiddenSelections[] = { "light_1_1","light_2_1","light_brake_1_2","light_brake_2_2","light_reverse_1_2","light_reverse_2_2","light_1_2","light_2_2","light_dashboard","camo","camo1","bashnya"};
    hiddenSelectionsTextures[] = { "","","","","","","","","BRDK_BRDM_2_CLIENT\data\BRDM_D_5_co.paa","BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_paintertest3_lp_exterior2_Dubok_co.paa","BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_pose1_lp_exterior1_Dubok_co.paa","BRDK_BRDM_2_CLIENT\data\BRDM_2_M_Tower_Dubok_co.paa"};
  };
  class BRDK_BRDM_2_Berezka : BRDK_BRDM_2 {
    scope = 2;
    displayName = "#STR_BRDK_BRDM_20";
    descriptionShort = "#STR_BRDK_BRDM_21";
    hiddenSelections[] = { "light_1_1","light_2_1","light_brake_1_2","light_brake_2_2","light_reverse_1_2","light_reverse_2_2","light_1_2","light_2_2","light_dashboard","camo","camo1","bashnya"};
    hiddenSelectionsTextures[] = { "","","","","","","","","BRDK_BRDM_2_CLIENT\data\BRDM_D_5_co.paa","BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_paintertest3_lp_exterior2_Berezka_co.paa","BRDK_BRDM_2_CLIENT\data\brdm_2u_lowpoly_pose1_lp_exterior1_Berezka_co.paa","BRDK_BRDM_2_CLIENT\data\BRDM_2_M_Tower_Berezka_co.paa"};
  };
  class BRDK_BRDM_2_Winter : BRDK_BRDM_2 {
    scope = 2;
    displayName = "#STR_BRDK_BRDM_20";
    descriptionShort = "#STR_BRDK_BRDM_21";
    hiddenSelections[] = { "light_1_1","light_2_1","light_brake_1_2","light_brake_2_2","light_reverse_1_2","light_reverse_2_2","light_1_2","light_2_2","light_dashboard","camo","camo1","bashnya"};
    hiddenSelectionsTextures[] = { "","","","","","","","","BRDK_BRDM_2_CLIENT\data\BRDM_D_5_co.paa","BRDK_BRDM_2_Addon\data\brdm_2u_lowpoly_paintertest3_lp_exterior2_Winter_co.paa","BRDK_BRDM_2_Addon\data\brdm_2u_lowpoly_pose1_lp_exterior1_Winter_co.paa","BRDK_BRDM_2_Addon\data\BRDM_2_M_Tower_Winter_co.paa"};
  };

};

class CfgSlots {
  class Slot_BRDK_BRDM2_500_mag {
		name = "BRDK_BRDM2_500_mag";
		displayName = "$STR_BRDK_BRDM2_500_mag";
		ghostIcon = "explosive";
	};

	class Slot_CanisterGasoline {
		name = "CanisterGasoline";
		displayName = "#STR_CanisterGasoline";
		selection = "CanisterGasoline";
		ghostIcon = "gascanister";
	};
	class Slot_Back {
		name = "Back";
		displayName = "#STR_Backs";
		selection = "Back";
		ghostIcon = "back";
	};
	class Slot_truck_01_woodencrate1 {
		name = "truck_01_woodencrate1";
		displayName="#STR_CfgCrate0";
		selection = "truck_01_woodencrate1";
		ghostIcon="set:dayz_inventory image:woodcrate";
	};
  class Slot_BRDK_BRDM_2_wheel_1_1 {
    name = "BRDK_BRDM_2_wheel_1_1";
    displayName = "$STR_BRDK_BRDM_2_wheel0";
    selection = "wheel_1_1";
    ghostIcon = "wheel";
  };
  class Slot_BRDK_BRDM_2_wheel_1_2 {
    name = "BRDK_BRDM_2_wheel_1_2";
    displayName = "$STR_BRDK_BRDM_2_wheel0";
    selection = "wheel_1_2";
    ghostIcon = "wheel";
  };
  class Slot_BRDK_BRDM_2_wheel_1_3 {
    name = "BRDK_BRDM_2_wheel_1_3";
    displayName = "$STR_BRDK_BRDM_2_wheel0";
    selection = "wheel_1_3";
    ghostIcon = "wheel";
  };
  class Slot_BRDK_BRDM_2_wheel_2_1 {
    name = "BRDK_BRDM_2_wheel_2_1";
    displayName = "$STR_BRDK_BRDM_2_wheel0";
    selection = "wheel_2_1";
    ghostIcon = "wheel";
  };
  class Slot_BRDK_BRDM_2_wheel_2_2 {
    name = "BRDK_BRDM_2_wheel_2_2";
    displayName = "$STR_BRDK_BRDM_2_wheel0";
    selection = "wheel_2_2";
    ghostIcon = "wheel";
  };
  class Slot_BRDK_BRDM_2_doors_driver {
    name = "BRDK_BRDM_2_doors_driver";
    displayName = "$STR_BRDK_BRDM_2_doors_driver0";
    selection = "doors_driver";
    ghostIcon = "doorfront";
  };
  class Slot_BRDK_BRDM_2_doors_codriver {
    name = "BRDK_BRDM_2_doors_codriver";
    displayName = "$STR_BRDK_BRDM_2_doors_codriver0";
    selection = "doors_codriver";
    ghostIcon = "doorfront";
  };
};

///////////////////////
class CfgMagazines {
	class Magazine_Base;	// External class reference
	class Ammunition_Base;	// External class reference
	
	class BRDK_BRDM2_500_mag : Magazine_Base {
		scope = 2;
		displayName = "$STR_BRDK_BRDM2_500_mag0";
		descriptionShort = "$STR_BRDK_BRDM2_500_mag1";
		model = "dz\gear\containers\300RoundBox.p3d";
		inventorySlot = "BRDK_BRDM2_500_mag";
		weight = 170;
		itemSize[] = {5, 4};
		repairableWithKits[] = {8};
		count = 500;
		ammo = "Bullet_14x5mm_BRDM2";
		ammoItems[] = {"Ammo_14x5mm_BRDM2"};
		tracersEvery = 5;
		mass = 16.1;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 170;
					healthLevels[] = {{1, {}}, {0.7, {}}, {0.5, {}}, {0.3, {}}, {0, {}}};
				};
			};
		};
	};
	
	class Ammo_14x5mm_BRDM2 : Ammunition_Base {
		scope = 2;
		displayName = "$STR_14x5mm_BRDM20";
		descriptionShort = "$STR_14x5mm_BRDM21";
		itemSize[] = {3, 3};
		iconCartridge = 1;
		weight = 10;
		count = 200;
		ammo = "Bullet_14x5mm_BRDM2";
		muzzleFlashParticle = "weapon_shot_mp5k_01";
		model = "BRDK_BRDM_2_CLIENT\ammo\Ammo_14x5mm.p3d";
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1.01, {"BRDK_BRDM_2_CLIENT\ammo\Ammo_14.5mm.rvmat"}}, {0.7, {"BRDK_BRDM_2_CLIENT\ammo\Ammo_14.5mm.rvmat"}}, {0.5, {"BRDK_BRDM_2_CLIENT\ammo\Ammo_14.5mm_damage.rvmat"}}, {0.3, {"BRDK_BRDM_2_CLIENT\ammo\Ammo_14.5mm_damage.rvmat"}}, {0.01, {"BRDK_BRDM_2_CLIENT\ammo\Ammo_14.5mm_destruct.rvmat"}}};
				};
			};
		};
	};
};
/////////////////////////////////
class CfgAmmo {
	class Bullet_Base;	// External class reference
	class DefaultAmmo;	// External class reference
		
	class Bullet_14x5mm_BRDM2 : Bullet_Base {
		scope = 2;
		spawnPileType = "Ammo_14x5mm_BRDM2";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		hit = 13;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 620;
		typicalSpeed = 620;
		airFriction = -0.0025;
		caliber = 0.9;
		deflecting = 13;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.035;
		impactBehaviour = 1;
		hitAnimation = 1;
		
		class DamageApplied {
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.9, 1}};
			
			class Health {
				damage = 1700;
				armorDamage = 6;
			};
			
			class Blood {
				damage = 1400;
			};
			
			class Shock {
				damage = 1500;
			};
		};
		
		class NoiseHit {
			strength = 4;
			type = "shot";
		};
	};
};

