NorthCampus_Classroom2_MapScripts::
	.byte 0


NorthCampus_Classroom2_NPC1::
# 4 "data/maps/NorthCampus_Classroom2/scripts.pory"
	lock
# 5 "data/maps/NorthCampus_Classroom2/scripts.pory"
	faceplayer
# 6 "data/maps/NorthCampus_Classroom2/scripts.pory"
	msgbox NorthCampus_Classroom2_NPC1_Text_0
# 7 "data/maps/NorthCampus_Classroom2/scripts.pory"
	closemessage
# 8 "data/maps/NorthCampus_Classroom2/scripts.pory"
	release
	end


NorthCampus_Classroom2_NPC2::
# 13 "data/maps/NorthCampus_Classroom2/scripts.pory"
	lock
# 14 "data/maps/NorthCampus_Classroom2/scripts.pory"
	faceplayer
# 15 "data/maps/NorthCampus_Classroom2/scripts.pory"
	msgbox NorthCampus_Classroom2_NPC2_Text_0
# 16 "data/maps/NorthCampus_Classroom2/scripts.pory"
	closemessage
# 17 "data/maps/NorthCampus_Classroom2/scripts.pory"
	release
	end


NorthCampus_Classroom2_Chalkboard_EVs::
# 22 "data/maps/NorthCampus_Classroom2/scripts.pory"
	msgbox NorthCampus_Classroom2_Chalkboard_EVs_Text_0
# 23 "data/maps/NorthCampus_Classroom2/scripts.pory"
	closemessage
	end


NorthCampus_Classroom_Skeleton::
# 28 "data/maps/NorthCampus_Classroom2/scripts.pory"
	msgbox NorthCampus_Classroom_Skeleton_Text_0
# 29 "data/maps/NorthCampus_Classroom2/scripts.pory"
	closemessage
	end


NorthCampus_Classroom2_NPC1_Text_0:
# 6 "data/maps/NorthCampus_Classroom2/scripts.pory"
	.string "There was a time when {COLOR RED}Psychic-type\n"
	.string "{COLOR DARK_GRAY}Pokémon were considered to be the most\l"
	.string "powerful of all.\p"
	.string "Sadly, that time has passed…$"

NorthCampus_Classroom2_NPC2_Text_0:
# 15 "data/maps/NorthCampus_Classroom2/scripts.pory"
	.string "I have Professor Maple for Berry\n"
	.string "Blending 101.\p"
	.string "She's super nice!$"

NorthCampus_Classroom2_Chalkboard_EVs_Text_0:
# 22 "data/maps/NorthCampus_Classroom2/scripts.pory"
	.string "Some leftover lecture notes on the\n"
	.string "chalkboard.\p"
	.string "“{COLOR GREEN}Effort Values{COLOR DARK_GRAY}, or {COLOR GREEN}EVs{COLOR DARK_GRAY}, are stats that\n"
	.string "influence a Pokemon's growth.\p"
	.string "By battling certain Pokémon, your\n"
	.string "Pokémon can gain EVs in specific stats.\p"
	.string "These values can be viewed in your\n"
	.string "Pokémon's {COLOR GREEN}Summary Screen{COLOR DARK_GRAY}.”$"

NorthCampus_Classroom_Skeleton_Text_0:
# 28 "data/maps/NorthCampus_Classroom2/scripts.pory"
	.string "A human skeleton model used for\n"
	.string "educational purposes.\p"
	.string "Humans and Pokémon share many similar\n"
	.string "bone structures.$"
