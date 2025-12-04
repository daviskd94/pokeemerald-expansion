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
	setflag FLAG_HIDE_GYMNASIUM_TRACIE_COLTON
# 95 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_TRACIE
# 96 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_COLTON
# 97 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 98 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_13
# 99 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 100 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	checkplayergender
# 101 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq NorthCampus_Gymnasium_Enter_2
# 109 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 110 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_15
# 111 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
NorthCampus_Gymnasium_Enter_1:
# 113 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 114 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_16
# 115 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 116 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_Gymnasium_Enter_Movement_14
# 117 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_ROTCART, NorthCampus_Gymnasium_Enter_Movement_15
# 118 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_1
# 119 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 120 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	delay 40
# 121 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_17
# 123 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_Gymnasium_Enter_Movement_16
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_ROTCART, NorthCampus_Gymnasium_Enter_Movement_17
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_18
# 127 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 128 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement LOCALID_GYMNASIUM_ROTCART
# 129 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	delay 15
# 130 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	clearflag FLAG_HIDE_TRACIE
# 131 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	addobject LOCALID_GYMNASIUM_TRACIE_2
# 132 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 133 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_18
# 134 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 135 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	special HealPlayerParty
# 136 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setflag FLAG_WHITEOUT_CONTINUE
# 137 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_COACH_CEDAR, 21, 7
# 138 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	trainerbattle_no_intro TRAINER_ROTCART_1, NorthCampus_Gymnasium_Enter_Text_19
# 139 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 140 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	clearflag FLAG_WHITEOUT_CONTINUE
# 141 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	special RemoveCameraObject
# 142 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_CAMERA
# 143 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	special SpawnCameraObject
# 144 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 8, 7
# 145 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_Gymnasium_Enter_Movement_19
# 146 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_ROTCART, NorthCampus_Gymnasium_Enter_Movement_20
# 147 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 148 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	special HealPlayerParty
# 149 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq NorthCampus_Gymnasium_Enter_6
# 171 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 172 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_23
# 173 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 174 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_21
# 175 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_ROTCART, NorthCampus_Gymnasium_Enter_Movement_22
# 176 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 177 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	fadedefaultbgm
# 178 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_COACH_CEDAR, NorthCampus_Gymnasium_Enter_Movement_23
# 179 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 180 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_15
# 181 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 182 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_24
# 183 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 184 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_TRACIE_2, NorthCampus_Gymnasium_Enter_Movement_24
# 185 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 186 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_4
# 187 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 188 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_25
# 189 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
NorthCampus_Gymnasium_Enter_5:
# 191 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	playse SE_DING_DONG
# 192 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitse
# 193 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 194 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_26
# 195 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 196 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 197 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 198 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_27
# 199 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_TRACIE_2, NorthCampus_Gymnasium_Enter_Movement_25
# 201 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_15
# 202 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	delay 80
# 203 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_21
# 204 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	delay 130
# 205 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_15
# 206 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 207 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	fadedefaultbgm
# 208 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 209 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_28
# 210 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 211 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setflag FLAG_HIDE_GYMNASIUM_STUDENTS
# 212 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setflag FLAG_HIDE_TRACIE
# 213 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	clearflag FLAG_HIDE_TRACIE_CYRUS
# 214 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_BLACK_BELT
# 215 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_BREEDER_F
# 216 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_TRACIE_2
# 217 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_ROTCART
# 218 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_GYMNASIUM_ACE_TRAINER_F
# 219 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setobjectxyperm LOCALID_GYMNASIUM_COACH_CEDAR, 13, 7
# 220 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	special RemoveCameraObject
# 221 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	removeobject LOCALID_CAMERA
# 222 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 4
# 223 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	callnative UpdateFollowingPokemon
# 224 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	release
	end

NorthCampus_Gymnasium_Enter_2:
# 103 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 104 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_14
# 105 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
	goto NorthCampus_Gymnasium_Enter_1

NorthCampus_Gymnasium_Enter_6:
# 150 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 151 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_20
# 152 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 153 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_21
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_ROTCART, NorthCampus_Gymnasium_Enter_Movement_22
# 155 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 156 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	fadedefaultbgm
# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_COACH_CEDAR, NorthCampus_Gymnasium_Enter_Movement_23
# 158 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 159 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_15
# 160 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 161 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_21
# 162 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement LOCALID_GYMNASIUM_TRACIE_2, NorthCampus_Gymnasium_Enter_Movement_24
# 164 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	waitmovement 0
# 165 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_Gymnasium_Enter_Movement_4
# 166 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 167 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Enter_Text_22
# 168 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
	goto NorthCampus_Gymnasium_Enter_5


NorthCampus_Gymnasium_Coach_Cedar::
# 229 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 230 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	msgbox NorthCampus_Gymnasium_Coach_Cedar_Text_0
# 231 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	closemessage
	end


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

# 116 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_14:
# 116 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 116 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
	step_end

# 117 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_15:
# 117 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_right
	step_end

# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_16:
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 124 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
	step_end

# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_17:
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 125 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_right
	step_end

# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_18:
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_up
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 126 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
	step_end

# 145 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_19:
# 145 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 145 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 145 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 145 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
	step_end

# 146 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_20:
# 146 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 146 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 146 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 146 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 146 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 146 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 146 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
	step_end

# 153 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_21:
# 153 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_down
	step_end

# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_22:
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 154 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
	step_end

# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_23:
# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 157 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
	step_end

# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_24:
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_left
# 163 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	face_down
	step_end

# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
NorthCampus_Gymnasium_Enter_Movement_25:
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_right
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
# 200 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	walk_down
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
# 98 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Ahh, there you are, Rotcart!\n"
	.string "Ready to battle {PLAYER}?$"

NorthCampus_Gymnasium_Enter_Text_14:
# 104 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Won't matter, his ass is mine.$"

NorthCampus_Gymnasium_Enter_Text_15:
# 110 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Won't matter, her ass is mine.$"

NorthCampus_Gymnasium_Enter_Text_16:
# 114 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Very well.\p"
	.string "{PLAYER}, Rotcart,\n"
	.string "take your positions.$"

NorthCampus_Gymnasium_Enter_Text_17:
# 122 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Just because this is a practice match,\n"
	.string "don't expect me to go easy on the weak.\p"
	.string "Follow me.$"

NorthCampus_Gymnasium_Enter_Text_18:
# 133 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Kicking your ass will be a nice warm up\n"
	.string "before I fight those other weaklings.\p"
	.string "Try not to lose too fast.\n"
	.string "I want this to look like a real fight.$"

NorthCampus_Gymnasium_Enter_Text_19:
# 138 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Tch…\n"
	.string "Enjoy that while you still can.$"

NorthCampus_Gymnasium_Enter_Text_20:
# 151 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "That's what I thought.\p"
	.string "You're a loser, and you'll never be\n"
	.string "anything more.\p"
	.string "Get lost.$"

NorthCampus_Gymnasium_Enter_Text_21:
# 161 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Well done, {PLAYER}!\p"
	.string "Don't worry about losing,\n"
	.string "you showed great skill.\p"
	.string "Rotcart still has a lot to learn.$"

NorthCampus_Gymnasium_Enter_Text_22:
# 167 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "You okay, {PLAYER}?\n"
	.string "That was tough!\p"
	.string "Rotcart is really strong…\p"
	.string "I won my fight,\n"
	.string "at least!$"

NorthCampus_Gymnasium_Enter_Text_23:
# 172 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "You just got lucky.\p"
	.string "I'm still the best Trainer this school\n"
	.string "has seen.\p"
	.string "Kindly, piss off.$"

NorthCampus_Gymnasium_Enter_Text_24:
# 182 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Well done, {PLAYER}!\p"
	.string "You showed great skill and composure in\n"
	.string "that battle.\p"
	.string "Rotcart still has a lot to learn,\n"
	.string "it seems.$"

NorthCampus_Gymnasium_Enter_Text_25:
# 188 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "{PLAYER}!\n"
	.string "That was amazing!\p"
	.string "You really showed up Rotcart!\p"
	.string "I won my fight too!\p"
	.string "Looks like we both have a lot to be\n"
	.string "proud of.$"

NorthCampus_Gymnasium_Enter_Text_26:
# 194 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Attention seniors.\p"
	.string "Please report to the Wild Area for a\n"
	.string "review on catching Pokémon.\p"
	.string "Thank you.$"

NorthCampus_Gymnasium_Enter_Text_27:
# 198 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Time for the next review!\p"
	.string "C'mon, {PLAYER},\n"
	.string "I'll meet you there!$"

NorthCampus_Gymnasium_Enter_Text_28:
# 209 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "You and Tracie will do great!\p"
	.string "Remember to trust your Pokémon.\p"
	.string "The Wild Area is outside on the west\n"
	.string "side of North Campus.\p"
	.string "Good luck, {PLAYER}!$"

NorthCampus_Gymnasium_Coach_Cedar_Text_0:
# 230 "data/maps/NorthCampus_Gymnasium/scripts.pory"
	.string "Remember, Pokémon battles are not\n"
	.string "about who can bark the loudest.\p"
	.string "A true Trainer knows how to stay calm\n"
	.string "and collected in any situation.\p"
	.string "Trust in your Pokémon, and they will\n"
	.string "trust in you.$"
