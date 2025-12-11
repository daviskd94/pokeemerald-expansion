NorthCampus_MainHall_2F_MapScripts::
	.byte 0


NorthCampus_MainHall_2F_Coach_Cedar::
# 4 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	lock
# 5 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	faceplayer
# 6 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 7 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Coach_Cedar_Text_0
# 8 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 9 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	release
	end


NorthCampus_MainHall_2F_Marcie::
# 14 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	faceplayer
# 15 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setspeaker SP_NAME_MARCIE
# 16 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_MARCIE_MAIN_HALL, NorthCampus_MainHall_2F_Marcie_1
# 24 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Marcie_Text_1, MSGBOX_YESNO
# 25 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NorthCampus_MainHall_2F_Marcie_5
# 35 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 36 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setspeaker SP_NAME_MARCIE
# 37 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Marcie_Text_4
# 39 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 40 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	release
	end

NorthCampus_MainHall_2F_Marcie_1:
# 18 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Marcie_Text_0
# 19 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 20 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	release
	end

NorthCampus_MainHall_2F_Marcie_5:
# 26 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 27 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setspeaker SP_NAME_MARCIE
# 28 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Marcie_Text_2
# 29 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAIN_HALL_MARCIE, NorthCampus_MainHall_2F_Marcie_Text_3
# 30 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setflag FLAG_DEFEATED_MARCIE_MAIN_HALL
# 31 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	release
	end


NorthCampus_MainHall_2F_Lyssa::
# 46 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	faceplayer
# 47 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setspeaker SP_NAME_LYSSA
# 48 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LYSSA_MAIN_HALL, NorthCampus_MainHall_2F_Lyssa_1
# 56 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Lyssa_Text_1, MSGBOX_YESNO
# 57 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NorthCampus_MainHall_2F_Lyssa_5
# 67 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 68 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setspeaker SP_NAME_LYSSA
# 69 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Lyssa_Text_4
# 71 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 72 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	release
	end

NorthCampus_MainHall_2F_Lyssa_1:
# 50 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Lyssa_Text_0
# 51 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 52 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	release
	end

NorthCampus_MainHall_2F_Lyssa_5:
# 58 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 59 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setspeaker SP_NAME_LYSSA
# 60 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Lyssa_Text_2
# 61 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAIN_HALL_LYSSA, NorthCampus_MainHall_2F_Lyssa_Text_3
# 62 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setflag FLAG_DEFEATED_LYSSA_MAIN_HALL
# 63 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	release
	end


NorthCampus_MainHall_2F_Coach_Cedar_Text_0:
# 7 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "Hey there, {PLAYER}!\n"
	.string "Gymnasium's not open yet.\p"
	.string "Come back later when I've finished\n"
	.string "setting up.$"

NorthCampus_MainHall_2F_Marcie_Text_0:
# 18 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "I'm going to keep training so I can beat\n"
	.string "you one day!$"

NorthCampus_MainHall_2F_Marcie_Text_1:
# 24 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "Hey!\nWanna battle?\pI'm itching for a good fight!$"

NorthCampus_MainHall_2F_Marcie_Text_2:
# 28 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "Great! Let's go!$"

NorthCampus_MainHall_2F_Marcie_Text_3:
# 29 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "Oh wow.\n"
	.string "You're good!$"

NorthCampus_MainHall_2F_Marcie_Text_4:
# 37 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "Oh, that's OK.\n"
	.string "Let me know if you change your mind!$"

NorthCampus_MainHall_2F_Lyssa_Text_0:
# 50 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "You did well to beat my Tinkatink.\n"
	.string "But we'll be back even stonger next\l"
	.string "time!$"

NorthCampus_MainHall_2F_Lyssa_Text_1:
# 56 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "I'm kind of bored.\nWant to have a battle?$"

NorthCampus_MainHall_2F_Lyssa_Text_2:
# 60 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "Wonderful!\n"
	.string "Good luck!$"

NorthCampus_MainHall_2F_Lyssa_Text_3:
# 61 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "Darn!\n"
	.string "I thought I had that!$"

NorthCampus_MainHall_2F_Lyssa_Text_4:
# 69 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "No worries.\n"
	.string "Do you need some time to prepare?\p"
	.string "That's fine!$"
