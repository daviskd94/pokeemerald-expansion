SouthCampus_PokemonCenter_1F_MapScripts::
# 2 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthCampus_PokemonCenter_1F_OnTransition
# 3 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SouthCampus_PokemonCenter_1F_OnTransition::
# 7 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SOUTH_CAMPUS
	end


SouthCampus_PokemonCenter_1F_EventScript_NurseJoy::
# 16 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 17 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 18 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	waitmessage
# 19 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 20 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 21 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	release
	end


SouthCampus_PokemonCenter_1F_NPC1::
# 27 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	lock
# 28 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	faceplayer
# 29 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	msgbox SouthCampus_PokemonCenter_1F_NPC1_Text_0
# 30 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	closemessage
# 31 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	release
	end


SouthCampus_PokemonCenter_1F_NPC2::
# 36 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	lock
# 37 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	faceplayer
# 38 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	msgbox SouthCampus_PokemonCenter_1F_NPC2_Text_0
# 39 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	closemessage
# 40 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	release
	end


SouthCampus_PokemonCenter_1F_NPC1_Text_0:
# 29 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	.string "This is a great place to relax in\n"
	.string "between classes!$"

SouthCampus_PokemonCenter_1F_NPC2_Text_0:
# 38 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	.string "Talk to Nurse Joy if your Pokémon are\n"
	.string "injured.\p"
	.string "She'll heal them up free of charge!$"

Joy::
# 11 "data/maps/SouthCampus_PokemonCenter_1F/scripts.pory"
	.string "Nurse Joy$"
