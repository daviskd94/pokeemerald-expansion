NorthCampus_LectureHall_MapScripts::
# 2 "data/maps/NorthCampus_LectureHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 7
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
	clearflag FLAG_HIDE_TRACIE_LECTURE_HALL
# 5 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 11, 6
# 6 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 12, 5
# 7 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, 15, 6
# 8 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MAPLE_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 9 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MARIO_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 10 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, MOVEMENT_TYPE_FACE_LEFT
	goto NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
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
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 201 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 202 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_20
# 203 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_19
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 194 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
	callnative UpdateFollowingPokemon
# 186 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end


Mario_Facing_Direction::
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	switch VAR_RESULT
# 212 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_NORTH, Mario_Facing_Direction_2
# 216 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_SOUTH, Mario_Facing_Direction_3
# 220 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_EAST, Mario_Facing_Direction_4
# 224 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_WEST, Mario_Facing_Direction_5
	return

Mario_Facing_Direction_2:
# 213 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_0
# 214 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 215 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_1
	return

Mario_Facing_Direction_3:
# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_2
# 218 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 219 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_1
	return

Mario_Facing_Direction_4:
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_3
# 222 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_1
	return

Mario_Facing_Direction_5:
# 225 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_4
# 226 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_1
	return


NorthCampus_LectureHall_Tracie::
# 232 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 233 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 234 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Tracie_Text_0
# 236 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 237 "data/maps/NorthCampus_LectureHall/scripts.pory"
	release
	end


NorthCampus_LectureHall_WalkNextToTracie1::
# 242 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie1_Movement_0
# 244 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 245 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 246 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie2::
# 250 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie2_Movement_0
# 252 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 253 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 254 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie3::
# 258 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie3_Movement_0
# 260 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 261 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 262 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie4::
# 266 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 267 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie3_Movement_0
# 268 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 269 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 270 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie5::
# 274 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie5_Movement_0
# 276 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 277 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 278 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie6::
# 282 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie6_Movement_0
# 284 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 285 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 286 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1::
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_0
# 291 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle2::
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle2_Movement_0
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle3::
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle3_Movement_0
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle4::
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle4_Movement_0
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle5::
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle5_Movement_0
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle6::
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle6_Movement_0
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_MarioVSRotcart::
# 320 "data/maps/NorthCampus_LectureHall/scripts.pory"
	addobject LOCALID_ROTCART_LECTURE_HALL_2
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	clearflag FLAG_HIDE_TRACIEROTCART
# 322 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 323 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_7
# 324 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 325 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 326 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 327 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_0
# 328 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 329 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 331 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 332 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 333 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 334 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 335 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 336 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 337 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 338 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_1
# 339 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 340 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 341 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_2
# 342 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 343 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 344 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_3
# 345 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 346 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 347 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_4
# 348 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 349 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 350 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_5
# 351 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_0
# 353 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 354 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL_2
# 355 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_HIDE_TRACIEROTCART
# 356 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 357 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_MarioVSRotcart_Movement_1
# 359 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 360 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 361 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 362 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 363 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_6
# 364 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 365 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 366 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_7
# 367 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 368 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 50
# 369 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 370 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 371 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 372 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_8
# 373 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 374 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 375 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 376 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 377 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 19
# 378 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 379 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 380 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 381 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 382 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 383 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_9
# 384 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 385 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 386 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_2
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_3
# 389 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 390 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 391 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 392 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 395 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 396 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_4
# 398 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_4
# 399 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 400 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 401 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 402 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 404 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_10
# 405 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 406 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_5
# 407 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 408 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 409 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_11
# 410 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 411 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 412 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_12
# 413 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 414 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 415 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_13
# 416 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 417 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_11
# 418 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 419 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 420 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_11
# 421 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 422 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 423 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_7
# 424 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_12
# 425 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 426 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 427 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_14
# 428 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_9
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_9
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 433 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_15
# 434 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 435 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 11, 6
# 436 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 12, 5
# 437 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, 16, 5
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MAPLE_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MARIO_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 440 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, MOVEMENT_TYPE_FACE_LEFT
# 441 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 7
# 442 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end


NorthCampus_LectureHall_TalkToTracie::
# 447 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 448 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_0
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_0
# 451 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 452 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 453 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_12
# 454 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 455 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_Mario_Movement_12
# 456 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 457 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_Mario_Movement_12
# 458 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_Mario_Movement_12
# 459 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 460 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_Mario_Movement_12
# 461 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_1
# 462 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 463 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 464 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 465 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lockall
# 466 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 467 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 468 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 469 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 90
# 470 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 471 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm CUS_ANCIENT_PONI_PATH, TRUE
# 472 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 30
# 473 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_2
# 475 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 476 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 477 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_2
# 479 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_APPLAUSE
# 480 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 481 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_3
# 482 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 483 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 484 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 485 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_4
# 486 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 487 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 488 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 489 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_5
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 491 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 492 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 16, 5
# 493 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 15, 5
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 495 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 496 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_6
# 497 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 498 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 499 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 30
# 500 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 501 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_GYM, FALSE
# 502 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_7
# 503 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 504 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 505 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_TalkToTracie_Movement_3
# 507 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 508 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 509 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 510 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_9
# 511 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 512 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 513 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 514 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_8
# 515 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 516 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 517 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_9
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 519 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 520 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 521 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_10
# 522 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_Mario_Movement_0
# 523 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_Mario_Movement_0
# 524 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_Mario_Movement_0
# 525 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_Mario_Movement_0
# 526 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 527 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 528 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 529 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 25
# 530 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 16
# 531 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 532 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 533 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 534 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 535 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_10
# 536 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 537 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 538 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 539 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 540 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_12
# 541 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_12
# 542 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 543 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 544 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 545 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 546 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 547 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_11
# 548 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 549 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_Mario_Movement_12
# 550 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_Mario_Movement_12
# 551 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_Mario_Movement_12
# 552 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_Mario_Movement_12
# 553 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 554 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 555 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_12
# 556 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 557 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 558 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_9
# 559 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 560 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_13
# 561 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 562 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 563 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_14
# 564 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 565 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 566 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_7
# 567 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 568 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_15
# 569 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 570 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 571 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 13
# 572 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 573 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 574 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 575 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_9
# 576 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_5
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_6
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_7
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_8
# 581 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm 6, 12, 5
# 582 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 583 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 584 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_16
# 585 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_9
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_10
# 588 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 589 "data/maps/NorthCampus_LectureHall/scripts.pory"
	addobject LOCALID_ROTCART_LECTURE_HALL_2
# 590 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_17
# 592 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 593 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 594 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_18
# 595 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitfanfare
# 596 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_11
# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_12
# 599 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 600 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_12
# 601 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_12
# 602 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 603 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 604 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_19
# 605 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 606 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 607 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_20
# 608 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 609 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_21
# 611 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 612 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 613 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 614 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_22
# 615 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 616 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 617 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 618 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 619 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 620 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 621 "data/maps/NorthCampus_LectureHall/scripts.pory"
	showobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_TalkToTracie_Movement_13
# 623 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 624 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 625 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_23
# 626 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 627 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_12
# 628 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_12
# 629 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_12
# 630 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 631 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_24
# 632 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 633 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_25
# 635 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 636 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 637 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_26
# 638 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitfanfare
# 639 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 640 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_0
# 641 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_TalkToTracie_Movement_14
# 643 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 644 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_12
# 645 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_12
# 646 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 647 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadedefaultbgm
# 648 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_27
# 649 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 650 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 651 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_28
# 652 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 653 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_DING_DONG
# 654 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 655 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 40
# 656 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 657 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_29
# 658 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 659 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 660 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_30
# 661 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 662 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 663 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_31
# 664 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 665 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 666 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_32
# 667 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 668 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_9
# 669 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_0
# 670 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 671 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 672 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_33
# 673 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 674 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_0
# 675 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 676 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_HIDE_LECTURE_HALL_STUDENTS
# 677 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 3
# 678 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL
# 679 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL
# 680 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL_2
# 681 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 4
# 682 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 5
# 683 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 6
# 684 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 7
# 685 "data/maps/NorthCampus_LectureHall/scripts.pory"
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

# 213 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_0:
# 213 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 213 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 213 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 213 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 215 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_1:
# 215 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 215 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 215 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 215 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_2:
# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_3:
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 225 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_4:
# 225 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 225 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie1_Movement_0:
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie2_Movement_0:
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie3_Movement_0:
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie5_Movement_0:
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie6_Movement_0:
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_0:
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle2_Movement_0:
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle3_Movement_0:
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle4_Movement_0:
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle5_Movement_0:
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle6_Movement_0:
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_0:
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_1:
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_2:
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
	step_end

# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_3:
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
	step_end

# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_4:
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 406 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_5:
# 406 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 406 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_0:
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 476 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_1:
# 476 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 476 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_2:
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_down
	step_end

# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_3:
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
	step_end

# 520 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_4:
# 520 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_right
# 520 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_5:
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 577 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_6:
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 578 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_7:
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 579 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_8:
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 580 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_9:
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 586 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
	step_end

# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_10:
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 587 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
	step_end

# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_11:
# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 597 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 598 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_12:
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
	step_end

# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_13:
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 622 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_14:
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 642 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

NorthCampus_LectureHall_Maple_Text_0:
# 32 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don't underestimate President Mario!\n"
	.string "He's an Elite Four member for a reason!\p"
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
	.string "Tractor University can do!$"

NorthCampus_LectureHall_Mario_Text_3:
# 73 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Well done!\n"
	.string "You truly are a remarkable Trainer!$"

NorthCampus_LectureHall_Mario_Text_4:
# 81 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Very impressive, {PLAYER}!\p"
	.string "You've proven to be more than\n"
	.string "ready for the League challenge!$"

NorthCampus_LectureHall_Mario_Text_5:
# 93 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\n"
	.string "That was amazing, {PLAYER}!\p"
	.string "You actually beat President Mario!\n"
	.string "Not even Rotcart could do that!\p"
	.string "I can't wait for the\n"
	.string "League challenge now!$"

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
	.string "be a Trainer from Tractor University.\p"
	.string "Here, I'd like to give you this.$"

NorthCampus_LectureHall_Mario_Text_8:
# 108 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "This Exp. Share will equally divide up\n"
	.string "experience among all your Pokémon.\p"
	.string "I think it'll be very useful on your\n"
	.string "journey ahead!\p"
	.string "Just don't forget to turn it on!$"

NorthCampus_LectureHall_Mario_Text_9:
# 114 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Attention seniors.\p"
	.string "The boat has arrived at the\n"
	.string "Route 1 dock.\p"
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
	.string "The S.S. Tractoria!\p"
	.string "It'll take you directly across the sea\n"
	.string "to Route 2 and back.$"

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
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Take your time.$"

NorthCampus_LectureHall_Mario_Text_20:
# 202 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Remembering the basics is important!\p"
	.string "Be sure to complete your review and\n"
	.string "come back.$"

NorthCampus_LectureHall_Tracie_Text_0:
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "A battle with the President!\n"
	.string "I can't wait!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_0:
# 327 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{PLAYER}…\n"
	.string "It's Rotcart…\p"
	.string "He challenged President Mario\n"
	.string "to a battle, and…\p"
	.string "He lost.\p"
	.string "Badly…$"

NorthCampus_LectureHall_MarioVSRotcart_Text_1:
# 338 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "What!?\n"
	.string "No… That's impossible!\p"
	.string "I had that!\n"
	.string "I HAD that!\p"
	.string "You just got lucky, that's all!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_2:
# 341 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 344 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Tch!\n"
	.string "You don't know anything about me.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_4:
# 347 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I know enough.\n"
	.string "I've seen people just like you.\p"
	.string "If you keep this up, treat your Pokémon\n"
	.string "like tools, you won't make it far on your\l"
	.string "journey.\p"
	.string "I know you can be better than this,\n"
	.string "Rotcart.\n"
	.string "It's not too late to change your ways.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_5:
# 350 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "… … …$"

NorthCampus_LectureHall_MarioVSRotcart_Text_6:
# 363 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I hope that Rotcart takes your words\n"
	.string "to heart, President Mario.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_7:
# 366 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I do too, Professor Maple.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_8:
# 372 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "It's okay, {PLAYER} and Tracie.\p"
	.string "You guys can come up.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_9:
# 383 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Umm…\n"
	.string "Okay!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_10:
# 404 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I'm sorry you two had to witness that.\p"
	.string "As an educator, it's never easy having\n"
	.string "these conversations with students.\p"
	.string "I just hope Rotcart understands one\n"
	.string "day.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_11:
# 409 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Let's focus on you two.\p"
	.string "We heard excellent things about the\n"
	.string "both of you today!\p"
	.string "You've completed each review with\n"
	.string "flying colors.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_12:
# 412 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Thank you, Professor Maple!\n"
	.string "That's very nice of you to say.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_13:
# 415 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 427 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Oh! Oh!\n"
	.string "{PLAYER}!\p"
	.string "You GOTTA do it!\n"
	.string "This is the President we're talking\l"
	.string "about!\p"
	.string "An Elite Four member!\n"
	.string "This is a HUGE honor!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_15:
# 433 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Haha!\n"
	.string "Take some time to prepare.\p"
	.string "I'll be waiting right here when you're\n"
	.string "ready.$"

NorthCampus_LectureHall_TalkToTracie_Text_0:
# 448 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Looks like we got here just in time!\p"
	.string "Professor Maple is getting ready to\n"
	.string "speak.$"

NorthCampus_LectureHall_TalkToTracie_Text_1:
# 461 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Oh! It's starting!$"

NorthCampus_LectureHall_TalkToTracie_Text_2:
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Welcome back, students.\n"
	.string "And of course, congratulations!\p"
	.string "You’ve all made it to your fourth and\n"
	.string "final year here at Tractor University.\p"
	.string "You’ve all earned it,\n"
	.string "every one of you!\p"
	.string "Those sleepless nights, boring lectures\n"
	.string "for Rock-type Appreciation 101…\p"
	.string "All of it has led up to this final year\n"
	.string "where everything comes together!\p"
	.string "You’ve all grown in not only skill,\n"
	.string "but character as well.\p"
	.string "As head of the Pokémon Research\n"
	.string "department, I’m very proud of you all.\p"
	.string "With that being said, it’s time to go over\n"
	.string "your final, big assignment.\p"
	.string "To provide details, I’m happy to\n"
	.string "introduce to you our own President and\l"
	.string "Elite Four member, President Mario!$"

NorthCampus_LectureHall_TalkToTracie_Text_3:
# 481 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wait, what!?\n"
	.string "President Mario is here!?$"

NorthCampus_LectureHall_TalkToTracie_Text_4:
# 485 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Nobody told me the President was\n"
	.string "coming!$"

NorthCampus_LectureHall_TalkToTracie_Text_5:
# 489 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\n"
	.string "This is such an honor!$"

NorthCampus_LectureHall_TalkToTracie_Text_6:
# 496 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 502 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "The Tractoria Pokemon League!\p"
	.string "You will travel the region, challenging\n"
	.string "the eight Gym Leaders, Elite Four, and\l"
	.string "Champion to show us just how much\l"
	.string "you've learned.$"

NorthCampus_LectureHall_TalkToTracie_Text_8:
# 514 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "The Pokémon League Challenge!?\n"
	.string "Really?\p"
	.string "Oh gosh…\n"
	.string "I hope I’m ready.$"

NorthCampus_LectureHall_TalkToTracie_Text_9:
# 517 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Pft!$"

NorthCampus_LectureHall_TalkToTracie_Text_10:
# 535 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "That hardly sounds like a challenge.\p"
	.string "If they’re anything like this overrated\n"
	.string "loser up on stage, it’ll be a breeze.$"

NorthCampus_LectureHall_TalkToTracie_Text_11:
# 547 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "… … …\p"
	.string "Ahem!$"

NorthCampus_LectureHall_TalkToTracie_Text_12:
# 555 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Some of you may think that this\n"
	.string "challenge will be a walk in the park.\p"
	.string "But, I can assure you that this\n"
	.string "challenge will test the limits of what\l"
	.string "you can do as a Pokémon Trainer.\p"
	.string "To help prepare, we’ve arranged three\n"
	.string "review sessions for you to complete.\p"
	.string "These sessions will cover everything\n"
	.string "you’ve learned so far and help you get\l"
	.string "ready for what’s to come.\p"
	.string "But before we begin, please meet with\n"
	.string "Professor Maple to receive your very\l"
	.string "own PokéDex!$"

NorthCampus_LectureHall_TalkToTracie_Text_13:
# 560 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Anything you'd like to add, Professor\n"
	.string "Maple?$"

NorthCampus_LectureHall_TalkToTracie_Text_14:
# 563 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Thank you so much, Mario!\n"
	.string "I think that covers it!$"

NorthCampus_LectureHall_TalkToTracie_Text_15:
# 568 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Good luck, everybody!\n"
	.string "I’m sure you’ll all excel!\p"
	.string "Come see me to pick up your PokeDexes!$"

NorthCampus_LectureHall_TalkToTracie_Text_16:
# 584 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow… That was… a lot to take in.\p"
	.string "But also kinda exciting, right?\p"
	.string "We get to challenge the Pokémon\n"
	.string "League!\p"
	.string "This is what we came to Tractor\n"
	.string "University for!\p"
	.string "C'mon, let's go see Professor Maple\n"
	.string "and get our PokéDexes!$"

NorthCampus_LectureHall_TalkToTracie_Text_17:
# 591 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Ah, {PLAYER} and Tracie!\nHere you are!\pYou'll be needing these!$"

NorthCampus_LectureHall_TalkToTracie_Text_18:
# 594 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{PLAYER} and Tracie recieved the\n{COLOR GREEN}PokéDex {COLOR DARK_GRAY}from Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_19:
# 604 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\nThanks, Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_20:
# 607 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Of course, Tracie!\p"
	.string "This PokéDex is a special edition,\n"
	.string "crafted here at the University.\p"
	.string "They'll help record data from every\n"
	.string "Pokémon you will encounter on your\l"
	.string "journey.\p"
	.string "But, remember, it's not just\n"
	.string "about filling it with information.\p"
	.string "It's about learning and understanding\n"
	.string "the bond between you and your Pokémon.$"

NorthCampus_LectureHall_TalkToTracie_Text_21:
# 610 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Eeee!\nIt feels so official now!$"

NorthCampus_LectureHall_TalkToTracie_Text_22:
# 614 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don't get your hopes up.$"

NorthCampus_LectureHall_TalkToTracie_Text_23:
# 625 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "You don’t stand a chance out there.\p"
	.string "You won’t even make it to the first Gym.$"

NorthCampus_LectureHall_TalkToTracie_Text_24:
# 631 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Now, now, Rotcart.\p"
	.string "Competition is nice, but there's\n"
	.string "no need to belittle others.\p"
	.string "I think Tracie will do quite well!$"

NorthCampus_LectureHall_TalkToTracie_Text_25:
# 634 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Pfft!\n"
	.string "Yeah, yeah.\p"
	.string "Just give me my PokéDex so I can leave.$"

NorthCampus_LectureHall_TalkToTracie_Text_26:
# 637 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Rotcart recieved the {COLOR GREEN}PokéDex\n{COLOR DARK_GRAY}from Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_27:
# 648 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don’t listen to him, Tracie.\p"
	.string "Everybody has the potential to\n"
	.string "complete this challenge.\p"
	.string "I know you well enough to know\n"
	.string "you’ll do great!$"

NorthCampus_LectureHall_TalkToTracie_Text_28:
# 651 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I…\p"
	.string "Thank you, Professor Maple…$"

NorthCampus_LectureHall_TalkToTracie_Text_29:
# 657 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Attention seniors.\p"
	.string "Please report to the Gymnasium for\n"
	.string "your review on Pokémon battles.$"

NorthCampus_LectureHall_TalkToTracie_Text_30:
# 660 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Hear that?\n"
	.string "Time for the first review!\p"
	.string "The Gymnasium is upstairs in case you\n"
	.string "forgot. Good luck!$"

NorthCampus_LectureHall_TalkToTracie_Text_31:
# 663 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Come back once you're all\n"
	.string "done with your reviews!$"

NorthCampus_LectureHall_TalkToTracie_Text_32:
# 666 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Will do!\n"
	.string "Thank you!$"

NorthCampus_LectureHall_TalkToTracie_Text_33:
# 672 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Alright, {PLAYER}.\n"
	.string "I'll meet you at the Gymnasium!$"
