PokemonCenter_1F_MapScripts::
# 2 "data/maps/PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NorthCampus_PokemonCenter_OnTransition
	.byte 0


NorthCampus_PokemonCenter_OnTransition::
# 6 "data/maps/PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_NORTH_CAMPUS
	end


NorthCampus_PokemonCenter_Gentleman::
# 11 "data/maps/PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/PokemonCenter_1F/scripts.pory"
	msgbox NorthCampus_PokemonCenter_Gentleman_Text_0
# 14 "data/maps/PokemonCenter_1F/scripts.pory"
	closemessage
# 15 "data/maps/PokemonCenter_1F/scripts.pory"
	release
	end


NorthCampus_PokemonCenter_Juggler::
# 20 "data/maps/PokemonCenter_1F/scripts.pory"
	lock
# 21 "data/maps/PokemonCenter_1F/scripts.pory"
	faceplayer
# 22 "data/maps/PokemonCenter_1F/scripts.pory"
	msgbox NorthCampus_PokemonCenter_Juggler_Text_0
# 23 "data/maps/PokemonCenter_1F/scripts.pory"
	closemessage
# 24 "data/maps/PokemonCenter_1F/scripts.pory"
	release
	end


NorthCampus_PokemonCenter_Gentleman_Text_0:
# 13 "data/maps/PokemonCenter_1F/scripts.pory"
	.string "Most {COLOR GREEN}Items{COLOR DARK_GRAY} you can only use once.\p"
	.string "However, {COLOR GREEN}Key Items{COLOR DARK_GRAY} can be used over and\n"
	.string "over again.$"

NorthCampus_PokemonCenter_Juggler_Text_0:
# 22 "data/maps/PokemonCenter_1F/scripts.pory"
	.string "I don't get it!\p"
	.string "How come wild Pokémon keep busting my\n"
	.string "balls?\p"
	.string "…My Poké Balls, I mean.$"
