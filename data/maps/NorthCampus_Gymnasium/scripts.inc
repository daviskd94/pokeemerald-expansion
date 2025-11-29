NorthCampus_Gymnasium_MapScripts::
# 2 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NorthCampus_Gymnasium_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NorthCampus_Gymnasium_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	map_script_2 VAR_NORTH_CAMPUS_STATE, 3, NorthCampus_Gymnasium_Enter
	.2byte 0


NorthCampus_Gymnasium_Enter::
# 8 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_0
# 9 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 10 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_TRACIE, NorthCampus_Gymnasium_Enter_Movement_1
# 11 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 12 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 13 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_0
# 14 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 15 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 16 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_1
# 17 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 18 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	special SpawnCameraObject
# 19 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 20, 16
# 20 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_Gymnasium_Enter_Movement_2
# 21 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_COACH_CEDAR, NorthCampus_Gymnasium_Enter_Movement_3
# 22 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 23 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	delay 10
# 24 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_ACE_TRAINER_F, NorthCampus_Gymnasium_Enter_Movement_4
# 25 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_4
# 26 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	delay 5
# 27 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_TRACIE, NorthCampus_Gymnasium_Enter_Movement_4
# 28 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	delay 5
# 29 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_COLTON, NorthCampus_Gymnasium_Enter_Movement_4
# 30 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_BREEDER_F, NorthCampus_Gymnasium_Enter_Movement_4
# 31 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	delay 4
# 32 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_BLACK_BELT, NorthCampus_Gymnasium_Enter_Movement_4
# 33 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 34 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	lockall
# 35 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 36 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_2
# 37 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 38 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_COACH_CEDAR, NorthCampus_Gymnasium_Enter_Movement_5
# 39 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 40 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 41 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_3
# 42 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 43 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_COACH_CEDAR, NorthCampus_Gymnasium_Enter_Movement_6
# 44 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 45 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 46 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_4
# 47 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 48 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_COACH_CEDAR, NorthCampus_Gymnasium_Enter_Movement_7
# 49 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 50 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 51 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_5
# 52 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 53 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_TRACIE, NorthCampus_Gymnasium_Enter_Movement_8
# 54 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	playse SE_PIN
# 55 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitse
# 56 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 57 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_6
# 58 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 59 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_TRACIE, NorthCampus_Gymnasium_Enter_Movement_9
# 60 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 61 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 62 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_7
# 63 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 64 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 65 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_8
# 66 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_TRACIE, NorthCampus_Gymnasium_Enter_Movement_10
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_COLTON, NorthCampus_Gymnasium_Enter_Movement_11
# 69 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 70 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_9
# 71 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 72 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 73 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_10
# 74 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 75 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_9
# 76 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 77 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 78 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_11
# 79 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 80 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	clearflag FLAG_HIDE_TRACIEROTCART
# 81 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	addobject LOCALID_GYMNASIUM_ROTCART
# 82 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	fadeoutbgm 0
# 83 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 84 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_12
# 85 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 86 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_12
# 87 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	playse SE_PIN
# 88 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitse
# 89 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 90 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_ROTCART, NorthCampus_Gymnasium_Enter_Movement_13
# 91 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 92 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_4
# 93 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 94 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 95 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_13
# 96 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 97 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	checkplayergender
# 98 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq NorthCampus_Gymnasium_Enter_2
# 106 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 107 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_15
# 108 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
NorthCampus_Gymnasium_Enter_1:
# 110 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 111 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_16
# 112 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 113 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_Gymnasium_Enter_Movement_14
# 114 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_ROTCART, NorthCampus_Gymnasium_Enter_Movement_15
# 115 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_1
# 116 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 117 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	delay 40
# 118 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 119 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_17
# 120 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_Gymnasium_Enter_Movement_16
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_ROTCART, NorthCampus_Gymnasium_Enter_Movement_17
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_18
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement LOCALID_GYMNASIUM_ROTCART
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 127 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_18
# 128 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 129 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setflag FLAG_WHITEOUT_CONTINUE
# 130 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	trainerbattle_no_intro TRAINER_ROTCART_1, NorthCampus_Gymnasium_Enter_Text_19
# 131 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	clearflag FLAG_WHITEOUT_CONTINUE
# 133 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	special RemoveCameraObject
# 134 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_CAMERA
# 135 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 4
# 136 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	release
	end

NorthCampus_Gymnasium_Enter_2:
# 100 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 101 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_14
# 102 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
	goto NorthCampus_Gymnasium_Enter_1


# 8 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_0:
# 8 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 8 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 8 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 8 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 8 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
	step_end

# 10 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_1:
# 10 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_left
	step_end

# 20 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_2:
# 20 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 20 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 20 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
	step_end

# 21 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_3:
# 21 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 21 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 21 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 21 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_4:
# 24 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_up
	step_end

# 38 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_5:
# 38 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
	step_end

# 43 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_6:
# 43 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 43 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
	step_end

# 48 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_7:
# 48 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 48 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_down
	step_end

# 53 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_8:
# 53 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	emote_exclamation_mark
	step_end

# 59 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_9:
# 59 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
	step_end

# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_10:
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	slide_right
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	slide_right
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	slide_right
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	slide_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	slide_up
# 67 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_left
	step_end

# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_11:
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 68 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
	step_end

# 86 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_12:
# 86 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_down
# 86 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	emote_exclamation_mark
	step_end

# 90 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_13:
# 90 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 90 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 90 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 90 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 90 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 90 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
	step_end

# 113 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_14:
# 113 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 113 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
	step_end

# 114 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_15:
# 114 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_right
	step_end

# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_16:
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
	step_end

# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_17:
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_right
	step_end

# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_18:
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
	step_end

NorthCampus_Gymnasium_Enter_Text_0:
# 13 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "I heard some rumors.\p"
	.string "We'll be randomly paired up to battle\n"
	.string "someone else in our class for review.\p"
	.string "The implications of that make me\n"
	.string "nervous…$"

NorthCampus_Gymnasium_Enter_Text_1:
# 16 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Alright, everyone!\n"
	.string "Gather up!$"

NorthCampus_Gymnasium_Enter_Text_2:
# 36 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Welcome back, seniors!\n"
	.string "I hope you're all ready for today's\l"
	.string "review.\p"
	.string "As you all know, battling is a crucial\n"
	.string "part of being a Pokémon Trainer.\p"
	.string "Whether you end up doing research,\n"
	.string "athletics, engineering, or competitive\l"
	.string "battling, you've gotta remember the\l"
	.string "basics.$"

NorthCampus_Gymnasium_Enter_Text_3:
# 41 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "A Pokémon battle is about more than\n"
	.string "just throwing out attacks.\p"
	.string "You need to read your opponent,\n"
	.string "remember type matchups, and use your\l"
	.string "environemnt.\p"
	.string "But, most importantly…$"

NorthCampus_Gymnasium_Enter_Text_4:
# 46 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "You need to have a strong bond with\n"
	.string "your Pokémon!\p"
	.string "If you and your Pokémon trust each\n"
	.string "other, you'll be able to pull through\l"
	.string "any situation together.\p"
	.string "You'll be facing plenty of Trainers on\n"
	.string "your journey.\p"
	.string "Some friendly, some competitive,\n"
	.string "some who think they're hot shit.\p"
	.string "But, a good Trainer keeps their cool,\n"
	.string "no matter what.$"

NorthCampus_Gymnasium_Enter_Text_5:
# 51 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "With that being said,\n"
	.string "let's start the review!\p"
	.string "You will be randomly paired up with a\n"
	.string "classmate to have a 1v1 battle.\p"
	.string "Tracie, you're up first!$"

NorthCampus_Gymnasium_Enter_Text_6:
# 57 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Oh!$"

NorthCampus_Gymnasium_Enter_Text_7:
# 62 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "You'll be going up against…\n"
	.string "Colton!$"

NorthCampus_Gymnasium_Enter_Text_8:
# 65 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Whew…\n"
	.string "It's not Rotcart…$"

NorthCampus_Gymnasium_Enter_Text_9:
# 70 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "On to the next pair!$"

NorthCampus_Gymnasium_Enter_Text_10:
# 73 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "We have {PLAYER}!$"

NorthCampus_Gymnasium_Enter_Text_11:
# 78 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "{PLAYER}, you'll be battling…\n"
	.string "Rotcart!$"

NorthCampus_Gymnasium_Enter_Text_12:
# 84 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Exactly what I wanted.$"

NorthCampus_Gymnasium_Enter_Text_13:
# 95 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Ahh, there you are, Rotcart!\n"
	.string "Ready to battle {PLAYER}?$"

NorthCampus_Gymnasium_Enter_Text_14:
# 101 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Won't matter, his ass is mine.$"

NorthCampus_Gymnasium_Enter_Text_15:
# 107 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Won't matter, her ass is mine.$"

NorthCampus_Gymnasium_Enter_Text_16:
# 111 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Very well.\p"
	.string "{PLAYER}, Rotcart,\n"
	.string "take your positions.$"

NorthCampus_Gymnasium_Enter_Text_17:
# 119 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Just because this is a practice match,\n"
	.string "don't expect me to go easy on the weak.\p"
	.string "Follow me.$"

NorthCampus_Gymnasium_Enter_Text_18:
# 127 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Kicking your ass will be a nice warm up\n"
	.string "before I fight those other weaklings.\p"
	.string "Try not to lose too fast.\n"
	.string "I want this to look like a real fight.$"

NorthCampus_Gymnasium_Enter_Text_19:
# 130 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Tch…\n"
	.string "Enjoy that while you still can.$"
