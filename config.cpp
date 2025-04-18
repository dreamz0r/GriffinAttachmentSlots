class CfgPatches
{
	class GriffinAttachmentSlots
	{
		units[]=
		{
			"GriffBag"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};

class CfgMods
{
	class GriffinBagSlotTester
	{
		dir="";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Griffin";
		credits="";
		author="Griffin";
		authorID="";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]={};
	};
};

class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	
	class GriffBag: Clothing
	{
		displayName="GriffBag";
		descriptionShort="GriffBag";
		model="\dz\characters\backpacks\boulder_m53_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1", //Tool
			"Pistol", 
			"magazine1",
			"magazine2",
			"magazine3",
			"magazine4",
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"Belt_Back", //Knife Sheath
			"Belt_Left", //Canteen
			"Belt_Right", //Pistol Holster
			"MedicalBandage",
			"Disinfectant",
			"NVG",
			//Player Gear
			"Shoulder", //Points Left
			"Melee", // Points Right
			"Vest",
			"Body",
			"Hips",
			"Legs",
			"Back",
			"Headgear",
			"Mask",
			"Eyewear",
			"Gloves",
			"Feet",
			"Armband"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		weight=900;
		varWetMax=0.79000002;
		heatIsolation=0.60000002;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\boulder_m53_black_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_black_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_black_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\boulder_m53_m.p3d";
			female="\DZ\characters\backpacks\boulder_m53_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=170;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};

//La till denna delen för att alla magasin som använder Magazine_Base ska kunna sättas in i magazine1-4 slots
//Borde täcka varenda magasin i hela DayZ om nåt moddat inte använder den basklassen dvs.
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		inventorySlot[]+=
		{
			"magazine1",
			"magazine2",
			"magazine3",
			"magazine4"
		};
	};
};

//Här har jag gjort magazine 1-4 med magazine2's ikon för att kunna ha flera magasin på ett objekt
class CfgSlots
{
	class Slot_magazine1
	{
		name="magazine1";
		displayName="Magazine";
		ghostIcon="magazine2";
	};
	class Slot_magazine2
	{
		name="magazine2";
		displayName="Magazine";
		ghostIcon="magazine2";
	};
	class Slot_magazine3
	{
		name="magazine3";
		displayName="Magazine";
		ghostIcon="magazine2";
	};
	class Slot_magazine4
	{
		name="magazine4";
		displayName="Magazine";
		ghostIcon="magazine2";
	};
	
	//Har inte orkat ta tag i detta än
	/*class Slot_morphine
	{
		name="morphine";
		displayName="Morphine";
		ghostIcon="set:jpc_icons image:morphine";
	};
	class Slot_epinephrine
	{
		name="epinephrine";
		displayName="Epinephrine";
		ghostIcon="set:jpc_icons image:morphine";
	};*/
};
