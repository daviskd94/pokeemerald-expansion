NorthCampus_LectureHall_MapScripts::
# 2 "data/maps/NorthCampus_LectureHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 7
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 6
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 3
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 4
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 5
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 11, 6
# 5 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 12, 5
# 6 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, 15, 6
# 7 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MAPLE_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 8 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MARIO_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 9 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, MOVEMENT_TYPE_FACE_LEFT
	goto NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/NorthCampus_LectureHall/scripts.pory"
	clearflag FLAG_HIDE_TRACIE_LECTURE_HALL
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	addobject LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2
# 14 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MAPLE_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MARIO_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_ROTCART_LECTURE_HALL_2, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 10, 5
# 18 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 12, 5
# 19 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_ROTCART_LECTURE_HALL_2, 18, 5
	return

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 22 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 16, 5
# 23 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 15, 5
	return


NorthCampus_LectureHall_Maple::
# 28 "data/maps/NorthCampus_LectureHall/scripts.pory"
	goto_if_set FLAG_POST_PROFESSOR_HANZNEESTOZ, NorthCampus_LectureHall_Maple_1
# 38 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 39 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 40 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 41 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Maple_Text_1
# 42 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 43 "data/maps/NorthCampus_LectureHall/scripts.pory"
	release
	end

NorthCampus_LectureHall_Maple_1:
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 30 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 31 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 32 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Maple_Text_0
# 33 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 34 "data/maps/NorthCampus_LectureHall/scripts.pory"
	release
	end


NorthCampus_LectureHall_Mario::
# 49 "data/maps/NorthCampus_LectureHall/scripts.pory"
	goto_if_set FLAG_POST_PROFESSOR_HANZNEESTOZ, NorthCampus_LectureHall_Mario_1
# 205 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 206 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 207 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 208 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_21
# 209 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	release
	end

NorthCampus_LectureHall_Mario_1:
# 50 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 51 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 52 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_0, MSGBOX_YESNO
# 54 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NorthCampus_LectureHall_Mario_4
# 196 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 197 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 198 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_20
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end

NorthCampus_LectureHall_Mario_4:
# 55 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 56 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 57 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_1
# 58 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 59 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call Mario_Facing_Direction
# 60 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 61 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_1
# 63 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 64 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 65 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 18, 6
# 66 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_Mario_Movement_2
# 67 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 68 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 69 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_2
# 70 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 71 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 72 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 73 "data/maps/NorthCampus_LectureHall/scripts.pory"
	trainerbattle_no_intro TRAINER_MARIO_1, NorthCampus_LectureHall_Mario_Text_3
# 75 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 76 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 77 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_Mario_Movement_3
# 78 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_4
# 79 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 80 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 81 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_4
# 82 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 83 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_5
# 84 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 85 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_6
# 86 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 87 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 88 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_6
# 89 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 90 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_7
# 92 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 93 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_5
# 94 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_8
# 96 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 97 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_9
# 98 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_9
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 100 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_6
# 102 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 103 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 104 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_7
# 105 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 106 "data/maps/NorthCampus_LectureHall/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 107 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 108 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_8
# 109 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 110 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_DING_DONG
# 111 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 112 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 40
# 113 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 114 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_9
# 115 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 116 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 117 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_10
# 118 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_10
# 120 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 121 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 122 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 123 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_11
# 124 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 125 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 126 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_12
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 128 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_11
# 129 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 130 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 131 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_11
# 132 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 133 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 134 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_13
# 136 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 137 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_7
# 138 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_12
# 139 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 140 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 141 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_14
# 142 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 143 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_0
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_13
# 145 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 146 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_7
# 147 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 148 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_14
# 150 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 152 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_15
# 153 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 154 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_12
# 155 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 156 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_16
# 157 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 158 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_9
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 160 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_17
# 161 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 162 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 163 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 164 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 165 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_18
# 166 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 167 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_0
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_15
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_16
# 170 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 171 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_7
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_17
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_18
# 174 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 175 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_HIDE_TRACIE_LECTURE_HALL
# 176 "data/maps/NorthCampus_LectureHall/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_1_BOAT
# 177 "data/maps/NorthCampus_LectureHall/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_1_NPCS
# 178 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 179 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 180 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_MAPLE_LECTURE_HALL
# 181 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_MARIO_LECTURE_HALL
# 182 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2
# 183 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 7
# 184 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 185 "data/maps/NorthCampus_LectureHall/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_PRESIDENT_TEST
# 186 "data/maps/NorthCampus_LectureHall/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_NEXT_STOP_ADVENTURE
# 187 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_DEX_SEARCH
# 188 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_19
# 189 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	openquestmenu_active
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	callnative UpdateFollowingPokemon
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end


Mario_Facing_Direction::
# 216 "data/maps/NorthCampus_LectureHall/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_NORTH, Mario_Facing_Direction_2
# 222 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_SOUTH, Mario_Facing_Direction_3
# 226 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_EAST, Mario_Facing_Direction_4
# 230 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_WEST, Mario_Facing_Direction_5
	return

Mario_Facing_Direction_2:
# 219 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_0
# 220 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_1
	return

Mario_Facing_Direction_3:
# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_2
# 224 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 225 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_1
	return

Mario_Facing_Direction_4:
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_3
# 228 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 229 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_1
	return

Mario_Facing_Direction_5:
# 231 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_4
# 232 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 233 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_1
	return


NorthCampus_LectureHall_Tracie::
# 238 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 241 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Tracie_Text_0
# 242 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	release
	end


NorthCampus_LectureHall_WalkNextToTracie1::
# 248 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie1_Movement_0
# 250 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 252 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie2::
# 256 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie2_Movement_0
# 258 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 260 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie3::
# 264 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie3_Movement_0
# 266 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 267 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 268 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie4::
# 272 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 273 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie3_Movement_0
# 274 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 276 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie5::
# 280 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie5_Movement_0
# 282 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 284 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie6::
# 288 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie6_Movement_0
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 291 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 292 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1::
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_0
# 297 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle2::
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle2_Movement_0
# 302 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle3::
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle3_Movement_0
# 307 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle4::
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle4_Movement_0
# 312 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle5::
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle5_Movement_0
# 317 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle6::
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle6_Movement_0
# 322 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_MarioVSRotcart::
# 326 "data/maps/NorthCampus_LectureHall/scripts.pory"
	addobject LOCALID_ROTCART_LECTURE_HALL_2
# 327 "data/maps/NorthCampus_LectureHall/scripts.pory"
	clearflag FLAG_HIDE_TRACIEROTCART
# 328 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 329 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_7
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 331 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 332 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 333 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_0
# 334 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 335 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 336 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 337 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 338 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 339 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 340 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 341 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 342 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 343 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 344 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_1
# 345 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 346 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 347 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_2
# 348 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 349 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 350 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_3
# 351 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 353 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_4
# 354 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 355 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 356 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_5
# 357 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_0
# 359 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 360 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL_2
# 361 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_HIDE_TRACIEROTCART
# 362 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 363 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 364 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_MarioVSRotcart_Movement_1
# 365 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 366 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 367 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 368 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 369 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_6
# 370 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 371 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 372 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_7
# 373 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 374 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 50
# 375 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 376 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 377 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 378 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_8
# 379 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 380 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 381 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 382 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 383 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 19
# 384 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 385 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 386 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 389 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_9
# 390 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 391 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 392 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_2
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_3
# 395 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 396 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 398 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 399 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 400 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 401 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 402 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_4
# 404 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_4
# 405 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 406 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 407 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 408 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 409 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 410 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_10
# 411 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 412 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_5
# 413 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 414 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 415 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_11
# 416 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 417 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 418 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_12
# 419 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 420 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 421 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_13
# 422 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 423 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_11
# 424 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 425 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 426 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_11
# 427 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 428 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_7
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_12
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 433 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_14
# 434 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 435 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_9
# 436 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_9
# 437 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_15
# 440 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 441 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 11, 6
# 442 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 12, 5
# 443 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, 16, 5
# 444 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MAPLE_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 445 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MARIO_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 446 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, MOVEMENT_TYPE_FACE_LEFT
# 447 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 7
# 448 "data/maps/NorthCampus_LectureHall/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_BACK_TO_LAB_AGAIN
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PRESIDENT_TEST
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_DEX_SEARCH
# 451 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_16
# 452 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 453 "data/maps/NorthCampus_LectureHall/scripts.pory"
	openquestmenu_active
# 454 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end


NorthCampus_LectureHall_TalkToTracie::
# 459 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 460 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_0
# 461 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 462 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_0
# 463 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 464 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 465 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_12
# 466 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 467 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_Mario_Movement_12
# 468 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 469 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_Mario_Movement_12
# 470 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_Mario_Movement_12
# 471 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 472 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_Mario_Movement_12
# 473 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_1
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 475 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 476 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 477 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lockall
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 479 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 480 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 481 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 90
# 482 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 483 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm CUS_ANCIENT_PONI_PATH, TRUE
# 484 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 30
# 485 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 486 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_2
# 487 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 488 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 489 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_2
# 491 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_APPLAUSE
# 492 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 493 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_3
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 495 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 496 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 497 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_4
# 498 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 499 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 500 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 501 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_5
# 502 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 503 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 504 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 16, 5
# 505 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 15, 5
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 507 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 508 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_6
# 509 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 510 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 511 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 30
# 512 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 513 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_GYM, FALSE
# 514 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_7
# 515 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 516 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 517 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_TalkToTracie_Movement_3
# 519 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 520 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 521 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 522 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_9
# 523 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 524 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 525 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 526 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_8
# 527 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 528 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 529 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_9
# 530 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 531 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 532 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 533 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_10
# 534 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_Mario_Movement_0
# 535 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_Mario_Movement_0
# 536 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_Mario_Movement_0
# 537 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_Mario_Movement_0
# 538 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 539 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 540 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 541 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 25
# 542 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 16
# 543 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 544 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 545 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 546 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 547 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_10
# 548 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 549 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 550 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 551 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 552 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_12
# 553 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_12
# 554 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 555 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 556 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 557 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 558 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 559 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_11
# 560 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 561 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_Mario_Movement_12
# 562 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_Mario_Movement_12
# 563 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_Mario_Movement_12
# 564 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_Mario_Movement_12
# 565 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 566 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 567 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_12
# 568 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 569 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 570 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_9
# 571 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 572 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_13
# 573 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 574 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 575 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_14
# 576 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_15
# 581 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 582 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 583 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 13
# 584 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 585 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_9
# 588 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_5
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_6
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_7
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_8
# 593 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm 6, 12, 5
# 594 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 595 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 596 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_16
# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_9
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_10
# 600 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 601 "data/maps/NorthCampus_LectureHall/scripts.pory"
	addobject LOCALID_ROTCART_LECTURE_HALL_2
# 602 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 603 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_17
# 604 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 605 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 606 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_18
# 607 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitfanfare
# 608 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_11
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_12
# 611 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 612 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_12
# 613 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_12
# 614 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 615 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 616 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_19
# 617 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 618 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 619 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_20
# 620 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 621 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_21
# 623 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 624 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 625 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 626 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_22
# 627 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 628 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 629 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 630 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 631 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 632 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm CUS_ENCOUNTER_ROTCART, FALSE
# 633 "data/maps/NorthCampus_LectureHall/scripts.pory"
	showobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_TalkToTracie_Movement_13
# 635 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 636 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 637 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_23
# 638 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 639 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_12
# 640 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_12
# 641 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_12
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 643 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_24
# 644 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 645 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 646 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_25
# 647 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 648 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 649 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_26
# 650 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitfanfare
# 651 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 652 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_0
# 653 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_TalkToTracie_Movement_14
# 655 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 656 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_12
# 657 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_12
# 658 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 659 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadedefaultbgm
# 660 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_27
# 661 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 662 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 663 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_28
# 664 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 665 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_DING_DONG
# 666 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 667 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 40
# 668 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 669 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_29
# 670 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 671 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 672 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_30
# 673 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 674 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 675 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_31
# 676 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 677 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 678 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_32
# 679 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 680 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_9
# 681 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_0
# 682 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 683 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 684 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_33
# 685 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 686 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_0
# 687 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 688 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_HIDE_LECTURE_HALL_STUDENTS
# 689 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 3
# 690 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL
# 691 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL
# 692 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL_2
# 693 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 4
# 694 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 5
# 695 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 6
# 696 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 7
# 697 "data/maps/NorthCampus_LectureHall/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ORIENTATION
# 698 "data/maps/NorthCampus_LectureHall/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_POKEMON_BATTLES_101
# 699 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_DEX_SEARCH
# 700 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_34
# 701 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 702 "data/maps/NorthCampus_LectureHall/scripts.pory"
	openquestmenu_active
# 703 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end


# 60 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_0:
# 60 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_right
	step_end

# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_1:
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 66 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_2:
# 66 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_slow_left
# 66 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_slow_left
# 66 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_slow_left
	step_end

# 77 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_3:
# 77 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 77 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 77 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 78 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_4:
# 78 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 78 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 78 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 78 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 78 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 83 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_5:
# 83 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_left
# 83 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_left
# 83 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 85 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_6:
# 85 "data/maps/NorthCampus_LectureHall/scripts.pory"
	jump_in_place_up
	step_end

# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_7:
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_down
	step_end

# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_8:
# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 97 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_9:
# 97 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_10:
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 128 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_11:
# 128 "data/maps/NorthCampus_LectureHall/scripts.pory"
	jump_in_place_left
	step_end

# 138 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_12:
# 138 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_13:
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_right
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_right
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_right
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_right
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_right
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_up
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_right
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_right
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
	step_end

# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_14:
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_left
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_left
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_left
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
	step_end

# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_15:
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
	step_end

# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_16:
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_17:
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
	step_end

# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_18:
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
	step_end

# 219 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_0:
# 219 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 219 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 219 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 219 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_1:
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_2:
# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_3:
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 231 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_4:
# 231 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 231 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie1_Movement_0:
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie2_Movement_0:
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie3_Movement_0:
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie5_Movement_0:
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie6_Movement_0:
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_0:
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle2_Movement_0:
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle3_Movement_0:
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle4_Movement_0:
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle5_Movement_0:
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle6_Movement_0:
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_0:
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 364 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_1:
# 364 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 364 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 364 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_2:
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
	step_end

# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_3:
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
	step_end

# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_4:
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 412 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_5:
# 412 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 412 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 462 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_0:
# 462 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
# 462 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 488 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_1:
# 488 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 488 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_2:
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_down
	step_end

# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_3:
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
	step_end

# 532 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_4:
# 532 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_right
# 532 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_5:
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_6:
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_7:
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_8:
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_9:
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
	step_end

# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_10:
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
	step_end

# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_11:
# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_12:
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_13:
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_14:
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

NorthCampus_LectureHall_Maple_Text_0:
# 32 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don't underestimate President Mario!\n"
	.string "He's an {COLOR GREEN}Elite Four{COLOR DARK_GRAY} member for a reason!\p"
	.string "Give it your all in the battle!$"

NorthCampus_LectureHall_Maple_Text_1:
# 41 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I've got faith you in you two.\n"
	.string "Good luck!$"

NorthCampus_LectureHall_Mario_Text_0:
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Are you ready for our battle?$"

NorthCampus_LectureHall_Mario_Text_1:
# 57 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Great!\n"
	.string "Let's get into position!$"

NorthCampus_LectureHall_Mario_Text_2:
# 69 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Show me what a top student at\n"
	.string "{COLOR GREEN}Tractor University{COLOR DARK_GRAY} can do!$"

NorthCampus_LectureHall_Mario_Text_3:
# 73 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Well done!\n"
	.string "You truly are a remarkable Trainer!$"

NorthCampus_LectureHall_Mario_Text_4:
# 81 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Very impressive, {PLAYER}!\p"
	.string "You've proven to be more than\n"
	.string "ready for the {COLOR GREEN}Tractoria League{COLOR DARK_GRAY}!$"

NorthCampus_LectureHall_Mario_Text_5:
# 93 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\n"
	.string "That was amazing, {PLAYER}!\p"
	.string "You actually beat President Mario!\n"
	.string "Not even Rotcart could do that!\p"
	.string "I can't wait for the\n"
	.string "{COLOR GREEN}Tractoria League{COLOR DARK_GRAY} now!$"

NorthCampus_LectureHall_Mario_Text_6:
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Now, now, Tracie.\n"
	.string "Let's not get ahead of ourselves.\p"
	.string "{PLAYER} was very impressive,\n"
	.string "but President Mario was taking it easy.\p"
	.string "The real challenge lies ahead\n"
	.string "at the League.$"

NorthCampus_LectureHall_Mario_Text_7:
# 104 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I wouldn't say I was taking it that\n"
	.string "easy.\p"
	.string "{PLAYER} really put me through the\n"
	.string "wringer!\p"
	.string "You really personify what it means to\n"
	.string "be a Trainer from {COLOR GREEN}Tractor University{COLOR DARK_GRAY}.\p"
	.string "Here, I'd like to give you this.$"

NorthCampus_LectureHall_Mario_Text_8:
# 108 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "This {COLOR GREEN}Exp. Share{COLOR DARK_GRAY} will equally divide up\n"
	.string "experience among all your Pokémon.\p"
	.string "I think it'll be very useful on your\n"
	.string "journey ahead!\p"
	.string "Just don't forget to turn it on!$"

NorthCampus_LectureHall_Mario_Text_9:
# 114 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Attention seniors.\p"
	.string "The boat has arrived at the\n"
	.string "{COLOR GREEN}Route 1{COLOR DARK_GRAY} dock.\p"
	.string "Please make your way there for\n"
	.string "boarding.$"

NorthCampus_LectureHall_Mario_Text_10:
# 117 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Oh, there's our ride!$"

NorthCampus_LectureHall_Mario_Text_11:
# 123 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wait!\n"
	.string "We're taking a boat!?$"

NorthCampus_LectureHall_Mario_Text_12:
# 126 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Yes!\n"
	.string "It's a boat the University owns.\n"
	.string "The {COLOR GREEN}S.S. Tractoria{COLOR DARK_GRAY}!\p"
	.string "It'll take you directly across the sea\n"
	.string "to {COLOR GREEN}Route 2{COLOR DARK_GRAY} and back.$"

NorthCampus_LectureHall_Mario_Text_13:
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\n"
	.string "I've never been on a boat before!$"

NorthCampus_LectureHall_Mario_Text_14:
# 141 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{PLAYER}, what are we waiting for!?\n"
	.string "Let's go!$"

NorthCampus_LectureHall_Mario_Text_15:
# 152 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Well, someone certainly seems excited!$"

NorthCampus_LectureHall_Mario_Text_16:
# 156 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Best not to keep her waiting.\p"
	.string "Shall we, President Mario?$"

NorthCampus_LectureHall_Mario_Text_17:
# 160 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Of course, Professor Maple.\n"
	.string "After you.$"

NorthCampus_LectureHall_Mario_Text_18:
# 165 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "We'll meet you there, {PLAYER}!$"

NorthCampus_LectureHall_Mario_Text_19:
# 188 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{COLOR BLUE}Next Stop: Adventure!{COLOR DARK_GRAY} has been added\n"
	.string "to your {COLOR BLUE}Quest Log{COLOR DARK_GRAY}.$"

NorthCampus_LectureHall_Mario_Text_20:
# 198 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Take your time.$"

NorthCampus_LectureHall_Mario_Text_21:
# 208 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Remembering the basics is important!\p"
	.string "Be sure to complete your review and\n"
	.string "come back.$"

NorthCampus_LectureHall_Tracie_Text_0:
# 241 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "A battle with the President!\n"
	.string "I can't wait!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_0:
# 333 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{PLAYER}…\n"
	.string "It's Rotcart…\p"
	.string "He challenged President Mario\n"
	.string "to a battle, and…\p"
	.string "He lost.\p"
	.string "Badly…$"

NorthCampus_LectureHall_MarioVSRotcart_Text_1:
# 344 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "What!?\n"
	.string "No… That's impossible!\p"
	.string "I had that!\n"
	.string "I HAD that!\p"
	.string "You just got lucky, that's all!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_2:
# 347 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "No, Rotcart.\p"
	.string "This wasn't about luck…\n"
	.string "It was about how you battled.\p"
	.string "You fought with arrogance, treated\n"
	.string "your Pokémon poorly, and disrespected\l"
	.string "your opponents.\p"
	.string "The way you bark orders, how you blamed\n"
	.string "Gible when things went wrong.\p"
	.string "That's not strength,\n"
	.string "that's weakness and fear.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_3:
# 350 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Tch!\n"
	.string "You don't know anything about me.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_4:
# 353 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I know enough.\n"
	.string "I've seen people just like you.\p"
	.string "If you keep this up, treat your Pokémon\n"
	.string "like tools, you won't make it far on your\l"
	.string "journey.\p"
	.string "I know you can be better than this,\n"
	.string "Rotcart.\n"
	.string "It's not too late to change your ways.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_5:
# 356 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "… … …$"

NorthCampus_LectureHall_MarioVSRotcart_Text_6:
# 369 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I hope that Rotcart takes your words\n"
	.string "to heart, President Mario.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_7:
# 372 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I do too, Professor Maple.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_8:
# 378 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "It's okay, {PLAYER} and Tracie.\p"
	.string "You guys can come up.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_9:
# 389 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Umm…\n"
	.string "Okay!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_10:
# 410 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I'm sorry you two had to witness that.\p"
	.string "As an educator, it's never easy having\n"
	.string "these conversations with students.\p"
	.string "I just hope Rotcart understands one\n"
	.string "day.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_11:
# 415 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Let's focus on you two.\p"
	.string "We heard excellent things about the\n"
	.string "both of you today!\p"
	.string "You've completed each review with\n"
	.string "flying colors.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_12:
# 418 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Thank you, Professor Maple!\n"
	.string "That's very nice of you to say.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_13:
# 421 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I never doubted you two for a second.\p"
	.string "And, actually…\p"
	.string "{PLAYER}, I've heard from your\n"
	.string "professors.\p"
	.string "You're among the most promising\n"
	.string "students in your class!\p"
	.string "I'd like to see your skills for myself!\p"
	.string "So, how about it?\n"
	.string "One friendly battle, just you and me.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_14:
# 433 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Oh! Oh!\n"
	.string "{PLAYER}!\p"
	.string "You GOTTA do it!\n"
	.string "This is the President we're talking\l"
	.string "about!\p"
	.string "An {COLOR GREEN}Elite Four member{COLOR DARK_GRAY}!\n"
	.string "This is a HUGE honor!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_15:
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Haha!\n"
	.string "Take some time to prepare.\p"
	.string "I'll be waiting right here when you're\n"
	.string "ready.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_16:
# 451 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{COLOR BLUE}The President's Test{COLOR DARK_GRAY} has been added to\n"
	.string "your {COLOR BLUE}Quest Log{COLOR DARK_GRAY}.$"

NorthCampus_LectureHall_TalkToTracie_Text_0:
# 460 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Looks like we got here just in time!\p"
	.string "Professor Maple is getting ready to\n"
	.string "speak.$"

NorthCampus_LectureHall_TalkToTracie_Text_1:
# 473 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Oh! It's starting!$"

NorthCampus_LectureHall_TalkToTracie_Text_2:
# 486 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Welcome back, students.\n"
	.string "And of course, congratulations!\p"
	.string "You’ve all made it to your fourth and\n"
	.string "final year here at {COLOR GREEN}Tractor University{COLOR DARK_GRAY}.\p"
	.string "You’ve all earned it,\n"
	.string "every one of you!\p"
	.string "Those sleepless nights, boring lectures\n"
	.string "for {COLOR RED}Rock-type {COLOR DARK_GRAY}Appreciation 101…\p"
	.string "All of it has led up to this final year\n"
	.string "where everything comes together!\p"
	.string "You’ve all grown in not only skill,\n"
	.string "but character as well.\p"
	.string "As head of the Pokémon Research\n"
	.string "department, I’m very proud of you all.\p"
	.string "With that being said, it’s time to go over\n"
	.string "your final, big assignment.\p"
	.string "To provide details, I’m happy to\n"
	.string "introduce to you our own {COLOR GREEN}President {COLOR DARK_GRAY}and\l"
	.string "{COLOR GREEN}Elite Four{COLOR DARK_GRAY} member, President Mario!$"

NorthCampus_LectureHall_TalkToTracie_Text_3:
# 493 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wait, what!?\n"
	.string "President Mario is here!?$"

NorthCampus_LectureHall_TalkToTracie_Text_4:
# 497 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Nobody told me the President was\n"
	.string "coming!$"

NorthCampus_LectureHall_TalkToTracie_Text_5:
# 501 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\n"
	.string "This is such an honor!$"

NorthCampus_LectureHall_TalkToTracie_Text_6:
# 508 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Hi, everybody!\p"
	.string "Thank you all for joining us\n"
	.string "on this wonderful day!\p"
	.string "And of course, thank you to Professor\n"
	.string "Maple for arranging everything today!\p"
	.string "I am so happy to be here and be a part\n"
	.string "of your final year.\p"
	.string "To kick things off, this year is going to\n"
	.string "be an exciting one for you seniors.\p"
	.string "It’s time for you to take everything\n"
	.string "you’ve learned your first three years\l"
	.string "and put it to the test!$"

NorthCampus_LectureHall_TalkToTracie_Text_7:
# 514 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "The {COLOR GREEN}Tractoria League{COLOR DARK_GRAY}!\p"
	.string "You will travel the region, challenging\n"
	.string "the eight {COLOR GREEN}Gym Leaders{COLOR DARK_GRAY}, {COLOR GREEN}Elite Four{COLOR DARK_GRAY}, and\l"
	.string "{COLOR GREEN}Champion{COLOR DARK_GRAY} to show us just how much\l"
	.string "you've learned.$"

NorthCampus_LectureHall_TalkToTracie_Text_8:
# 526 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "The {COLOR GREEN}Tractoria Pokémon League\n"
	.string "Challenge{COLOR DARK_GRAY}!?\n"
	.string "Really?\p"
	.string "Oh gosh…\n"
	.string "I hope I’m ready.$"

NorthCampus_LectureHall_TalkToTracie_Text_9:
# 529 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Pft!$"

NorthCampus_LectureHall_TalkToTracie_Text_10:
# 547 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "That hardly sounds like a challenge.\p"
	.string "If they’re anything like this overrated\n"
	.string "loser up on stage, it’ll be a breeze.$"

NorthCampus_LectureHall_TalkToTracie_Text_11:
# 559 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "… … …\p"
	.string "Ahem!$"

NorthCampus_LectureHall_TalkToTracie_Text_12:
# 567 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Some of you may think that this\n"
	.string "challenge will be a walk in the park.\p"
	.string "But, I can assure you that this\n"
	.string "challenge will test the limits of what\l"
	.string "you can do as a Pokémon Trainer.\p"
	.string "To help prepare, we’ve arranged {COLOR GREEN}three\n"
	.string "review sessions {COLOR DARK_GRAY}for you to complete.\p"
	.string "These sessions will cover everything\n"
	.string "you’ve learned so far and help you get\l"
	.string "ready for what’s to come.\p"
	.string "But before we begin, please meet with\n"
	.string "Professor Maple to receive your very\l"
	.string "own {COLOR GREEN}PokéDex{COLOR DARK_GRAY}!$"

NorthCampus_LectureHall_TalkToTracie_Text_13:
# 572 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Anything you'd like to add, Professor\n"
	.string "Maple?$"

NorthCampus_LectureHall_TalkToTracie_Text_14:
# 575 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Thank you so much, Mario!\n"
	.string "I think that covers it!$"

NorthCampus_LectureHall_TalkToTracie_Text_15:
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Good luck, everybody!\n"
	.string "I’m sure you’ll all excel!\p"
	.string "Come see me to pick up your {COLOR GREEN}PokéDex{COLOR DARK_GRAY}!$"

NorthCampus_LectureHall_TalkToTracie_Text_16:
# 596 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow… That was… a lot to take in.\p"
	.string "But also kinda exciting, right?\p"
	.string "We get to challenge the {COLOR GREEN}Tractoria\n"
	.string "League{COLOR DARK_GRAY}!\p"
	.string "This is what we came to {COLOR GREEN}Tractor\n"
	.string "University {COLOR DARK_GRAY}for!\p"
	.string "C'mon, let's go see Professor Maple\n"
	.string "and get our {COLOR GREEN}PokéDex{COLOR DARK_GRAY}!$"

NorthCampus_LectureHall_TalkToTracie_Text_17:
# 603 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Ah, {PLAYER} and Tracie!\nHere you are!\pYou'll be needing these!$"

NorthCampus_LectureHall_TalkToTracie_Text_18:
# 606 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{PLAYER} and Tracie recieved the\n{COLOR GREEN}PokéDex {COLOR DARK_GRAY}from Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_19:
# 616 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\nThanks, Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_20:
# 619 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Of course, Tracie!\p"
	.string "This {COLOR GREEN}PokéDex{COLOR DARK_GRAY} is a special edition,\n"
	.string "crafted here at the University.\p"
	.string "They'll help record data from every\n"
	.string "Pokémon you will encounter on your\l"
	.string "journey.\p"
	.string "But, remember, it's not just\n"
	.string "about filling it with information.\p"
	.string "It's about learning and understanding\n"
	.string "the bond between you and your Pokémon.$"

NorthCampus_LectureHall_TalkToTracie_Text_21:
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Eeee!\nIt feels so official now!$"

NorthCampus_LectureHall_TalkToTracie_Text_22:
# 626 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don't get your hopes up.$"

NorthCampus_LectureHall_TalkToTracie_Text_23:
# 637 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "You don’t stand a chance out there.\p"
	.string "You won’t even make it to the first Gym.$"

NorthCampus_LectureHall_TalkToTracie_Text_24:
# 643 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Now, now, Rotcart.\p"
	.string "Competition is nice, but there's\n"
	.string "no need to belittle others.\p"
	.string "I think Tracie will do quite well!$"

NorthCampus_LectureHall_TalkToTracie_Text_25:
# 646 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Pfft!\n"
	.string "Yeah, yeah.\p"
	.string "Just give me my {COLOR GREEN}PokéDex{COLOR DARK_GRAY} so I can leave.$"

NorthCampus_LectureHall_TalkToTracie_Text_26:
# 649 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Rotcart recieved the {COLOR GREEN}PokéDex\n{COLOR DARK_GRAY}from Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_27:
# 660 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don’t listen to him, Tracie.\p"
	.string "Everybody has the potential to\n"
	.string "complete this challenge.\p"
	.string "I know you well enough to know\n"
	.string "you’ll do great!$"

NorthCampus_LectureHall_TalkToTracie_Text_28:
# 663 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I…\p"
	.string "Thank you, Professor Maple…$"

NorthCampus_LectureHall_TalkToTracie_Text_29:
# 669 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Attention seniors.\p"
	.string "Please report to the {COLOR GREEN}Gymnasium{COLOR DARK_GRAY} for\n"
	.string "your review on Pokémon battles.$"

NorthCampus_LectureHall_TalkToTracie_Text_30:
# 672 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Hear that?\n"
	.string "Time for the first review!\p"
	.string "The {COLOR GREEN}Gymnasium{COLOR DARK_GRAY} is upstairs in case you\n"
	.string "forgot. Good luck!$"

NorthCampus_LectureHall_TalkToTracie_Text_31:
# 675 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Come back once you're all\n"
	.string "done with your reviews!$"

NorthCampus_LectureHall_TalkToTracie_Text_32:
# 678 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Will do!\n"
	.string "Thank you!$"

NorthCampus_LectureHall_TalkToTracie_Text_33:
# 684 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Alright, {PLAYER}.\n"
	.string "I'll meet you at the {COLOR GREEN}Gymnasium{COLOR DARK_GRAY}!$"

NorthCampus_LectureHall_TalkToTracie_Text_34:
# 700 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{COLOR BLUE}Pokémon Battles 101{COLOR DARK_GRAY} has been added to\n"
	.string "your {COLOR BLUE}Quest Log{COLOR DARK_GRAY}.$"
