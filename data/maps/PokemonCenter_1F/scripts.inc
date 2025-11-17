PokemonCenter_1F_MapScripts::
# 2 "data/maps/PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NorthCampus_PokemonCenter_OnTransition
	.byte 0


NorthCampus_PokemonCenter_OnTransition::
# 6 "data/maps/PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_NORTH_CAMPUS
	end

