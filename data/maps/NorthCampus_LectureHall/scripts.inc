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
# 20 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 3
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 20 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 4
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 20 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 5
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 11, 6
# 5 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 12, 5
# 6 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, 16, 5
# 7 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MAPLE_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 8 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MARIO_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 9 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, MOVEMENT_TYPE_FACE_LEFT
	goto NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/NorthCampus_LectureHall/scripts.pory"
	addobject LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MAPLE_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 14 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MARIO_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_ROTCART_LECTURE_HALL_2, MOVEMENT_TYPE_FACE_LEFT
# 16 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 10, 5
# 17 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 12, 5
# 18 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_ROTCART_LECTURE_HALL_2, 18, 5
	return

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 16, 5
# 22 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 15, 5
	return


NorthCampus_LectureHall_Maple::
# 27 "data/maps/NorthCampus_LectureHall/scripts.pory"
	goto_if_set FLAG_POST_PROFESSOR_HANZNEESTOZ, NorthCampus_LectureHall_Maple_1
# 35 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 36 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 37 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 38 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Maple_Text_1
# 39 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 40 "data/maps/NorthCampus_LectureHall/scripts.pory"
	release
	end

NorthCampus_LectureHall_Maple_1:
# 28 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lockall
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 30 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 31 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Maple_Text_0
# 32 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
	return


NorthCampus_LectureHall_Mario::
# 46 "data/maps/NorthCampus_LectureHall/scripts.pory"
	goto_if_set FLAG_POST_PROFESSOR_HANZNEESTOZ, NorthCampus_LectureHall_Mario_1
# 80 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 81 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 82 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 83 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_5
# 84 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 85 "data/maps/NorthCampus_LectureHall/scripts.pory"
	release
	end

NorthCampus_LectureHall_Mario_1:
# 47 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lockall
# 48 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 49 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 50 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_0, MSGBOX_YESNO
# 51 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NorthCampus_LectureHall_Mario_4
# 71 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 72 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 73 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_4
# 74 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 75 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end

NorthCampus_LectureHall_Mario_4:
# 52 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 54 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_1
# 55 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 56 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call Mario_Facing_Direction
# 57 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 58 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_Mario_Movement_1
# 59 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 60 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 61 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 18, 6
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_Mario_Movement_2
# 63 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 64 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 65 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Mario_Text_2
# 66 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 67 "data/maps/NorthCampus_LectureHall/scripts.pory"
	trainerbattle_no_intro TRAINER_MARIO_1, NorthCampus_LectureHall_Mario_Text_3
	return


Mario_Facing_Direction::
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 92 "data/maps/NorthCampus_LectureHall/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_NORTH, Mario_Facing_Direction_2
# 98 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_SOUTH, Mario_Facing_Direction_3
# 100 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_EAST, Mario_Facing_Direction_4
# 102 "data/maps/NorthCampus_LectureHall/scripts.pory"
	case DIR_WEST, Mario_Facing_Direction_5
	return

Mario_Facing_Direction_2:
# 94 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_0
# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 96 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_1
	return

Mario_Facing_Direction_3:
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_2
	return

Mario_Facing_Direction_4:
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mario_Facing_Direction_Movement_3
	return

Mario_Facing_Direction_5:
# 103 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_1
	return


NorthCampus_LectureHall_Tracie::
# 108 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lock
# 109 "data/maps/NorthCampus_LectureHall/scripts.pory"
	faceplayer
# 110 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 111 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_Tracie_Text_0
# 112 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 113 "data/maps/NorthCampus_LectureHall/scripts.pory"
	release
	end


NorthCampus_LectureHall_WalkNextToTracie1::
# 118 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie1_Movement_0
# 120 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 121 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 122 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie2::
# 126 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie2_Movement_0
# 128 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 129 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 130 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie3::
# 134 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie3_Movement_0
# 136 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 137 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 138 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie4::
# 142 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 143 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie3_Movement_0
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 145 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 146 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie5::
# 150 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie5_Movement_0
# 152 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 153 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 154 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie6::
# 158 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie6_Movement_0
# 160 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 161 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 162 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1::
# 166 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lockall
# 167 "data/maps/NorthCampus_LectureHall/scripts.pory"
	addobject LOCALID_ROTCART_LECTURE_HALL_2
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	clearflag FLAG_HIDE_TRACIEROTCART
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_0
# 170 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 171 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_1
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_MarioVSRotcart
	return


NorthCampus_LectureHall_MarioVSRotcart::
# 177 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 178 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 179 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_0
# 180 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 181 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 182 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 183 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 184 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 5
# 185 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 186 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 187 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 188 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 189 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_1
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_2
# 194 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 195 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 196 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_3
# 197 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 198 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_4
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 201 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 202 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_5
# 203 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_0
# 205 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 206 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL_2
# 207 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_HIDE_TRACIEROTCART
# 208 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 209 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_MarioVSRotcart_Movement_1
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 212 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 213 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 214 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 215 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_6
# 216 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 218 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_7
# 219 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 220 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 50
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_1
# 222 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 224 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_8
# 225 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 226 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 228 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 229 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 19
# 230 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 231 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 232 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 233 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 234 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_9
# 236 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 237 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 238 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_2
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_3
# 241 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 242 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 5
# 244 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 245 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 246 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 247 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 248 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_4
# 250 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_4
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 252 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 253 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 254 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 256 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_10
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 258 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_5
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 260 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 261 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_11
# 262 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 263 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 264 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_12
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 266 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 267 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_13
# 268 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 269 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_6
# 270 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 271 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 272 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_6
# 273 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_LEDGE
# 274 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_1
# 276 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 277 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 278 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 279 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_14
# 280 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_8
# 282 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_8
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 284 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 285 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_MarioVSRotcart_Text_15
# 286 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 11, 6
# 288 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 12, 5
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, 16, 5
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MAPLE_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 291 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_MARIO_LECTURE_HALL, MOVEMENT_TYPE_FACE_RIGHT
# 292 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL_2, MOVEMENT_TYPE_FACE_LEFT
# 293 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 7
# 294 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end


NorthCampus_LectureHall_TalkToTracie::
# 299 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_0
# 301 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 302 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_0
# 303 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 304 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 305 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 306 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 307 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 308 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 309 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 310 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 311 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 312 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 313 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_1
# 314 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 315 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 316 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 317 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lockall
# 318 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 319 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 320 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 321 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 90
# 322 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 323 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm CUS_ANCIENT_PONI_PATH, TRUE
# 324 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 30
# 325 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 326 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_2
# 327 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 328 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 329 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_2
# 331 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_APPLAUSE
# 332 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 333 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_3
# 334 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 335 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 336 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 337 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_4
# 338 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 339 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 340 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 341 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_5
# 342 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 343 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 344 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 16, 5
# 345 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 15, 5
# 346 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_1
# 347 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 348 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_6
# 349 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 350 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 351 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 30
# 352 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 353 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_GYM, FALSE
# 354 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_7
# 355 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 356 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 357 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_TalkToTracie_Movement_3
# 359 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 360 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 361 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 362 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_8
# 363 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 364 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 365 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 366 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_8
# 367 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 368 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 369 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_9
# 370 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 371 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 372 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 373 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_5
# 374 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_Mario_Movement_0
# 375 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_Mario_Movement_0
# 376 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_Mario_Movement_0
# 377 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_Mario_Movement_0
# 378 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 379 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 380 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 381 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 25
# 382 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 16
# 383 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 384 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 385 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 386 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_10
# 388 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 389 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 390 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 391 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 392 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 393 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 394 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 395 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 396 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 397 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 398 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 399 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_11
# 400 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 401 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 402 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 403 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 404 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 405 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 406 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 407 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_12
# 408 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 409 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 410 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_8
# 411 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 412 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_13
# 413 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 414 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 415 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_14
# 416 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 417 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_1
# 418 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_1
# 419 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 420 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_15
# 421 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 422 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 423 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 13
# 424 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 425 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 426 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 427 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_8
# 428 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_6
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_7
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_8
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_9
# 433 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm 6, 12, 5
# 434 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 435 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 436 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_16
# 437 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_10
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_11
# 440 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 441 "data/maps/NorthCampus_LectureHall/scripts.pory"
	addobject LOCALID_ROTCART_LECTURE_HALL_2
# 442 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 443 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_17
# 444 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 445 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 446 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_18
# 447 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitfanfare
# 448 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_12
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_13
# 451 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 452 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_13
# 453 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_13
# 454 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 455 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 456 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_19
# 457 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 458 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 459 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_20
# 460 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 461 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 462 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_21
# 463 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 464 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 465 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 466 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_22
# 467 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 468 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 469 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 470 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 471 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 472 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 473 "data/maps/NorthCampus_LectureHall/scripts.pory"
	showobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_TalkToTracie_Movement_14
# 475 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 476 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 477 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_23
# 478 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 479 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 480 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 481 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 482 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 483 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_24
# 484 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 485 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 486 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_25
# 487 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 488 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 489 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_26
# 490 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitfanfare
# 491 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 492 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_0
# 493 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_Mario_Movement_0
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_TalkToTracie_Movement_15
# 495 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 496 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 497 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_7
# 498 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 499 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadedefaultbgm
# 500 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_27
# 501 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 502 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 503 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_28
# 504 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 505 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_DING_DONG
# 506 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 507 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 40
# 508 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 509 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_29
# 510 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 511 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 512 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_30
# 513 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 514 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 515 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_31
# 516 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 517 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_32
# 519 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 520 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_8
# 521 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_Mario_Movement_0
# 522 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 523 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 524 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_33
# 525 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 526 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_MarioVSRotcart_Movement_0
# 527 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 528 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_HIDE_LECTURE_HALL_STUDENTS
# 529 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 3
# 530 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL
# 531 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL
# 532 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL_2
# 533 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 4
# 534 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 5
# 535 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 6
# 536 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 7
# 537 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end


# 57 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_0:
# 57 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_right
	step_end

# 58 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_1:
# 58 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 58 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 58 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 58 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 58 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 58 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_Mario_Movement_2:
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_slow_left
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_slow_left
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_slow_left
	step_end

# 94 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_0:
# 94 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 94 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 94 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 94 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 96 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_1:
# 96 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 96 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 96 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 96 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_2:
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
Mario_Facing_Direction_Movement_3:
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie1_Movement_0:
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie2_Movement_0:
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie3_Movement_0:
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie5_Movement_0:
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie6_Movement_0:
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_0:
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
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
	walk_right
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 171 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracieBeforeBattle1_Movement_1:
# 171 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_down
	step_end

# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_0:
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_1:
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_2:
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
	step_end

# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_3:
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_right
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	slide_up
	step_end

# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_4:
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 258 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_5:
# 258 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 258 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 269 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_6:
# 269 "data/maps/NorthCampus_LectureHall/scripts.pory"
	jump_in_place_left
	step_end

# 276 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_7:
# 276 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_MarioVSRotcart_Movement_8:
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 302 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_0:
# 302 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
# 302 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 328 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_1:
# 328 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 328 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_2:
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 330 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_down
	step_end

# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_3:
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 358 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
	step_end

# 372 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_4:
# 372 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_right
# 372 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 373 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_5:
# 373 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_6:
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 429 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_7:
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 430 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_8:
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 431 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_9:
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 432 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_10:
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 438 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
	step_end

# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_11:
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 439 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
	step_end

# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_12:
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 449 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_13:
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 450 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_14:
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 474 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_15:
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 494 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

NorthCampus_LectureHall_Maple_Text_0:
# 31 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don't underestimate President Mario!\n"
	.string "He's an Elite Four member for a reason!\p"
	.string "Give it your all in the battle!$"

NorthCampus_LectureHall_Maple_Text_1:
# 38 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I've got faith you in you two.\n"
	.string "Good luck!$"

NorthCampus_LectureHall_Mario_Text_0:
# 50 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Are you ready for our battle?$"

NorthCampus_LectureHall_Mario_Text_1:
# 54 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Great!\n"
	.string "Let's get into position!$"

NorthCampus_LectureHall_Mario_Text_2:
# 65 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Show me what a top student at Tractor\n"
	.string "University can do!$"

NorthCampus_LectureHall_Mario_Text_3:
# 67 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Well done!\n"
	.string "You truly are a remarkable Trainer!$"

NorthCampus_LectureHall_Mario_Text_4:
# 73 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Take your time.$"

NorthCampus_LectureHall_Mario_Text_5:
# 83 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Remembering the basics is important!\p"
	.string "Be sure to complete your review and\n"
	.string "come back.$"

NorthCampus_LectureHall_Tracie_Text_0:
# 111 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "A battle with the President!\n"
	.string "I can't wait!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_0:
# 179 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{PLAYER}…\n"
	.string "It's Rotcart…\p"
	.string "He challenged President Mario\n"
	.string "to a battle, and…\p"
	.string "He lost.\p"
	.string "Badly…$"

NorthCampus_LectureHall_MarioVSRotcart_Text_1:
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "What!?\n"
	.string "No… That's impossible!\p"
	.string "I had that!\n"
	.string "I HAD that!\p"
	.string "You just got lucky, that's all!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_2:
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 196 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Tch!\n"
	.string "You don't know anything about me.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_4:
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I know enough.\n"
	.string "I've seen people just like you.\p"
	.string "If you keep this up, treat your Pokémon\n"
	.string "like tools, you won't make it far on your\l"
	.string "journey.\p"
	.string "I know you can be better than this,\n"
	.string "Rotcart.\n"
	.string "It's not too late to change your ways.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_5:
# 202 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "… … …$"

NorthCampus_LectureHall_MarioVSRotcart_Text_6:
# 215 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I hope that Rotcart takes your words\n"
	.string "to heart, President Mario.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_7:
# 218 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I do too, Professor Maple.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_8:
# 224 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "It's okay, {PLAYER} and Tracie.\p"
	.string "You guys can come up.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_9:
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Umm…\n"
	.string "Okay!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_10:
# 256 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I'm sorry you two had to witness that.\p"
	.string "As an educator, it's never easy having\n"
	.string "these conversations with students.\p"
	.string "I just hope Rotcart understands one\n"
	.string "day.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_11:
# 261 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Let's focus on you two.\p"
	.string "We heard excellent things about the\n"
	.string "both of you today!\p"
	.string "You've completed each review with\n"
	.string "flying colors.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_12:
# 264 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Thank you, Professor Maple!\n"
	.string "That's very nice of you to say.$"

NorthCampus_LectureHall_MarioVSRotcart_Text_13:
# 267 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 279 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Oh! Oh!\n"
	.string "{PLAYER}!\p"
	.string "You GOTTA do it!\n"
	.string "This is the President we're talking\l"
	.string "about!\p"
	.string "An Elite Four member!\n"
	.string "This is a HUGE honor!$"

NorthCampus_LectureHall_MarioVSRotcart_Text_15:
# 285 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Haha!\n"
	.string "Take some time to prepare.\p"
	.string "I'll be waiting right here when you're\n"
	.string "ready.$"

NorthCampus_LectureHall_TalkToTracie_Text_0:
# 300 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Looks like we got here just in time!\p"
	.string "Professor Maple is getting ready to\n"
	.string "speak.$"

NorthCampus_LectureHall_TalkToTracie_Text_1:
# 313 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Oh! It's starting!$"

NorthCampus_LectureHall_TalkToTracie_Text_2:
# 326 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 333 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wait, what!?\n"
	.string "President Mario is here!?$"

NorthCampus_LectureHall_TalkToTracie_Text_4:
# 337 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Nobody told me the President was\n"
	.string "coming!$"

NorthCampus_LectureHall_TalkToTracie_Text_5:
# 341 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\n"
	.string "This is such an honor!$"

NorthCampus_LectureHall_TalkToTracie_Text_6:
# 348 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 354 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "The Tractoria Pokemon League!\p"
	.string "You will travel the region, challenging\n"
	.string "the eight Gym Leaders, Elite Four, and\l"
	.string "Champion to show us just how much\l"
	.string "you've learned.$"

NorthCampus_LectureHall_TalkToTracie_Text_8:
# 366 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "The Pokémon League Challenge!?\n"
	.string "Really?\p"
	.string "Oh gosh…\n"
	.string "I hope I’m ready.$"

NorthCampus_LectureHall_TalkToTracie_Text_9:
# 369 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Pft!$"

NorthCampus_LectureHall_TalkToTracie_Text_10:
# 387 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "That hardly sounds like a challenge.\p"
	.string "If they’re anything like this overrated\n"
	.string "loser up on stage, it’ll be a breeze.$"

NorthCampus_LectureHall_TalkToTracie_Text_11:
# 399 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "… … …\p"
	.string "Ahem!$"

NorthCampus_LectureHall_TalkToTracie_Text_12:
# 407 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 412 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Anything you'd like to add, Professor\n"
	.string "Maple?$"

NorthCampus_LectureHall_TalkToTracie_Text_14:
# 415 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Thank you so much, Mario!\n"
	.string "I think that covers it!$"

NorthCampus_LectureHall_TalkToTracie_Text_15:
# 420 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Good luck, everybody!\n"
	.string "I’m sure you’ll all excel!\p"
	.string "Come see me to pick up your PokeDexes!$"

NorthCampus_LectureHall_TalkToTracie_Text_16:
# 436 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow… That was… a lot to take in.\p"
	.string "But also kinda exciting, right?\p"
	.string "We get to challenge the Pokémon\n"
	.string "League!\p"
	.string "This is what we came to Tractor\n"
	.string "University for!\p"
	.string "C'mon, let's go see Professor Maple\n"
	.string "and get our PokéDexes!$"

NorthCampus_LectureHall_TalkToTracie_Text_17:
# 443 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Ah, {PLAYER} and Tracie!\nHere you are!\pYou'll be needing these!$"

NorthCampus_LectureHall_TalkToTracie_Text_18:
# 446 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{PLAYER} and Tracie recieved the\n{COLOR GREEN}PokéDex {COLOR DARK_GRAY}from Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_19:
# 456 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\nThanks, Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_20:
# 459 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 462 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Eeee!\nIt feels so official now!$"

NorthCampus_LectureHall_TalkToTracie_Text_22:
# 466 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don't get your hopes up.$"

NorthCampus_LectureHall_TalkToTracie_Text_23:
# 477 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "You don’t stand a chance out there.\p"
	.string "You won’t even make it to the first Gym.$"

NorthCampus_LectureHall_TalkToTracie_Text_24:
# 483 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Now, now, Rotcart.\p"
	.string "Competition is nice, but there's\n"
	.string "no need to belittle others.\p"
	.string "I think Tracie will do quite well!$"

NorthCampus_LectureHall_TalkToTracie_Text_25:
# 486 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Pfft!\n"
	.string "Yeah, yeah.\p"
	.string "Just give me my PokéDex so I can leave.$"

NorthCampus_LectureHall_TalkToTracie_Text_26:
# 489 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Rotcart recieved the {COLOR GREEN}PokéDex\n{COLOR DARK_GRAY}from Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_27:
# 500 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don’t listen to him, Tracie.\p"
	.string "Everybody has the potential to\n"
	.string "complete this challenge.\p"
	.string "I know you well enough to know\n"
	.string "you’ll do great!$"

NorthCampus_LectureHall_TalkToTracie_Text_28:
# 503 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I…\p"
	.string "Thank you, Professor Maple…$"

NorthCampus_LectureHall_TalkToTracie_Text_29:
# 509 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Attention seniors.\p"
	.string "Please report to the Gymnasium for\n"
	.string "your review on Pokémon battles.$"

NorthCampus_LectureHall_TalkToTracie_Text_30:
# 512 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Hear that?\n"
	.string "Time for the first review!\p"
	.string "The Gymnasium is upstairs in case you\n"
	.string "forgot. Good luck!$"

NorthCampus_LectureHall_TalkToTracie_Text_31:
# 515 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Come back once you're all\n"
	.string "done with your reviews!$"

NorthCampus_LectureHall_TalkToTracie_Text_32:
# 518 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Will do!\n"
	.string "Thank you!$"

NorthCampus_LectureHall_TalkToTracie_Text_33:
# 524 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Alright, {PLAYER}.\n"
	.string "I'll meet you at the Gymnasium!$"
