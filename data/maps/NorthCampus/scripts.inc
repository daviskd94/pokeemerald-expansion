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
	closemessage
# 55 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_0
# 56 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_ENTERING_MAIN_HALL, NorthCampus_TalkToTracie_Movement_1
# 57 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 58 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_TalkToTracie_Text_1
# 59 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 60 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 61 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_ENTERING_MAIN_HALL, NorthCampus_TalkToTracie_Movement_3
# 62 "data/maps/NorthCampus/scripts.pory"
	opendoor 46, 16
# 63 "data/maps/NorthCampus/scripts.pory"
	waitdooranim
# 64 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 65 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_ENTERING_MAIN_HALL, NorthCampus_TalkToTracie_Movement_2
# 66 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 67 "data/maps/NorthCampus/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_NORTH_CAMPUS
# 68 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_ENTERING_MAIN_HALL, NorthCampus_TalkToTracie_Movement_2
# 69 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 70 "data/maps/NorthCampus/scripts.pory"
	hideobjectat LOCALID_TRACIE_ENTERING_MAIN_HALL, MAP_NORTH_CAMPUS
# 71 "data/maps/NorthCampus/scripts.pory"
	closedoor 46, 16
# 72 "data/maps/NorthCampus/scripts.pory"
	waitdooranim
# 73 "data/maps/NorthCampus/scripts.pory"
	special SpawnCameraObject
# 74 "data/maps/NorthCampus/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 42, 16
# 75 "data/maps/NorthCampus/scripts.pory"
	delay 60
# 76 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_TalkToTracie_Movement_4
# 77 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 78 "data/maps/NorthCampus/scripts.pory"
	delay 120
# 79 "data/maps/NorthCampus/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 1
# 80 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_TRACIE_1
# 81 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 82 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
# 83 "data/maps/NorthCampus/scripts.pory"
	waitstate
# 84 "data/maps/NorthCampus/scripts.pory"
	releaseall
	end


NorthCampus_TestWarp::
# 89 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
	return


NorthCampus_EnterWildArea::
# 93 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_EnterWildArea_Movement_0
# 94 "data/maps/NorthCampus/scripts.pory"
	fadeoutbgm 0
# 95 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 96 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 97 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 98 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_0
# 99 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 100 "data/maps/NorthCampus/scripts.pory"
	delay 40
# 101 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_1
# 102 "data/maps/NorthCampus/scripts.pory"
	delay 30
# 103 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_2
# 104 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 105 "data/maps/NorthCampus/scripts.pory"
	playbgm CUS_DD_CROOG_THEME, TRUE
# 106 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 107 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_1
# 108 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 109 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_1
# 110 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_2
# 111 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 112 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 113 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_3
# 114 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 115 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_2
# 116 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_4
# 117 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 118 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 119 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_5
# 120 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 121 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_3
# 122 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_6
# 123 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 124 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_3
# 125 "data/maps/NorthCampus/scripts.pory"
	playse SE_PIN
# 126 "data/maps/NorthCampus/scripts.pory"
	waitse
# 127 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 128 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_7
# 129 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 130 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_3
# 131 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_8
# 132 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 133 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 134 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_9
# 135 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 136 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 137 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_10
# 138 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 139 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 140 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_11
# 141 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 142 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 143 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_12
# 144 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 145 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 146 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_13
# 147 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 148 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 149 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_14
# 150 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 151 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_4
# 152 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 153 "data/maps/NorthCampus/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 154 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_15
# 155 "data/maps/NorthCampus/scripts.pory"
	waitfanfare
# 156 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 157 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 158 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_5
# 159 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_16
# 160 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 161 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 162 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 163 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_17
# 164 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 165 "data/maps/NorthCampus/scripts.pory"
	special SavePlayerParty
# 166 "data/maps/NorthCampus/scripts.pory"
	special LoadWallyZigzagoon
# 167 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_6
# 168 "data/maps/NorthCampus/scripts.pory"
	delay 50
# 169 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_TalkToTracie_Movement_0
# 170 "data/maps/NorthCampus/scripts.pory"
	delay 50
# 171 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_TalkToTracie_Movement_1
# 172 "data/maps/NorthCampus/scripts.pory"
	delay 50
# 173 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 174 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_18
# 175 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 176 "data/maps/NorthCampus/scripts.pory"
	special StartWallyTutorialBattle
# 177 "data/maps/NorthCampus/scripts.pory"
	waitstate
# 178 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 179 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_19
# 180 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 181 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_1
# 182 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 183 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 184 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 185 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_20
# 186 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 187 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 188 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 189 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_21
# 190 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 191 "data/maps/NorthCampus/scripts.pory"
	clearflag FLAG_NORTH_CAMPUS_CATCHING_PROFESSOR
# 192 "data/maps/NorthCampus/scripts.pory"
	addobject LOCALID_PROFESSOR_ASPEN
# 193 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 194 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_22
# 195 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 196 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_7
# 197 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_EnterWildArea_Movement_8
# 198 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_8
# 199 "data/maps/NorthCampus/scripts.pory"
	playse SE_PIN
# 200 "data/maps/NorthCampus/scripts.pory"
	waitse
# 201 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_EnterWildArea_Movement_9
# 202 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 203 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 204 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_EnterWildArea_Movement_3
# 205 "data/maps/NorthCampus/scripts.pory"
	playse SE_PIN
# 206 "data/maps/NorthCampus/scripts.pory"
	waitse
# 207 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 208 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_23
# 209 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 210 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_HELP, FALSE
# 211 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_10
# 212 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 213 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_11
# 214 "data/maps/NorthCampus/scripts.pory"
	playse SE_LEDGE
# 215 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 216 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_10
# 217 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 218 "data/maps/NorthCampus/scripts.pory"
	savebgm MUS_DUMMY
# 219 "data/maps/NorthCampus/scripts.pory"
	fadedefaultbgm
# 220 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 221 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_24
# 222 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 223 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_TalkToTracie_Movement_0
# 224 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 225 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 226 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_25
# 227 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 228 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_ASPEN
# 229 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_26
# 230 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 231 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 232 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_27
# 233 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 234 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_ASPEN
# 235 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_28
# 236 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 237 "data/maps/NorthCampus/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 238 "data/maps/NorthCampus/scripts.pory"
	waitfanfare
# 239 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 240 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 241 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_29
# 242 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 243 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_ASPEN
# 244 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_30
# 245 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 246 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_EnterWildArea_Movement_12
# 247 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 248 "data/maps/NorthCampus/scripts.pory"
	removeobject LOCALID_PROFESSOR_ASPEN
# 249 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_0
# 250 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 251 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 252 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_31
# 253 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 254 "data/maps/NorthCampus/scripts.pory"
	playse SE_DING_DONG
# 255 "data/maps/NorthCampus/scripts.pory"
	waitse
# 256 "data/maps/NorthCampus/scripts.pory"
	delay 40
# 257 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 258 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_32
# 259 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 260 "data/maps/NorthCampus/scripts.pory"
	playbgm CUS_ENCOUNTER_TRACIE, FALSE
# 261 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 262 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_33
# 263 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 264 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_13
# 265 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 266 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_1
# 267 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_12
# 268 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 269 "data/maps/NorthCampus/scripts.pory"
	removeobject LOCALID_CYRUS_NORTH_CAMPUS
# 270 "data/maps/NorthCampus/scripts.pory"
	removeobject LOCALID_TRACIE_CATCHING_TUTORIAL
# 271 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_HIDE_TRACIE_CYRUS
# 272 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_CATCHING_PROFESSOR
# 273 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_POKEBALLS_UNLOCKED
# 274 "data/maps/NorthCampus/scripts.pory"
	clearflag FLAG_HIDE_PROFESSOR_HANZNEESTOZ
# 275 "data/maps/NorthCampus/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 5
# 276 "data/maps/NorthCampus/scripts.pory"
	fadedefaultbgm
# 277 "data/maps/NorthCampus/scripts.pory"
	special LoadPlayerParty
# 278 "data/maps/NorthCampus/scripts.pory"
	callnative UpdateFollowingPokemon
# 279 "data/maps/NorthCampus/scripts.pory"
	releaseall
	end


NorthCampus_TractorStatue::
# 284 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_TractorStatue_Text_0, MSGBOX_SIGN
# 285 "data/maps/NorthCampus/scripts.pory"
	closemessage
	return


NorthCampus_Cave_Guard::
# 288 "data/maps/NorthCampus/scripts.pory"
	lock
# 289 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 290 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_Cave_Guard_Text_0
# 291 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 292 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC1::
# 296 "data/maps/NorthCampus/scripts.pory"
	lock
# 297 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 298 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC1_Text_0
# 299 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 300 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC2::
# 305 "data/maps/NorthCampus/scripts.pory"
	lock
# 306 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 307 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC2_Text_0
# 308 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 309 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC3::
# 314 "data/maps/NorthCampus/scripts.pory"
	lock
# 315 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 316 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC3_Text_0
# 317 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 318 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC4::
# 323 "data/maps/NorthCampus/scripts.pory"
	lock
# 324 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 325 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC4_Text_0
# 326 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 327 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC5::
# 332 "data/maps/NorthCampus/scripts.pory"
	lock
# 333 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 334 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC5_Text_0
# 335 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 336 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC6::
# 341 "data/maps/NorthCampus/scripts.pory"
	lock
# 342 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 343 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC6_Text_0
# 344 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 345 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_MahindraLibrarySign::
# 350 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_MahindraLibrarySign_Text_0
# 351 "data/maps/NorthCampus/scripts.pory"
	closemessage
	return


NorthCampus_PokemonResearchLabSign::
# 355 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_PokemonResearchLabSign_Text_0
# 356 "data/maps/NorthCampus/scripts.pory"
	closemessage
	return


NorthCampus_FossilResearchLabSign::
# 360 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_FossilResearchLabSign_Text_0
# 361 "data/maps/NorthCampus/scripts.pory"
	closemessage
	return


NorthCampus_PokeballResearchLab::
# 365 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_PokeballResearchLab_Text_0
# 366 "data/maps/NorthCampus/scripts.pory"
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

# 55 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_0:
# 55 "data/maps/NorthCampus/scripts.pory"
	face_left
	step_end

# 56 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_1:
# 56 "data/maps/NorthCampus/scripts.pory"
	face_right
	step_end

# 60 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_2:
# 60 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_3:
# 61 "data/maps/NorthCampus/scripts.pory"
	walk_right
	step_end

# 76 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_4:
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
	step_end

# 93 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_0:
# 93 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 93 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 93 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 93 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 93 "data/maps/NorthCampus/scripts.pory"
	face_up
	step_end

# 101 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_1:
# 101 "data/maps/NorthCampus/scripts.pory"
	face_down
	step_end

# 103 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_2:
# 103 "data/maps/NorthCampus/scripts.pory"
	walk_down
	step_end

# 124 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_3:
# 124 "data/maps/NorthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 151 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_4:
# 151 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 151 "data/maps/NorthCampus/scripts.pory"
	walk_down
	step_end

# 158 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_5:
# 158 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 158 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 158 "data/maps/NorthCampus/scripts.pory"
	face_down
	step_end

# 167 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_6:
# 167 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 167 "data/maps/NorthCampus/scripts.pory"
	face_left
	step_end

# 196 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_7:
# 196 "data/maps/NorthCampus/scripts.pory"
	face_down
# 196 "data/maps/NorthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 197 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_8:
# 197 "data/maps/NorthCampus/scripts.pory"
	face_right
# 197 "data/maps/NorthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 201 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_9:
# 201 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 201 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 201 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 201 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 201 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 201 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 201 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 201 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 201 "data/maps/NorthCampus/scripts.pory"
	face_up
	step_end

# 211 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_10:
# 211 "data/maps/NorthCampus/scripts.pory"
	walk_fast_right
# 211 "data/maps/NorthCampus/scripts.pory"
	walk_fast_right
# 211 "data/maps/NorthCampus/scripts.pory"
	walk_fast_right
	step_end

# 213 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_11:
# 213 "data/maps/NorthCampus/scripts.pory"
	jump_2_right
	step_end

# 246 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_12:
# 246 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 246 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 246 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 246 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 246 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 246 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 246 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 246 "data/maps/NorthCampus/scripts.pory"
	walk_right
	step_end

# 264 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_13:
# 264 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 264 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 264 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 264 "data/maps/NorthCampus/scripts.pory"
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
# 58 "data/maps/NorthCampus/scripts.pory"
	.string "But, enough about that.\n"
	.string "C'mon, {PLAYER}.\p"
	.string "Let's head inside before I start\n"
	.string "getting all mushy.$"

NorthCampus_EnterWildArea_Text_0:
# 98 "data/maps/NorthCampus/scripts.pory"
	.string "I'm… not sure I've met this man.\n"
	.string "Is he a new professor here?\p"
	.string "I didn't hear anything about new staff.\p"
	.string "Something's off…$"

NorthCampus_EnterWildArea_Text_1:
# 107 "data/maps/NorthCampus/scripts.pory"
	.string "Greetings, students!\n"
	.string "My name is Cyrus.$"

NorthCampus_EnterWildArea_Text_2:
# 110 "data/maps/NorthCampus/scripts.pory"
	.string "But you may call me Professor Cyrus.$"

NorthCampus_EnterWildArea_Text_3:
# 113 "data/maps/NorthCampus/scripts.pory"
	.string "Nice to meet you, Professor Cyrus!$"

NorthCampus_EnterWildArea_Text_4:
# 116 "data/maps/NorthCampus/scripts.pory"
	.string "That's DOCTOR Professor Cyrus,\n"
	.string "actually.$"

NorthCampus_EnterWildArea_Text_5:
# 119 "data/maps/NorthCampus/scripts.pory"
	.string "Oh! Uhh… I'm sorry, Doctor Professor\n"
	.string "Cyru-$"

NorthCampus_EnterWildArea_Text_6:
# 122 "data/maps/NorthCampus/scripts.pory"
	.string "MISTER DOCTOR PROFESSOR CYRUS!$"

NorthCampus_EnterWildArea_Text_7:
# 128 "data/maps/NorthCampus/scripts.pory"
	.string "Eek!$"

NorthCampus_EnterWildArea_Text_8:
# 131 "data/maps/NorthCampus/scripts.pory"
	.string "Splendid!\n"
	.string "Pleasure to meet you all!\p"
	.string "I'm here to teach you all about\n"
	.string "catching Pokémon.\p"
	.string "First, to catch a Pokémon, you use\n"
	.string "what's called a {COLOR GREEN}Poké Ball{COLOR DARK_GRAY}.\p"
	.string "Once you find a wild Pokémon, you throw\n"
	.string "the Poké Ball at it to capture it!\p"
	.string "It's really quite simple!$"

NorthCampus_EnterWildArea_Text_9:
# 134 "data/maps/NorthCampus/scripts.pory"
	.string "But um… Mister Doctor Professor Cyrus…$"

NorthCampus_EnterWildArea_Text_10:
# 137 "data/maps/NorthCampus/scripts.pory"
	.string "No need to be so formal,\n"
	.string "call me Cyrus!$"

NorthCampus_EnterWildArea_Text_11:
# 140 "data/maps/NorthCampus/scripts.pory"
	.string "… … …\p"
	.string "Right… Cyrus.\p"
	.string "You have to weaken a Pokémon first\n"
	.string "before you can catch it.\p"
	.string "You can't just throw a {COLOR GREEN}Poké Ball{COLOR DARK_GRAY} at a\n"
	.string "wild Pokémon out of nowhere!\p"
	.string "That's… not how it works.$"

NorthCampus_EnterWildArea_Text_12:
# 143 "data/maps/NorthCampus/scripts.pory"
	.string "That's a great point!\n"
	.string "I like your style.\p"
	.string "What's your name?$"

NorthCampus_EnterWildArea_Text_13:
# 146 "data/maps/NorthCampus/scripts.pory"
	.string "Oh, umm… Thank you?\n"
	.string "I'm Tracie.$"

NorthCampus_EnterWildArea_Text_14:
# 149 "data/maps/NorthCampus/scripts.pory"
	.string "A pleasure to meet you, Trucie.\n"
	.string "Here's ¥5!$"

NorthCampus_EnterWildArea_Text_15:
# 154 "data/maps/NorthCampus/scripts.pory"
	.string "Trucie received ¥5 from Cyrus!$"

NorthCampus_EnterWildArea_Text_16:
# 159 "data/maps/NorthCampus/scripts.pory"
	.string "I'm so… confused.$"

NorthCampus_EnterWildArea_Text_17:
# 163 "data/maps/NorthCampus/scripts.pory"
	.string "Now, I believe it's time for\n"
	.string "a demonstration!\p"
	.string "Watch carefuly, Trucie!$"

NorthCampus_EnterWildArea_Text_18:
# 174 "data/maps/NorthCampus/scripts.pory"
	.string "Woah!$"

NorthCampus_EnterWildArea_Text_19:
# 179 "data/maps/NorthCampus/scripts.pory"
	.string "Not another one…\p"
	.string "These poor miscolored Pokémon…\n"
	.string "They're so sick.$"

NorthCampus_EnterWildArea_Text_20:
# 185 "data/maps/NorthCampus/scripts.pory"
	.string "It rests upon my shoulders\n"
	.string "to save them all!$"

NorthCampus_EnterWildArea_Text_21:
# 189 "data/maps/NorthCampus/scripts.pory"
	.string "Umm…\n"
	.string "Cyrus?\p"
	.string "That Pokémon isn't sick, it's…$"

NorthCampus_EnterWildArea_Text_22:
# 194 "data/maps/NorthCampus/scripts.pory"
	.string "Sorry I'm late!$"

NorthCampus_EnterWildArea_Text_23:
# 208 "data/maps/NorthCampus/scripts.pory"
	.string "Hey!\n"
	.string "Who the hell are you!?$"

NorthCampus_EnterWildArea_Text_24:
# 221 "data/maps/NorthCampus/scripts.pory"
	.string "Sigh… guess I'm calling security.$"

NorthCampus_EnterWildArea_Text_25:
# 226 "data/maps/NorthCampus/scripts.pory"
	.string "Professor Aspen!\p"
	.string "Were you supposed to be giving this\n"
	.string "lesson?$"

NorthCampus_EnterWildArea_Text_26:
# 229 "data/maps/NorthCampus/scripts.pory"
	.string "Hey there, Tracie.\n"
	.string "Yes, I was.\p"
	.string "Apologies for my tardiness.\p"
	.string "Though, it looks like whoever you had\n"
	.string "already covered the basics?$"

NorthCampus_EnterWildArea_Text_27:
# 232 "data/maps/NorthCampus/scripts.pory"
	.string "Uhh… yeah.\n"
	.string "I think I got the gist of it.\p"
	.string "Cyrus was… interesting.$"

NorthCampus_EnterWildArea_Text_28:
# 235 "data/maps/NorthCampus/scripts.pory"
	.string "Cyrus was his name?\p"
	.string "I think I've heard that name before.\p"
	.string "Well, in any case, I'm glad you\n"
	.string "were able to learn something today.\p"
	.string "I've brought some Poké Balls for the\n"
	.string "two of you to use.\p"
	.string "The PokéMart is also now fully stocked,\n"
	.string "so feel free to buy more if you'd like.$"

NorthCampus_EnterWildArea_Text_29:
# 241 "data/maps/NorthCampus/scripts.pory"
	.string "Thank you, Professor Aspen!\p"
	.string "I'll be sure to put these to good use!$"

NorthCampus_EnterWildArea_Text_30:
# 244 "data/maps/NorthCampus/scripts.pory"
	.string "You're welcome, Tracie.\p"
	.string "Now, if you'll excuse me, I have to go\n"
	.string "file a police report.$"

NorthCampus_EnterWildArea_Text_31:
# 252 "data/maps/NorthCampus/scripts.pory"
	.string "Well, that was… something.$"

NorthCampus_EnterWildArea_Text_32:
# 258 "data/maps/NorthCampus/scripts.pory"
	.string "Attention seniors.\p"
	.string "Please report to {COLOR GREEN}Mahindra Library{COLOR DARK_GRAY} for\n"
	.string "your next assignment.$"

NorthCampus_EnterWildArea_Text_33:
# 262 "data/maps/NorthCampus/scripts.pory"
	.string "There's our cue!\p"
	.string "I'll meet up with your later, {PLAYER}.\p"
	.string "I've got Pokémon to catch!$"

NorthCampus_TractorStatue_Text_0:
# 284 "data/maps/NorthCampus/scripts.pory"
	.string "Tractor University\n'Your Tractor in Your Field'$"

NorthCampus_Cave_Guard_Text_0:
# 290 "data/maps/NorthCampus/scripts.pory"
	.string "{COLOR GREEN}Fieldstone Cavern{COLOR DARK_GRAY} is currently off\n"
	.string "limits during orientation.\p"
	.string "Please come back later.$"

NorthCampus_NPC1_Text_0:
# 298 "data/maps/NorthCampus/scripts.pory"
	.string "I love Dunsparce!\n"
	.string "Though, I wish it had an evolution…$"

NorthCampus_NPC2_Text_0:
# 307 "data/maps/NorthCampus/scripts.pory"
	.string "My dad carved the tractor statue.\p"
	.string "What an incredible display of both\n"
	.string "architecture and agriculture!$"

NorthCampus_NPC3_Text_0:
# 316 "data/maps/NorthCampus/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "Rotcart came through not that long\l"
	.string "ago.\p"
	.string "Is it me, or is he even more of an\n"
	.string "intolerable asshole this year?$"

NorthCampus_NPC4_Text_0:
# 325 "data/maps/NorthCampus/scripts.pory"
	.string "Your Eevee is soooo cute!\p"
	.string "Have you decided which evolution\n"
	.string "you'll choose?\p"
	.string "My favorite Eeveelution is Espeon!$"

NorthCampus_NPC5_Text_0:
# 334 "data/maps/NorthCampus/scripts.pory"
	.string "I read that {COLOR GREEN}Main Hall{COLOR DARK_GRAY} was built almost a\n"
	.string "century ago!\p"
	.string "It's amazing that it's still standing\n"
	.string "strong.\p"
	.string "I hope it lasts for another hundred\n"
	.string "years!$"

NorthCampus_NPC6_Text_0:
# 343 "data/maps/NorthCampus/scripts.pory"
	.string "Watch out for the Wattrel that hangs\n"
	.string "out by the statue.\p"
	.string "They've gotten bold.\n"
	.string "Like, 'steal your lunch' bold.$"

NorthCampus_MahindraLibrarySign_Text_0:
# 350 "data/maps/NorthCampus/scripts.pory"
	.string "Mahindra Library$"

NorthCampus_PokemonResearchLabSign_Text_0:
# 355 "data/maps/NorthCampus/scripts.pory"
	.string "John Deere Pokémon Research Lab$"

NorthCampus_FossilResearchLabSign_Text_0:
# 360 "data/maps/NorthCampus/scripts.pory"
	.string "Ford Fossil Research Lab$"

NorthCampus_PokeballResearchLab_Text_0:
# 365 "data/maps/NorthCampus/scripts.pory"
	.string "Kubota Poké Ball Research Lab$"
