NorthCampus_ResearchLab_MapScripts::
	.byte 0


NorthCampus_ResearchLab_Scientist1::
# 5 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	faceplayer
# 6 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Scientist1_Text_0
# 7 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
# 8 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	release
	end


NorthCampus_ResearchLab_Scientist2::
# 13 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	faceplayer
# 14 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Scientist2_Text_0
# 15 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
# 16 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	release
	end


NorthCampus_ResearchLab_Scientist3::
# 21 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	faceplayer
# 22 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Scientist3_Text_0
# 23 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
# 24 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	release
	end


NorthCampus_ResearchLab_Scientist4::
# 30 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	lock
# 31 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	faceplayer
# 32 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Scientist4_Text_0
# 33 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
# 34 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	release
	end


NorthCampus_ResearchLab_Scientist5::
# 39 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	faceplayer
# 40 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Scientist5_Text_0
# 41 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
# 42 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	release
	end


NorthCampus_ResearchLab_Machine1::
# 47 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Machine1_Text_0
# 48 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
	return


NorthCampus_ResearchLab_Machine2::
# 52 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Machine2_Text_0
# 53 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
	return


NorthCampus_ResearchLab_Machine3::
# 57 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Machine3_Text_0
# 58 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
	return


NorthCampus_ResearchLab_Laptop::
# 62 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Laptop_Text_0
# 63 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
	return


NorthCampus_ResearchLab_Drawer::
# 67 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Drawer_Text_0
# 68 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
	return


NorthCampus_ResearchLab_Sink::
# 72 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Sink_Text_0
# 73 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
	return


NorthCampus_ResearchLab_Voltorb::
# 77 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	faceplayer
# 78 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	setspeaker SP_NAME_VOLTORB
# 79 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	playmoncry SPECIES_VOLTORB, 0
# 80 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Voltorb_Text_0, MSGBOX_DEFAULT
# 81 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	waitmoncry
# 82 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
# 83 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	release
	end


NorthCampus_ResearchLab_Porygon::
# 88 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	faceplayer
# 89 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	setspeaker SP_NAME_PORYGON
# 90 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	playmoncry SPECIES_PORYGON, 0
# 91 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	msgbox NorthCampus_ResearchLab_Porygon_Text_0, MSGBOX_DEFAULT
# 92 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	waitmoncry
# 93 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	closemessage
# 94 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	release
	end


NorthCampus_ResearchLab_Scientist1_Text_0:
# 6 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "It's theorized that {COLOR GREEN}Voltorb{COLOR DARK_GRAY} are\n"
	.string "actually a result of failed Poké Ball\l"
	.string "experiments.\p"
	.string "We've found that its physical\n"
	.string "components are not made naturally.\p"
	.string "Fascinating, isn't it?$"

NorthCampus_ResearchLab_Scientist2_Text_0:
# 14 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "Did you know that {COLOR GREEN}Porygon{COLOR DARK_GRAY} is the first\n"
	.string "entirely virtual Pokémon?\p"
	.string "It was created using advanced\n"
	.string "computer programming!$"

NorthCampus_ResearchLab_Scientist3_Text_0:
# 22 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "Records from Ancient Sinnoh show that\n"
	.string "{COLOR GREEN}Voltorb{COLOR DARK_GRAY} once had a different\l"
	.string "appearance.\p"
	.string "They appeared more like wood, which was\n"
	.string "the design of {COLOR GREEN}Poké Balls {COLOR DARK_GRAY}at the time.\p"
	.string "This further supports our theories.$"

NorthCampus_ResearchLab_Scientist4_Text_0:
# 32 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "We're lucky to have the funding to be\n"
	.string "able to study Pokémon as much as we\l"
	.string "want.\p"
	.string "You can't exactly put a price on\n"
	.string "knowledge, after all!$"

NorthCampus_ResearchLab_Scientist5_Text_0:
# 40 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "Professor Maple has me organizing all\n"
	.string "our documents and research data.\p"
	.string "It's a lot of work, but it's important to\n"
	.string "keep everything in order!$"

NorthCampus_ResearchLab_Machine1_Text_0:
# 47 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "This machine is flashing lights and\n"
	.string "beeping.\p"
	.string "Better not mess with it.$"

NorthCampus_ResearchLab_Machine2_Text_0:
# 52 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "It seems to be measuring something…\p"
	.string "Probably best to leave it alone.$"

NorthCampus_ResearchLab_Machine3_Text_0:
# 57 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "It's filled with some sort of\n"
	.string "mysterious, green liquid.\p"
	.string "I wonder what it's for?$"

NorthCampus_ResearchLab_Laptop_Text_0:
# 62 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "This laptop seems to be a newer model.\p"
	.string "It's running some sort of data analysis\n"
	.string "software.$"

NorthCampus_ResearchLab_Drawer_Text_0:
# 67 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "The drawers are filled with tools and\n"
	.string "various research supplies$"

NorthCampus_ResearchLab_Sink_Text_0:
# 72 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "There's a sign above the sink that says,\n"
	.string "'Do not dump chemicals down the drain.'$"

NorthCampus_ResearchLab_Voltorb_Text_0:
# 80 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "Bzzzzt! Bzzzzt$"

NorthCampus_ResearchLab_Porygon_Text_0:
# 91 "data/maps/NorthCampus_ResearchLab/scripts.pory"
	.string "Cree!$"
