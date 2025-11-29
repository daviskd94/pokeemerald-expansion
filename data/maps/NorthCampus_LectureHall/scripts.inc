NorthCampus_LectureHall_MapScripts::
# 2 "data/maps/NorthCampus_LectureHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 3
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 3 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 4
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 3 "data/maps/NorthCampus_LectureHall/scripts.pory"
	compare VAR_NORTH_CAMPUS_STATE, 5
	goto_if_eq NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

NorthCampus_LectureHall_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 16, 5
# 5 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 15, 5
	return


NorthCampus_LectureHall_WalkNextToTracie1::
# 12 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie1_Movement_0
# 14 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 15 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 16 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie2::
# 20 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie2_Movement_0
# 22 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 23 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 24 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie3::
# 28 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie3_Movement_0
# 30 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 31 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 32 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie4::
# 36 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 37 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie3_Movement_0
# 38 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 39 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 40 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie5::
# 44 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie5_Movement_0
# 46 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 47 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 48 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_WalkNextToTracie6::
# 52 "data/maps/NorthCampus_LectureHall/scripts.pory"
	hideobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie6_Movement_0
# 54 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 55 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 56 "data/maps/NorthCampus_LectureHall/scripts.pory"
	call NorthCampus_LectureHall_TalkToTracie
	return


NorthCampus_LectureHall_TalkToTracie::
# 60 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 61 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_0
# 62 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 63 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_0
# 64 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 65 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 66 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 67 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 68 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 69 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 70 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 71 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 72 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 73 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 74 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_1
# 75 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 76 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 77 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 78 "data/maps/NorthCampus_LectureHall/scripts.pory"
	lockall
# 79 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 80 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 81 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 82 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 90
# 83 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 84 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm CUS_ANCIENT_PONI_PATH, TRUE
# 85 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 30
# 86 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 87 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_2
# 88 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 89 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_2
# 90 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_3
# 92 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_APPLAUSE
# 93 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 94 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_3
# 95 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 96 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 97 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 98 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_4
# 99 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 100 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 101 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_CROWD
# 102 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_5
# 103 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 104 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 5
# 105 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MAPLE_LECTURE_HALL, 16, 5
# 106 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_MARIO_LECTURE_HALL, 15, 5
# 107 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 108 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 109 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_6
# 110 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 111 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 112 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 30
# 113 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 114 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_GYM, FALSE
# 115 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_7
# 116 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 117 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special SpawnCameraObject
# 118 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 15, 5
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_LectureHall_TalkToTracie_Movement_5
# 120 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 121 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special RemoveCameraObject
# 122 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_CAMERA
# 123 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_6
# 124 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 125 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 126 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_8
# 128 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 129 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 130 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_9
# 131 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 132 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 133 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_7
# 134 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_8
# 135 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 136 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 137 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 138 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 139 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 140 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 141 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 142 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 25
# 143 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 16
# 144 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 145 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 146 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 147 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 148 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_10
# 149 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 150 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 151 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 152 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 6
# 153 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 154 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 155 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 156 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 157 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 158 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 159 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 160 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_11
# 161 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 162 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 163 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 164 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 165 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 166 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 167 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_12
# 169 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 170 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 171 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_6
# 172 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_13
# 174 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 175 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 176 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_14
# 177 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 178 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MARIO_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 179 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_MAPLE_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_4
# 180 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 181 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_15
# 182 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 183 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8004, 15
# 184 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_0x8005, 13
# 185 "data/maps/NorthCampus_LectureHall/scripts.pory"
	special TeleportCamera
# 186 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 10
# 187 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 188 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_6
# 189 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_9
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_10
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_11
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_12
# 194 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectxyperm 6, 12, 5
# 195 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 196 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 197 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_16
# 198 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_13
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_14
# 201 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 202 "data/maps/NorthCampus_LectureHall/scripts.pory"
	addobject LOCALID_ROTCART_LECTURE_HALL_2
# 203 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_17
# 205 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 206 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 207 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_18
# 208 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitfanfare
# 209 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 6, NorthCampus_LectureHall_TalkToTracie_Movement_15
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 7, NorthCampus_LectureHall_TalkToTracie_Movement_16
# 212 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 20
# 213 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 4, NorthCampus_LectureHall_TalkToTracie_Movement_16
# 214 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement 5, NorthCampus_LectureHall_TalkToTracie_Movement_16
# 215 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 216 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_19
# 218 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 219 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 220 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_20
# 221 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 222 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_21
# 224 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 225 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadeoutbgm 0
# 226 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_22
# 228 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 229 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_7
# 230 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_7
# 231 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_PIN
# 232 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 233 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 234 "data/maps/NorthCampus_LectureHall/scripts.pory"
	showobjectat LOCALID_ROTCART_LECTURE_HALL_2, MAP_NORTH_CAMPUS_LECTURE_HALL
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_TalkToTracie_Movement_17
# 236 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 237 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 238 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_23
# 239 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 240 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 241 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 242 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 243 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 244 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_24
# 245 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 246 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 247 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_25
# 248 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 249 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 250 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_26
# 251 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitfanfare
# 252 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 253 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 254 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_ROTCART_LECTURE_HALL_2, NorthCampus_LectureHall_TalkToTracie_Movement_18
# 256 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 257 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 258 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_1
# 259 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 260 "data/maps/NorthCampus_LectureHall/scripts.pory"
	fadedefaultbgm
# 261 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_27
# 262 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 263 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 264 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_28
# 265 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 266 "data/maps/NorthCampus_LectureHall/scripts.pory"
	playse SE_DING_DONG
# 267 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitse
# 268 "data/maps/NorthCampus_LectureHall/scripts.pory"
	delay 40
# 269 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 270 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_29
# 271 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 272 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 273 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_30
# 274 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 275 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_MARIO
# 276 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_31
# 277 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 278 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 279 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_32
# 280 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 281 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_6
# 282 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_LectureHall_WalkNextToTracie1_Movement_1
# 283 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 284 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 285 "data/maps/NorthCampus_LectureHall/scripts.pory"
	msgbox NorthCampus_LectureHall_TalkToTracie_Text_33
# 286 "data/maps/NorthCampus_LectureHall/scripts.pory"
	closemessage
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	applymovement LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL, NorthCampus_LectureHall_TalkToTracie_Movement_19
# 288 "data/maps/NorthCampus_LectureHall/scripts.pory"
	waitmovement 0
# 289 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setflag FLAG_HIDE_LECTURE_HALL_STUDENTS
# 290 "data/maps/NorthCampus_LectureHall/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 3
# 291 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_TRACIE_NORTH_CAMPUS_LECTURE_HALL
# 292 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL
# 293 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject LOCALID_ROTCART_LECTURE_HALL_2
# 294 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 4
# 295 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 5
# 296 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 6
# 297 "data/maps/NorthCampus_LectureHall/scripts.pory"
	removeobject 7
# 298 "data/maps/NorthCampus_LectureHall/scripts.pory"
	releaseall
	end


# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie1_Movement_0:
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 13 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 15 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie1_Movement_1:
# 15 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_right
	step_end

# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie2_Movement_0:
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 21 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie3_Movement_0:
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 29 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie5_Movement_0:
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 45 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_WalkNextToTracie6_Movement_0:
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 53 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 63 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_0:
# 63 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
# 63 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 66 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_1:
# 66 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_up
	step_end

# 89 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_2:
# 89 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 89 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_3:
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 91 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_down
	step_end

# 107 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_4:
# 107 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_down
	step_end

# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_5:
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
# 119 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_fast_down
	step_end

# 123 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_6:
# 123 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_left
	step_end

# 133 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_7:
# 133 "data/maps/NorthCampus_LectureHall/scripts.pory"
	face_right
# 133 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 134 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_8:
# 134 "data/maps/NorthCampus_LectureHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_9:
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 190 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_10:
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 191 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_11:
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 192 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_12:
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 193 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_13:
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 199 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
	step_end

# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_14:
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_down
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_up
	step_end

# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_15:
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 210 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_16:
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 211 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_17:
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
# 235 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_left
	step_end

# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_18:
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 255 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
NorthCampus_LectureHall_TalkToTracie_Movement_19:
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
# 287 "data/maps/NorthCampus_LectureHall/scripts.pory"
	walk_right
	step_end

NorthCampus_LectureHall_TalkToTracie_Text_0:
# 61 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Looks like we got here just in time!\p"
	.string "Professor Maple is getting ready to\n"
	.string "speak.$"

NorthCampus_LectureHall_TalkToTracie_Text_1:
# 74 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Oh! It's starting!$"

NorthCampus_LectureHall_TalkToTracie_Text_2:
# 87 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 94 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wait, what!?\n"
	.string "President Mario is here!?$"

NorthCampus_LectureHall_TalkToTracie_Text_4:
# 98 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Nobody told me the President was\n"
	.string "coming!$"

NorthCampus_LectureHall_TalkToTracie_Text_5:
# 102 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\n"
	.string "This is such an honor!$"

NorthCampus_LectureHall_TalkToTracie_Text_6:
# 109 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 115 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "The Tractoria Pokemon League!\p"
	.string "You will travel the region, challenging\n"
	.string "the eight Gym Leaders, Elite Four, and\l"
	.string "Champion to show us just how much\l"
	.string "you've learned.$"

NorthCampus_LectureHall_TalkToTracie_Text_8:
# 127 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "The Pokémon League Challenge!?\n"
	.string "Really?\p"
	.string "Oh gosh…\n"
	.string "I hope I’m ready.$"

NorthCampus_LectureHall_TalkToTracie_Text_9:
# 130 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Pft!$"

NorthCampus_LectureHall_TalkToTracie_Text_10:
# 148 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "That hardly sounds like a challenge.\p"
	.string "If they’re anything like this overrated\n"
	.string "loser up on stage, it’ll be a breeze.$"

NorthCampus_LectureHall_TalkToTracie_Text_11:
# 160 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "… … …\p"
	.string "Ahem!$"

NorthCampus_LectureHall_TalkToTracie_Text_12:
# 168 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 173 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Anything you'd like to add, Professor\n"
	.string "Maple?$"

NorthCampus_LectureHall_TalkToTracie_Text_14:
# 176 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Thank you so much, Mario!\n"
	.string "I think that covers it!$"

NorthCampus_LectureHall_TalkToTracie_Text_15:
# 181 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Good luck, everybody!\n"
	.string "I’m sure you’ll all excel!\p"
	.string "Come see me to pick up your PokeDexes!$"

NorthCampus_LectureHall_TalkToTracie_Text_16:
# 197 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow… That was… a lot to take in.\p"
	.string "But also kinda exciting, right?\p"
	.string "We get to challenge the Pokémon\n"
	.string "League!\p"
	.string "This is what we came to Tractor\n"
	.string "University for!\p"
	.string "C'mon, let's go see Professor Maple\n"
	.string "and get our PokéDexes!$"

NorthCampus_LectureHall_TalkToTracie_Text_17:
# 204 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Ah, {PLAYER} and Tracie!\nHere you are!\pYou'll be needing these!$"

NorthCampus_LectureHall_TalkToTracie_Text_18:
# 207 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "{PLAYER} and Tracie recieved the\n{COLOR GREEN}PokéDex {COLOR DARK_GRAY}from Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_19:
# 217 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Wow!\nThanks, Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_20:
# 220 "data/maps/NorthCampus_LectureHall/scripts.pory"
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
# 223 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Eeee!\nIt feels so official now!$"

NorthCampus_LectureHall_TalkToTracie_Text_22:
# 227 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don't get your hopes up.$"

NorthCampus_LectureHall_TalkToTracie_Text_23:
# 238 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "You don’t stand a chance out there.\p"
	.string "You won’t even make it to the first Gym.$"

NorthCampus_LectureHall_TalkToTracie_Text_24:
# 244 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Now, now, Rotcart.\p"
	.string "Competition is nice, but there's\n"
	.string "no need to belittle others.\p"
	.string "I think Tracie will do quite well!$"

NorthCampus_LectureHall_TalkToTracie_Text_25:
# 247 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Pfft!\n"
	.string "Yeah, yeah.\p"
	.string "Just give me my PokéDex so I can leave.$"

NorthCampus_LectureHall_TalkToTracie_Text_26:
# 250 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Rotcart recieved the {COLOR GREEN}PokéDex\n{COLOR DARK_GRAY}from Professor Maple!$"

NorthCampus_LectureHall_TalkToTracie_Text_27:
# 261 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Don’t listen to him, Tracie.\p"
	.string "Everybody has the potential to\n"
	.string "complete this challenge.\p"
	.string "I know you well enough to know\n"
	.string "you’ll do great!$"

NorthCampus_LectureHall_TalkToTracie_Text_28:
# 264 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "I…\p"
	.string "Thank you, Professor Maple…$"

NorthCampus_LectureHall_TalkToTracie_Text_29:
# 270 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Attention seniors.\p"
	.string "Please report to the Gymnasium for\n"
	.string "your review on Pokémon battles.$"

NorthCampus_LectureHall_TalkToTracie_Text_30:
# 273 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Hear that?\n"
	.string "Time for the first review!\p"
	.string "The Gymnasium is upstairs in case you\n"
	.string "forgot. Good luck!$"

NorthCampus_LectureHall_TalkToTracie_Text_31:
# 276 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Come back once you're all\n"
	.string "done with your reviews!$"

NorthCampus_LectureHall_TalkToTracie_Text_32:
# 279 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Will do!\n"
	.string "Thank you!$"

NorthCampus_LectureHall_TalkToTracie_Text_33:
# 285 "data/maps/NorthCampus_LectureHall/scripts.pory"
	.string "Alright, {PLAYER}.\n"
	.string "I'll meet you at the Gymnasium!$"
