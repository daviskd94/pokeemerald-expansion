NorthCampus_Classroom3_MapScripts::
	.byte 0


NorthCampus_Classroom3_NPC1::
# 4 "data/maps/NorthCampus_Classroom3/scripts.pory"
	lock
# 5 "data/maps/NorthCampus_Classroom3/scripts.pory"
	faceplayer
# 6 "data/maps/NorthCampus_Classroom3/scripts.pory"
	msgbox NorthCampus_Classroom3_NPC1_Text_0
# 7 "data/maps/NorthCampus_Classroom3/scripts.pory"
	closemessage
# 8 "data/maps/NorthCampus_Classroom3/scripts.pory"
	release
	end


NorthCampus_Classroom3_NPC2::
# 13 "data/maps/NorthCampus_Classroom3/scripts.pory"
	lock
# 14 "data/maps/NorthCampus_Classroom3/scripts.pory"
	faceplayer
# 15 "data/maps/NorthCampus_Classroom3/scripts.pory"
	msgbox NorthCampus_Classroom3_NPC2_Text_0
# 16 "data/maps/NorthCampus_Classroom3/scripts.pory"
	closemessage
# 17 "data/maps/NorthCampus_Classroom3/scripts.pory"
	release
	end


NorthCampus_Classroom3_Chalkboard_Natures::
# 22 "data/maps/NorthCampus_Classroom3/scripts.pory"
	msgbox NorthCampus_Classroom3_Chalkboard_Natures_Text_0
# 23 "data/maps/NorthCampus_Classroom3/scripts.pory"
	closemessage
	end


NorthCampus_Classroom3_NPC1_Text_0:
# 6 "data/maps/NorthCampus_Classroom3/scripts.pory"
	.string "Ugh, this class is hard.\n"
	.string "I have to actually study!$"

NorthCampus_Classroom3_NPC2_Text_0:
# 15 "data/maps/NorthCampus_Classroom3/scripts.pory"
	.string "Have you taken Water Pokémon Habits\n"
	.string "and Habitats?\p"
	.string "It's my favorite class so far!\p"
	.string "Next to Famous Fishing Folk Fables,\n"
	.string "that is.$"

NorthCampus_Classroom3_Chalkboard_Natures_Text_0:
# 22 "data/maps/NorthCampus_Classroom3/scripts.pory"
	.string "Some leftover lecture notes on the\n"
	.string "chalkboard.\p"
	.string "“{COLOR GREEN}Natures{COLOR DARK_GRAY} affect how a Pokémon's stats\n"
	.string "grow.\p"
	.string "Each Nature increases one stat by 10%\n"
	.string "and decreases another by 10%.\p"
	.string "These effects can be viewed in your\n"
	.string "Pokémon's {COLOR GREEN}Summary Screen{COLOR DARK_GRAY}, where the\l"
	.string "increased stat is {COLOR RED}red{COLOR DARK_GRAY} and the\l"
	.string "decreased stat is {COLOR BLUE}blue{COLOR DARK_GRAY}.”$"
