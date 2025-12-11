NorthCampus_MainHall_MapScripts::
# 5 "data/maps/NorthCampus_MainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NorthCampus_MainHall_MapScripts_MAP_SCRIPT_ON_LOAD
# 2 "data/maps/NorthCampus_MainHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NorthCampus_MainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NorthCampus_MainHall_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/NorthCampus_MainHall/scripts.pory"
	hideobjectat 3, MAP_NORTH_CAMPUS_MAIN_HALL
	return

NorthCampus_MainHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/NorthCampus_MainHall/scripts.pory"
	map_script_2 VAR_NORTH_CAMPUS_STATE, 1, NorthCampus_MainHall_Registration
	.2byte 0


NorthCampus_MainHall_Registration::
# 11 "data/maps/NorthCampus_MainHall/scripts.pory"
	lockall
# 12 "data/maps/NorthCampus_MainHall/scripts.pory"
	addobject 2
# 13 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_MainHall_Registration_Movement_0
# 14 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitmovement 0
# 15 "data/maps/NorthCampus_MainHall/scripts.pory"
	addobject 3
# 16 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_MainHall_Registration_Movement_0
# 17 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement 3, NorthCampus_MainHall_Registration_Movement_1
# 18 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitmovement 0
# 19 "data/maps/NorthCampus_MainHall/scripts.pory"
	delay 20
# 20 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement 3, NorthCampus_MainHall_Registration_Movement_2
# 21 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 22 "data/maps/NorthCampus_MainHall/scripts.pory"
	playse SE_PIN
# 23 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitse
# 24 "data/maps/NorthCampus_MainHall/scripts.pory"
	delay 60
# 25 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_0
# 26 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 27 "data/maps/NorthCampus_MainHall/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/NorthCampus_MainHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 37, 32
# 29 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_MainHall_Registration_Movement_3
# 30 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitmovement 0
# 31 "data/maps/NorthCampus_MainHall/scripts.pory"
	delay 10
# 32 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_RECEPTIONIST
# 33 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_1
# 34 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement 2, NorthCampus_MainHall_Registration_Movement_4
# 36 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_RECEPTIONIST
# 37 "data/maps/NorthCampus_MainHall/scripts.pory"
	message NorthCampus_MainHall_Registration_Text_2
# 38 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitmessage
# 39 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement 1, NorthCampus_MainHall_Registration_Movement_5
# 40 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitmovement 0
# 41 "data/maps/NorthCampus_MainHall/scripts.pory"
	delay 55
# 42 "data/maps/NorthCampus_MainHall/scripts.pory"
	hideobjectat 2, MAP_NORTH_CAMPUS_MAIN_HALL
# 43 "data/maps/NorthCampus_MainHall/scripts.pory"
	removeobject 2
# 44 "data/maps/NorthCampus_MainHall/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitse
# 46 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 47 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_MainHall_Registration_Movement_3
# 48 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement 3, NorthCampus_MainHall_Registration_Movement_3
# 49 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitmovement 0
# 50 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement 1, NorthCampus_MainHall_Registration_Movement_6
# 51 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitmovement 0
# 52 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_RECEPTIONIST
# 53 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_3
# 54 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 55 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 56 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_4
# 57 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 58 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_RECEPTIONIST
# 59 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_5
# 60 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 61 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_6
# 62 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 63 "data/maps/NorthCampus_MainHall/scripts.pory"
	playse SE_PC_LOGIN
# 64 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitse
# 65 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_RECEPTIONIST
# 66 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_7
# 67 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 68 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_8
# 69 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 70 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_RECEPTIONIST
# 71 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_9
# 72 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 73 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 74 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_10
# 75 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 76 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_MainHall_Registration_Movement_5
# 77 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement 3, NorthCampus_MainHall_Registration_Movement_7
# 78 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitmovement 0
# 79 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 80 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_Registration_Text_11
# 81 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
	applymovement 3, NorthCampus_MainHall_Registration_Movement_8
# 83 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitmovement 0
# 84 "data/maps/NorthCampus_MainHall/scripts.pory"
	removeobject 3
# 85 "data/maps/NorthCampus_MainHall/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/NorthCampus_MainHall/scripts.pory"
	waitse
# 87 "data/maps/NorthCampus_MainHall/scripts.pory"
	special RemoveCameraObject
# 88 "data/maps/NorthCampus_MainHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 89 "data/maps/NorthCampus_MainHall/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 2
# 90 "data/maps/NorthCampus_MainHall/scripts.pory"
	callnative UpdateFollowingPokemon
# 91 "data/maps/NorthCampus_MainHall/scripts.pory"
	releaseall
	end


NorthCampus_MainHall_FrontDeskLady::
# 96 "data/maps/NorthCampus_MainHall/scripts.pory"
	lock
# 97 "data/maps/NorthCampus_MainHall/scripts.pory"
	faceplayer
# 98 "data/maps/NorthCampus_MainHall/scripts.pory"
	setspeaker SP_NAME_RECEPTIONIST
# 99 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_FrontDeskLady_Text_0
# 100 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 101 "data/maps/NorthCampus_MainHall/scripts.pory"
	release
	end


NorthCampus_MainHall_NPC1::
# 106 "data/maps/NorthCampus_MainHall/scripts.pory"
	lock
# 107 "data/maps/NorthCampus_MainHall/scripts.pory"
	faceplayer
# 108 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_NPC1_Text_0
# 109 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 110 "data/maps/NorthCampus_MainHall/scripts.pory"
	release
	end


NorthCampus_MainHall_NPC2::
# 115 "data/maps/NorthCampus_MainHall/scripts.pory"
	lock
# 116 "data/maps/NorthCampus_MainHall/scripts.pory"
	faceplayer
# 117 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_NPC2_Text_0
# 118 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 119 "data/maps/NorthCampus_MainHall/scripts.pory"
	release
	end


NorthCampus_MainHall_NPC3::
# 124 "data/maps/NorthCampus_MainHall/scripts.pory"
	lock
# 125 "data/maps/NorthCampus_MainHall/scripts.pory"
	faceplayer
# 126 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_NPC3_Text_0
# 127 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 128 "data/maps/NorthCampus_MainHall/scripts.pory"
	release
	end


NorthCampus_MainHall_NPC4::
# 133 "data/maps/NorthCampus_MainHall/scripts.pory"
	lock
# 134 "data/maps/NorthCampus_MainHall/scripts.pory"
	faceplayer
# 135 "data/maps/NorthCampus_MainHall/scripts.pory"
	msgbox NorthCampus_MainHall_NPC4_Text_0
# 136 "data/maps/NorthCampus_MainHall/scripts.pory"
	closemessage
# 137 "data/maps/NorthCampus_MainHall/scripts.pory"
	release
	end


# 13 "data/maps/NorthCampus_MainHall/scripts.pory"
NorthCampus_MainHall_Registration_Movement_0:
# 13 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/NorthCampus_MainHall/scripts.pory"
NorthCampus_MainHall_Registration_Movement_1:
# 17 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 17 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 17 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 17 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
	step_end

# 20 "data/maps/NorthCampus_MainHall/scripts.pory"
NorthCampus_MainHall_Registration_Movement_2:
# 20 "data/maps/NorthCampus_MainHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 29 "data/maps/NorthCampus_MainHall/scripts.pory"
NorthCampus_MainHall_Registration_Movement_3:
# 29 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
	step_end

# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
NorthCampus_MainHall_Registration_Movement_4:
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 35 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
	step_end

# 39 "data/maps/NorthCampus_MainHall/scripts.pory"
NorthCampus_MainHall_Registration_Movement_5:
# 39 "data/maps/NorthCampus_MainHall/scripts.pory"
	face_right
	step_end

# 50 "data/maps/NorthCampus_MainHall/scripts.pory"
NorthCampus_MainHall_Registration_Movement_6:
# 50 "data/maps/NorthCampus_MainHall/scripts.pory"
	face_down
	step_end

# 77 "data/maps/NorthCampus_MainHall/scripts.pory"
NorthCampus_MainHall_Registration_Movement_7:
# 77 "data/maps/NorthCampus_MainHall/scripts.pory"
	face_left
	step_end

# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
NorthCampus_MainHall_Registration_Movement_8:
# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_right
# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
# 82 "data/maps/NorthCampus_MainHall/scripts.pory"
	walk_up
	step_end

NorthCampus_MainHall_Registration_Text_0:
# 25 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Oh! It's… Rotcart…$"

NorthCampus_MainHall_Registration_Text_1:
# 33 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Alright, Rotcart.\n"
	.string "You're all checked in for orientation!$"

NorthCampus_MainHall_Registration_Text_2:
# 37 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "We'll be starting in…\nRotcart?{PAUSE 50}$"

NorthCampus_MainHall_Registration_Text_3:
# 53 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Hi, {PLAYER} and Tracie!\n"
	.string "Happy to see you both here.\p"
	.string "Are you both here for\n"
	.string "orientation as well?$"

NorthCampus_MainHall_Registration_Text_4:
# 56 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Yep! We're both super\n"
	.string "excited to get started!\p"
	.string "Is there anything we need\n"
	.string "to do for check in?$"

NorthCampus_MainHall_Registration_Text_5:
# 59 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Yes, there is!\p"
	.string "I'll need to see your student IDs.$"

NorthCampus_MainHall_Registration_Text_6:
# 61 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "{PLAYER} and Tracie both hand over\n"
	.string "their student IDs.$"

NorthCampus_MainHall_Registration_Text_7:
# 66 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Name: {PLAYER}\n"
	.string "Age: 21\p"
	.string "Program: Pokémon Trainer Studies\n"
	.string "Year: Senior\p"
	.string "Name: Tracie\n"
	.string "Age: 21\p"
	.string "Program: Pokémon Trainer Studies\n"
	.string "Year: Senior$"

NorthCampus_MainHall_Registration_Text_8:
# 68 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "{PLAYER} and Tracie both receive\n"
	.string "their student IDs back.$"

NorthCampus_MainHall_Registration_Text_9:
# 71 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Okay, thanks for waiting!\p"
	.string "You're both all checked in.\p"
	.string "Orientation starts in the lecture hall\n"
	.string "behind me.\p"
	.string "Just head through either of these\n"
	.string "doors.\n"
	.string "We're starting soon!$"

NorthCampus_MainHall_Registration_Text_10:
# 74 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Thank you so much!$"

NorthCampus_MainHall_Registration_Text_11:
# 80 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "C'mon, {PLAYER}.\n"
	.string "Let's get inside!\p"
	.string "We don't want to keep Professor Maple\n"
	.string "waiting!$"

NorthCampus_MainHall_FrontDeskLady_Text_0:
# 99 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "Good luck with your studies!$"

NorthCampus_MainHall_NPC1_Text_0:
# 108 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "I can't wait to start my journey!\p"
	.string "Traveling around the region…\n"
	.string "Seeing the world…\p"
	.string "That's the life!$"

NorthCampus_MainHall_NPC2_Text_0:
# 117 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "Not only is President Mario super nice,\n"
	.string "but he's a powerful trainer too.\p"
	.string "I guess you have to be to be a member\n"
	.string "of the {COLOR GREEN}Elite Four{COLOR DARK_GRAY}!$"

NorthCampus_MainHall_NPC3_Text_0:
# 126 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "There's rumors that a strange, bald guy\n"
	.string "is sneaking around campus.\p"
	.string "Someone should probably notify the\n"
	.string "authorities…$"

NorthCampus_MainHall_NPC4_Text_0:
# 135 "data/maps/NorthCampus_MainHall/scripts.pory"
	.string "My classes are so tough this semester!\p"
	.string "I just hope I can graduate on time…$"
