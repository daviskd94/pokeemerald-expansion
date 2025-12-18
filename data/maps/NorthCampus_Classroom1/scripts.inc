NorthCampus_Classroom1_MapScripts::
	.byte 0


NorthCampus_Classroom1_NPC1::
# 4 "data/maps/NorthCampus_Classroom1/scripts.pory"
	lock
# 5 "data/maps/NorthCampus_Classroom1/scripts.pory"
	faceplayer
# 6 "data/maps/NorthCampus_Classroom1/scripts.pory"
	msgbox NorthCampus_Classroom1_NPC1_Text_0
# 7 "data/maps/NorthCampus_Classroom1/scripts.pory"
	closemessage
# 8 "data/maps/NorthCampus_Classroom1/scripts.pory"
	release
	end


NorthCampus_Classroom1_Chalkboard_IVs::
# 13 "data/maps/NorthCampus_Classroom1/scripts.pory"
	msgbox NorthCampus_Classroom1_Chalkboard_IVs_Text_0
# 14 "data/maps/NorthCampus_Classroom1/scripts.pory"
	closemessage
	end


NorthCampus_Classroom1_NPC1_Text_0:
# 6 "data/maps/NorthCampus_Classroom1/scripts.pory"
	.string "My goal is to collect every kind of\n"
	.string "Pokémon you can find around the school\l"
	.string "before I leave on my journey.$"

NorthCampus_Classroom1_Chalkboard_IVs_Text_0:
# 13 "data/maps/NorthCampus_Classroom1/scripts.pory"
	.string "Some leftover lecture notes on the\n"
	.string "chalkboard.\p"
	.string "“{COLOR GREEN}Individual Values{COLOR DARK_GRAY}, or {COLOR GREEN}IVs{COLOR DARK_GRAY}, are normally\n"
	.string "hidden stats that influence a\l"
	.string "Pokémon's growth.\p"
	.string "Each Pokémon has its own unique set of\n"
	.string "IVs that determine how strong it can\l"
	.string "become in each stat.\p"
	.string "These values can be viewed in your\n"
	.string "Pokémon's {COLOR GREEN}Summary Screen{COLOR DARK_GRAY}.\p"
	.string "In addition, IVs can be increased\n"
	.string "through a method known as {COLOR GREEN}Hyper\l"
	.string "Training{COLOR DARK_GRAY}.”$"
