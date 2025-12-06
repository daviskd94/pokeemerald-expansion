NorthCampus_MapScripts::
# 2 "data/maps/NorthCampus/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NorthCampus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NorthCampus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


NorthCampus_WalkNextToTracie1::
# 9 "data/maps/NorthCampus/scripts.pory"
	lockall
# 10 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie1_Movement_0
# 11 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 12 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie2::
# 16 "data/maps/NorthCampus/scripts.pory"
	lockall
# 17 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie2_Movement_0
# 18 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 19 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie3::
# 23 "data/maps/NorthCampus/scripts.pory"
	lockall
# 24 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie3_Movement_0
# 25 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 26 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie4::
# 30 "data/maps/NorthCampus/scripts.pory"
	lockall
# 31 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie4_Movement_0
# 32 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 33 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie5::
# 37 "data/maps/NorthCampus/scripts.pory"
	lockall
# 38 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie5_Movement_0
# 39 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 40 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie6::
# 44 "data/maps/NorthCampus/scripts.pory"
	lockall
# 45 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie6_Movement_0
# 46 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 47 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_TalkToTracie::
# 51 "data/maps/NorthCampus/scripts.pory"
	fadeoutbgm 0
# 52 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 53 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_TalkToTracie_Text_0
# 54 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_0
# 55 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_ENTERING_MAIN_HALL, NorthCampus_TalkToTracie_Movement_1
# 56 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 57 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_TalkToTracie_Text_1
# 58 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 59 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 60 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_ENTERING_MAIN_HALL, NorthCampus_TalkToTracie_Movement_3
# 61 "data/maps/NorthCampus/scripts.pory"
	opendoor 46, 16
# 62 "data/maps/NorthCampus/scripts.pory"
	waitdooranim
# 63 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 64 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_ENTERING_MAIN_HALL, NorthCampus_TalkToTracie_Movement_2
# 65 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 66 "data/maps/NorthCampus/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_NORTH_CAMPUS
# 67 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_ENTERING_MAIN_HALL, NorthCampus_TalkToTracie_Movement_2
# 68 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 69 "data/maps/NorthCampus/scripts.pory"
	hideobjectat LOCALID_TRACIE_ENTERING_MAIN_HALL, MAP_NORTH_CAMPUS
# 70 "data/maps/NorthCampus/scripts.pory"
	closedoor 42, 16
# 71 "data/maps/NorthCampus/scripts.pory"
	waitdooranim
# 72 "data/maps/NorthCampus/scripts.pory"
	special SpawnCameraObject
# 73 "data/maps/NorthCampus/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 42, 16
# 74 "data/maps/NorthCampus/scripts.pory"
	delay 60
# 75 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_TalkToTracie_Movement_4
# 76 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 77 "data/maps/NorthCampus/scripts.pory"
	delay 120
# 78 "data/maps/NorthCampus/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 1
# 79 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_TRACIE_1
# 80 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 81 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
# 82 "data/maps/NorthCampus/scripts.pory"
	waitstate
# 83 "data/maps/NorthCampus/scripts.pory"
	releaseall
	end


NorthCampus_TestWarp::
# 88 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
	return


NorthCampus_EnterWildArea::
# 92 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_EnterWildArea_Movement_0
# 93 "data/maps/NorthCampus/scripts.pory"
	fadeoutbgm 0
# 94 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 95 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 96 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 97 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_0
# 98 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 99 "data/maps/NorthCampus/scripts.pory"
	delay 40
# 100 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_1
# 101 "data/maps/NorthCampus/scripts.pory"
	delay 30
# 102 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_2
# 103 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 104 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, FALSE
# 105 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 106 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_1
# 107 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 108 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_1
# 109 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_2
# 110 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 111 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 112 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_3
# 113 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 114 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_2
# 115 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_4
# 116 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 117 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 118 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_5
# 119 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 120 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_3
# 121 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_6
# 122 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 123 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_3
# 124 "data/maps/NorthCampus/scripts.pory"
	playse SE_PIN
# 125 "data/maps/NorthCampus/scripts.pory"
	waitse
# 126 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 127 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_7
# 128 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 129 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_3
# 130 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_8
# 131 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 132 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 133 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_9
# 134 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 135 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 136 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_10
# 137 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 138 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 139 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_11
# 140 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 141 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 142 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_12
# 143 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 144 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 145 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_13
# 146 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 147 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 148 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_14
# 149 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 150 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_4
# 151 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 152 "data/maps/NorthCampus/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 153 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_15
# 154 "data/maps/NorthCampus/scripts.pory"
	waitfanfare
# 155 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 156 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 157 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_5
# 158 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_16
# 159 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 160 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 161 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 162 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_17
# 163 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 164 "data/maps/NorthCampus/scripts.pory"
	special SavePlayerParty
# 165 "data/maps/NorthCampus/scripts.pory"
	special LoadWallyZigzagoon
# 166 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_6
# 167 "data/maps/NorthCampus/scripts.pory"
	delay 50
# 168 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_TalkToTracie_Movement_0
# 169 "data/maps/NorthCampus/scripts.pory"
	delay 50
# 170 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_TalkToTracie_Movement_1
# 171 "data/maps/NorthCampus/scripts.pory"
	delay 50
# 172 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 173 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_18
# 174 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 175 "data/maps/NorthCampus/scripts.pory"
	special StartWallyTutorialBattle
# 176 "data/maps/NorthCampus/scripts.pory"
	waitstate
# 177 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 178 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_19
# 179 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 180 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_1
# 181 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 182 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 183 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 184 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_20
# 185 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 186 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 187 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 188 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_21
# 189 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 190 "data/maps/NorthCampus/scripts.pory"
	clearflag FLAG_NORTH_CAMPUS_CATCHING_PROFESSOR
# 191 "data/maps/NorthCampus/scripts.pory"
	addobject LOCALID_PROFESSOR_ASPEN
# 192 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 193 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_22
# 194 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 195 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_7
# 196 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_EnterWildArea_Movement_8
# 197 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_8
# 198 "data/maps/NorthCampus/scripts.pory"
	playse SE_PIN
# 199 "data/maps/NorthCampus/scripts.pory"
	waitse
# 200 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_EnterWildArea_Movement_9
# 201 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 202 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 203 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_EnterWildArea_Movement_3
# 204 "data/maps/NorthCampus/scripts.pory"
	playse SE_PIN
# 205 "data/maps/NorthCampus/scripts.pory"
	waitse
# 206 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 207 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_23
# 208 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 209 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_HELP, FALSE
# 210 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_10
# 211 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 212 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_11
# 213 "data/maps/NorthCampus/scripts.pory"
	playse SE_LEDGE
# 214 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 215 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_10
# 216 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 217 "data/maps/NorthCampus/scripts.pory"
	delay 40
# 218 "data/maps/NorthCampus/scripts.pory"
	fadeoutbgm 0
# 219 "data/maps/NorthCampus/scripts.pory"
	delay 5
# 220 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 221 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 222 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_24
# 223 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 224 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_TalkToTracie_Movement_0
# 225 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 226 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 227 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_25
# 228 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 229 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_ASPEN
# 230 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_26
# 231 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 232 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 233 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_27
# 234 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 235 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_ASPEN
# 236 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_28
# 237 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 238 "data/maps/NorthCampus/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 239 "data/maps/NorthCampus/scripts.pory"
	waitfanfare
# 240 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 241 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 242 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_29
# 243 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 244 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_ASPEN
# 245 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_30
# 246 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 247 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_EnterWildArea_Movement_12
# 248 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 249 "data/maps/NorthCampus/scripts.pory"
	removeobject LOCALID_PROFESSOR_ASPEN
# 250 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_0
# 251 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 252 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 253 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_31
# 254 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 255 "data/maps/NorthCampus/scripts.pory"
	playse SE_DING_DONG
# 256 "data/maps/NorthCampus/scripts.pory"
	waitse
# 257 "data/maps/NorthCampus/scripts.pory"
	delay 40
# 258 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 259 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_32
# 260 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 261 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 262 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 263 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_33
# 264 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 265 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_13
# 266 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 267 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_1
# 268 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_12
# 269 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 270 "data/maps/NorthCampus/scripts.pory"
	removeobject LOCALID_CYRUS_NORTH_CAMPUS
# 271 "data/maps/NorthCampus/scripts.pory"
	removeobject LOCALID_TRACIE_CATCHING_TUTORIAL
# 272 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_HIDE_TRACIE_CYRUS
# 273 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_CATCHING_PROFESSOR
# 274 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_POKEBALLS_UNLOCKED
# 275 "data/maps/NorthCampus/scripts.pory"
	clearflag FLAG_HIDE_PROFESSOR_HANZNEESTOZ
# 276 "data/maps/NorthCampus/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 5
# 277 "data/maps/NorthCampus/scripts.pory"
	fadedefaultbgm
# 278 "data/maps/NorthCampus/scripts.pory"
	special LoadPlayerParty
# 279 "data/maps/NorthCampus/scripts.pory"
	callnative UpdateFollowingPokemon
# 280 "data/maps/NorthCampus/scripts.pory"
	releaseall
	end


NorthCampus_Cave_Guard::
# 285 "data/maps/NorthCampus/scripts.pory"
	lock
# 286 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 287 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_Cave_Guard_Text_0
# 288 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 289 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC1::
# 293 "data/maps/NorthCampus/scripts.pory"
	lock
# 294 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 295 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC1_Text_0
# 296 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 297 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC2::
# 302 "data/maps/NorthCampus/scripts.pory"
	lock
# 303 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 304 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC2_Text_0
# 305 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 306 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC3::
# 311 "data/maps/NorthCampus/scripts.pory"
	lock
# 312 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 313 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC3_Text_0
# 314 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 315 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC4::
# 320 "data/maps/NorthCampus/scripts.pory"
	lock
# 321 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 322 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC4_Text_0
# 323 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 324 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC5::
# 329 "data/maps/NorthCampus/scripts.pory"
	lock
# 330 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 331 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC5_Text_0
# 332 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 333 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC6::
# 338 "data/maps/NorthCampus/scripts.pory"
	lock
# 339 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 340 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC6_Text_0
# 341 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 342 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_MahindraLibrarySign::
# 347 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_MahindraLibrarySign_Text_0
# 348 "data/maps/NorthCampus/scripts.pory"
	closemessage
	return


# 10 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie1_Movement_0:
# 10 "data/maps/NorthCampus/scripts.pory"
	walk_down
# 10 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 10 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 10 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie2_Movement_0:
# 17 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 17 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 17 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 24 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie3_Movement_0:
# 24 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 24 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 24 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 24 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie4_Movement_0:
# 31 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 31 "data/maps/NorthCampus/scripts.pory"
	face_up
	step_end

# 38 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie5_Movement_0:
# 38 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 38 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie6_Movement_0:
# 45 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 45 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 54 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_0:
# 54 "data/maps/NorthCampus/scripts.pory"
	face_left
	step_end

# 55 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_1:
# 55 "data/maps/NorthCampus/scripts.pory"
	face_right
	step_end

# 59 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_2:
# 59 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 60 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_3:
# 60 "data/maps/NorthCampus/scripts.pory"
	walk_right
	step_end

# 75 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_4:
# 75 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 75 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 75 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 75 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 75 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 75 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
	step_end

# 92 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_0:
# 92 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 92 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 92 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 92 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 92 "data/maps/NorthCampus/scripts.pory"
	face_up
	step_end

# 100 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_1:
# 100 "data/maps/NorthCampus/scripts.pory"
	face_down
	step_end

# 102 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_2:
# 102 "data/maps/NorthCampus/scripts.pory"
	walk_down
	step_end

# 123 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_3:
# 123 "data/maps/NorthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 150 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_4:
# 150 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 150 "data/maps/NorthCampus/scripts.pory"
	walk_down
	step_end

# 157 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_5:
# 157 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 157 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 157 "data/maps/NorthCampus/scripts.pory"
	face_down
	step_end

# 166 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_6:
# 166 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 166 "data/maps/NorthCampus/scripts.pory"
	face_left
	step_end

# 195 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_7:
# 195 "data/maps/NorthCampus/scripts.pory"
	face_down
# 195 "data/maps/NorthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 196 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_8:
# 196 "data/maps/NorthCampus/scripts.pory"
	face_right
# 196 "data/maps/NorthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 200 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_9:
# 200 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 200 "data/maps/NorthCampus/scripts.pory"
	face_up
	step_end

# 210 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_10:
# 210 "data/maps/NorthCampus/scripts.pory"
	walk_fast_right
# 210 "data/maps/NorthCampus/scripts.pory"
	walk_fast_right
# 210 "data/maps/NorthCampus/scripts.pory"
	walk_fast_right
	step_end

# 212 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_11:
# 212 "data/maps/NorthCampus/scripts.pory"
	jump_2_right
	step_end

# 247 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_12:
# 247 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 247 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 247 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 247 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 247 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 247 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 247 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 247 "data/maps/NorthCampus/scripts.pory"
	walk_right
	step_end

# 265 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_13:
# 265 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 265 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 265 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 265 "data/maps/NorthCampus/scripts.pory"
	walk_down
	step_end

NorthCampus_TalkToTracie_Text_0:
# 53 "data/maps/NorthCampus/scripts.pory"
	.string "…\p"
	.string "Take a good look, {PLAYER}…\p"
	.string "Main Hall sure does hit different when\n"
	.string "you know it's your final year.\p"
	.string "We've had a lot of great memories in\n"
	.string "here.\p"
	.string "And… okay, maybe a few\n"
	.string "catastrophes too.\p"
	.string "We never did find out what happened to\n"
	.string "the guy with the Mareep and the lotion…$"

NorthCampus_TalkToTracie_Text_1:
# 57 "data/maps/NorthCampus/scripts.pory"
	.string "But, enough about that.\n"
	.string "C'mon, {PLAYER}.\p"
	.string "Let's head inside before I start\n"
	.string "getting all mushy.$"

NorthCampus_EnterWildArea_Text_0:
# 97 "data/maps/NorthCampus/scripts.pory"
	.string "I'm… not sure I've met this man.\n"
	.string "Is he a new professor here?\p"
	.string "I didn't hear anything about new staff.\p"
	.string "Something's off…$"

NorthCampus_EnterWildArea_Text_1:
# 106 "data/maps/NorthCampus/scripts.pory"
	.string "Greetings, students!\n"
	.string "My name is Cyrus.$"

NorthCampus_EnterWildArea_Text_2:
# 109 "data/maps/NorthCampus/scripts.pory"
	.string "But you may call me Professor Cyrus.$"

NorthCampus_EnterWildArea_Text_3:
# 112 "data/maps/NorthCampus/scripts.pory"
	.string "Nice to meet you, Professor Cyrus!$"

NorthCampus_EnterWildArea_Text_4:
# 115 "data/maps/NorthCampus/scripts.pory"
	.string "That's DOCTOR Professor Cyrus,\n"
	.string "actually.$"

NorthCampus_EnterWildArea_Text_5:
# 118 "data/maps/NorthCampus/scripts.pory"
	.string "Oh! Uhh… I'm sorry, Doctor Professor\n"
	.string "Cyru-$"

NorthCampus_EnterWildArea_Text_6:
# 121 "data/maps/NorthCampus/scripts.pory"
	.string "MISTER DOCTOR PROFESSOR CYRUS!$"

NorthCampus_EnterWildArea_Text_7:
# 127 "data/maps/NorthCampus/scripts.pory"
	.string "Eek!$"

NorthCampus_EnterWildArea_Text_8:
# 130 "data/maps/NorthCampus/scripts.pory"
	.string "Splendid!\n"
	.string "Pleasure to meet you all!\p"
	.string "I'm here to teach you all about\n"
	.string "catching Pokémon.\p"
	.string "First, to catch a Pokémon, you use\n"
	.string "what's called a Poké Ball.\p"
	.string "Once you find a wild Pokémon, you throw\n"
	.string "the Poké Ball at it to capture it!\p"
	.string "It's really quite simple!$"

NorthCampus_EnterWildArea_Text_9:
# 133 "data/maps/NorthCampus/scripts.pory"
	.string "But um… Mister Doctor Professor Cyrus…$"

NorthCampus_EnterWildArea_Text_10:
# 136 "data/maps/NorthCampus/scripts.pory"
	.string "No need to be so formal,\n"
	.string "call me Cyrus!$"

NorthCampus_EnterWildArea_Text_11:
# 139 "data/maps/NorthCampus/scripts.pory"
	.string "… … …\p"
	.string "Right… Cyrus.\p"
	.string "You have to weaken a Pokémon first\n"
	.string "before you can catch it.\p"
	.string "You can't just throw a Poké Ball at a\n"
	.string "wild Pokémon out of nowhere!\p"
	.string "That's… not how it works.$"

NorthCampus_EnterWildArea_Text_12:
# 142 "data/maps/NorthCampus/scripts.pory"
	.string "That's a great point!\n"
	.string "I like your style.\p"
	.string "What's your name?$"

NorthCampus_EnterWildArea_Text_13:
# 145 "data/maps/NorthCampus/scripts.pory"
	.string "Oh, umm… Thank you?\n"
	.string "I'm Tracie.$"

NorthCampus_EnterWildArea_Text_14:
# 148 "data/maps/NorthCampus/scripts.pory"
	.string "A pleasure to meet you, Trucie.\n"
	.string "Here's ¥5!$"

NorthCampus_EnterWildArea_Text_15:
# 153 "data/maps/NorthCampus/scripts.pory"
	.string "Trucie received ¥5 from Cyrus!$"

NorthCampus_EnterWildArea_Text_16:
# 158 "data/maps/NorthCampus/scripts.pory"
	.string "I'm so… confused.$"

NorthCampus_EnterWildArea_Text_17:
# 162 "data/maps/NorthCampus/scripts.pory"
	.string "Now, I believe it's time for\n"
	.string "a demonstration!\p"
	.string "Watch carefuly, Trucie!$"

NorthCampus_EnterWildArea_Text_18:
# 173 "data/maps/NorthCampus/scripts.pory"
	.string "Woah!$"

NorthCampus_EnterWildArea_Text_19:
# 178 "data/maps/NorthCampus/scripts.pory"
	.string "Not another one…\p"
	.string "These poor miscolored Pokémon…\n"
	.string "They're so sick.$"

NorthCampus_EnterWildArea_Text_20:
# 184 "data/maps/NorthCampus/scripts.pory"
	.string "It rests upon my shoulders\n"
	.string "to save them all!$"

NorthCampus_EnterWildArea_Text_21:
# 188 "data/maps/NorthCampus/scripts.pory"
	.string "Umm…\n"
	.string "Cyrus?\p"
	.string "That Pokémon isn't sick, it's…$"

NorthCampus_EnterWildArea_Text_22:
# 193 "data/maps/NorthCampus/scripts.pory"
	.string "Sorry I'm late!$"

NorthCampus_EnterWildArea_Text_23:
# 207 "data/maps/NorthCampus/scripts.pory"
	.string "Hey!\n"
	.string "Who the hell are you!?$"

NorthCampus_EnterWildArea_Text_24:
# 222 "data/maps/NorthCampus/scripts.pory"
	.string "Sigh… guess I'm calling security.$"

NorthCampus_EnterWildArea_Text_25:
# 227 "data/maps/NorthCampus/scripts.pory"
	.string "Professor Aspen!\p"
	.string "Were you supposed to be giving this\n"
	.string "lesson?$"

NorthCampus_EnterWildArea_Text_26:
# 230 "data/maps/NorthCampus/scripts.pory"
	.string "Hey there, Tracie.\n"
	.string "Yes, I was.\p"
	.string "Apologies for my tardiness.\p"
	.string "Though, it looks like whoever you had\n"
	.string "already covered the basics?$"

NorthCampus_EnterWildArea_Text_27:
# 233 "data/maps/NorthCampus/scripts.pory"
	.string "Uhh… yeah.\n"
	.string "I think I got the gist of it.\p"
	.string "Cyrus was… interesting.$"

NorthCampus_EnterWildArea_Text_28:
# 236 "data/maps/NorthCampus/scripts.pory"
	.string "Cyrus was his name?\p"
	.string "I think I've heard that name before.\p"
	.string "Well, in any case, I'm glad you\n"
	.string "were able to learn something today.\p"
	.string "I've brought some Poké Balls for the\n"
	.string "two of you to use.\p"
	.string "The PokéMart is also now fully stocked,\n"
	.string "so feel free to buy more if you'd like.$"

NorthCampus_EnterWildArea_Text_29:
# 242 "data/maps/NorthCampus/scripts.pory"
	.string "Thank you, Professor Aspen!\p"
	.string "I'll be sure to put these to good use!$"

NorthCampus_EnterWildArea_Text_30:
# 245 "data/maps/NorthCampus/scripts.pory"
	.string "You're welcome, Tracie.\p"
	.string "Now, if you'll excuse me, I have to go\n"
	.string "file a police report.$"

NorthCampus_EnterWildArea_Text_31:
# 253 "data/maps/NorthCampus/scripts.pory"
	.string "Well, that was… something.$"

NorthCampus_EnterWildArea_Text_32:
# 259 "data/maps/NorthCampus/scripts.pory"
	.string "Attention seniors.\p"
	.string "Please report to Mahindra Library for\n"
	.string "your next assignment.$"

NorthCampus_EnterWildArea_Text_33:
# 263 "data/maps/NorthCampus/scripts.pory"
	.string "There's our cue!\p"
	.string "I'll meet up with your later, {PLAYER}.\p"
	.string "I've got Pokémon to catch!$"

NorthCampus_Cave_Guard_Text_0:
# 287 "data/maps/NorthCampus/scripts.pory"
	.string "Fieldstone Cavern is currently off\n"
	.string "limits during orientation.\p"
	.string "Please come back later.$"

NorthCampus_NPC1_Text_0:
# 295 "data/maps/NorthCampus/scripts.pory"
	.string "I love Dunsparce!\n"
	.string "Though, I wish it had an evolution…$"

NorthCampus_NPC2_Text_0:
# 304 "data/maps/NorthCampus/scripts.pory"
	.string "My dad carved the tractor statue.\p"
	.string "What an incredible display of both\n"
	.string "architecture and agriculture!$"

NorthCampus_NPC3_Text_0:
# 313 "data/maps/NorthCampus/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "Rotcart came through not that long\l"
	.string "ago.\p"
	.string "Is it me, or is he even more of an\n"
	.string "intolerable asshole this year?$"

NorthCampus_NPC4_Text_0:
# 322 "data/maps/NorthCampus/scripts.pory"
	.string "Your Eevee is soooo cute!\p"
	.string "Have you decided which evolution\n"
	.string "you'll choose?\p"
	.string "My favorite Eeveelution is Espeon!$"

NorthCampus_NPC5_Text_0:
# 331 "data/maps/NorthCampus/scripts.pory"
	.string "I read that Main Hall was built almost a\n"
	.string "century ago!\p"
	.string "It's amazing that it's still standing\n"
	.string "strong.\p"
	.string "I hope it lasts for another hundred\n"
	.string "years!$"

NorthCampus_NPC6_Text_0:
# 340 "data/maps/NorthCampus/scripts.pory"
	.string "Watch out for the Pidgey that hangs\n"
	.string "out by the statue.\p"
	.string "They've gotten bold.\n"
	.string "Like, 'steal your lunch' bold.$"

NorthCampus_MahindraLibrarySign_Text_0:
# 347 "data/maps/NorthCampus/scripts.pory"
	.string "Mahindra Library$"
