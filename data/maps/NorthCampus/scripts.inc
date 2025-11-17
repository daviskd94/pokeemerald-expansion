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
	applymovement 26, NorthCampus_TalkToTracie_Movement_1
# 56 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 58 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_TalkToTracie_Text_1
# 59 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 60 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 61 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_3
# 62 "data/maps/NorthCampus/scripts.pory"
	opendoor 42, 16
# 63 "data/maps/NorthCampus/scripts.pory"
	waitdooranim
# 64 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 65 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_2
# 66 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 67 "data/maps/NorthCampus/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_NORTH_CAMPUS
# 68 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_2
# 69 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 70 "data/maps/NorthCampus/scripts.pory"
	hideobjectat 26, MAP_NORTH_CAMPUS
# 71 "data/maps/NorthCampus/scripts.pory"
	closedoor 42, 16
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
# 82 "data/maps/NorthCampus/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 1
# 83 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_TRACIE_1
# 85 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 86 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
# 87 "data/maps/NorthCampus/scripts.pory"
	waitstate
# 88 "data/maps/NorthCampus/scripts.pory"
	releaseall
	end


NorthCampus_TestWarp::
# 93 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
	return


NorthCampus_EnterWildArea::
# 97 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_EnterWildArea_Movement_0
# 98 "data/maps/NorthCampus/scripts.pory"
	fadeoutbgm 0
# 99 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 100 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 101 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 102 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_0
# 103 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 104 "data/maps/NorthCampus/scripts.pory"
	delay 40
# 105 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_1
# 106 "data/maps/NorthCampus/scripts.pory"
	delay 30
# 107 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 108 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 109 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_1
# 110 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 111 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_1
# 112 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_2
# 113 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 114 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 115 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_3
# 116 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 117 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_2
# 118 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_4
# 119 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 120 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 121 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_5
# 122 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 123 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_3
# 124 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_6
# 125 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 126 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_2
# 127 "data/maps/NorthCampus/scripts.pory"
	playse SE_PIN
# 128 "data/maps/NorthCampus/scripts.pory"
	waitse
# 129 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 130 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_7
# 131 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 132 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS_3
# 133 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_8
# 134 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 135 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 136 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_9
# 137 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 138 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 139 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_10
# 140 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 141 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 142 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_11
# 143 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 144 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 145 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_12
# 146 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 147 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 148 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_13
# 149 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 150 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 151 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_14
# 152 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 153 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_3
# 154 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 155 "data/maps/NorthCampus/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 156 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_15
# 157 "data/maps/NorthCampus/scripts.pory"
	waitfanfare
# 158 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 159 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 160 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_4
# 161 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_16
# 162 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 163 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 164 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 165 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_17
# 166 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 167 "data/maps/NorthCampus/scripts.pory"
	special SavePlayerParty
# 168 "data/maps/NorthCampus/scripts.pory"
	special LoadWallyZigzagoon
# 169 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_TalkToTracie_Movement_0
# 170 "data/maps/NorthCampus/scripts.pory"
	delay 50
# 171 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_TalkToTracie_Movement_0
# 172 "data/maps/NorthCampus/scripts.pory"
	delay 50
# 173 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_TalkToTracie_Movement_1
# 174 "data/maps/NorthCampus/scripts.pory"
	delay 50
# 175 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 176 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_18
# 177 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 178 "data/maps/NorthCampus/scripts.pory"
	special StartWallyTutorialBattle
# 179 "data/maps/NorthCampus/scripts.pory"
	waitstate
# 180 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 181 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_19
# 182 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 183 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_1
# 184 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 185 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 186 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_CYRUS
# 187 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_20
# 188 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 189 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 190 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 191 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_21
# 192 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 193 "data/maps/NorthCampus/scripts.pory"
	clearflag FLAG_NORTH_CAMPUS_CATCHING_PROFESSOR
# 194 "data/maps/NorthCampus/scripts.pory"
	addobject LOCALID_PROFESSOR_ASPEN
# 195 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 196 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_22
# 197 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 198 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_5
# 199 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_EnterWildArea_Movement_6
# 200 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_6
# 201 "data/maps/NorthCampus/scripts.pory"
	playse SE_PIN
# 202 "data/maps/NorthCampus/scripts.pory"
	waitse
# 203 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_EnterWildArea_Movement_7
# 204 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 205 "data/maps/NorthCampus/scripts.pory"
	delay 20
# 206 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_EnterWildArea_Movement_2
# 207 "data/maps/NorthCampus/scripts.pory"
	playse SE_PIN
# 208 "data/maps/NorthCampus/scripts.pory"
	waitse
# 209 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 210 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_23
# 211 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 212 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_HELP, TRUE
# 213 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_8
# 214 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 215 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_9
# 216 "data/maps/NorthCampus/scripts.pory"
	playse SE_LEDGE
# 217 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 218 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CYRUS_NORTH_CAMPUS, NorthCampus_EnterWildArea_Movement_8
# 219 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 220 "data/maps/NorthCampus/scripts.pory"
	delay 40
# 221 "data/maps/NorthCampus/scripts.pory"
	fadedefaultbgm
# 222 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 223 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_24
# 224 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 225 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_TalkToTracie_Movement_0
# 226 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 227 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 228 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_25
# 229 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 230 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_ASPEN
# 231 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_26
# 232 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 233 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 234 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_27
# 235 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 236 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_ASPEN
# 237 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_28
# 238 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 239 "data/maps/NorthCampus/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 240 "data/maps/NorthCampus/scripts.pory"
	waitfanfare
# 241 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 242 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 243 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_29
# 244 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 245 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_ASPEN
# 246 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_30
# 247 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 248 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_PROFESSOR_ASPEN, NorthCampus_EnterWildArea_Movement_10
# 249 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 250 "data/maps/NorthCampus/scripts.pory"
	removeobject LOCALID_PROFESSOR_ASPEN
# 251 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_0
# 252 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 253 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 254 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_31
# 255 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 256 "data/maps/NorthCampus/scripts.pory"
	playse SE_DING_DONG
# 257 "data/maps/NorthCampus/scripts.pory"
	waitse
# 258 "data/maps/NorthCampus/scripts.pory"
	delay 40
# 259 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 260 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_32
# 261 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 262 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 263 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 264 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_EnterWildArea_Text_33
# 265 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 266 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_TRACIE_CATCHING_TUTORIAL, NorthCampus_EnterWildArea_Movement_11
# 267 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 268 "data/maps/NorthCampus/scripts.pory"
	removeobject LOCALID_CYRUS_NORTH_CAMPUS
# 269 "data/maps/NorthCampus/scripts.pory"
	removeobject LOCALID_TRACIE_CATCHING_TUTORIAL
# 270 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_HIDE_TRACIE_CYRUS
# 271 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_CATCHING_PROFESSOR
# 272 "data/maps/NorthCampus/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 3
# 273 "data/maps/NorthCampus/scripts.pory"
	fadedefaultbgm
# 274 "data/maps/NorthCampus/scripts.pory"
	special LoadPlayerParty
	return


NorthCampus_NPC1::
# 278 "data/maps/NorthCampus/scripts.pory"
	lock
# 279 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 280 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC1_Text_0
# 281 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 282 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC2::
# 287 "data/maps/NorthCampus/scripts.pory"
	lock
# 288 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 289 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC2_Text_0
# 290 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 291 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC3::
# 296 "data/maps/NorthCampus/scripts.pory"
	lock
# 297 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 298 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC3_Text_0
# 299 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 300 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC4::
# 305 "data/maps/NorthCampus/scripts.pory"
	lock
# 306 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 307 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC4_Text_0
# 308 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 309 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC5::
# 314 "data/maps/NorthCampus/scripts.pory"
	lock
# 315 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 316 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC5_Text_0
# 317 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 318 "data/maps/NorthCampus/scripts.pory"
	release
	end


NorthCampus_NPC6::
# 323 "data/maps/NorthCampus/scripts.pory"
	lock
# 324 "data/maps/NorthCampus/scripts.pory"
	faceplayer
# 325 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_NPC6_Text_0
# 326 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 327 "data/maps/NorthCampus/scripts.pory"
	release
	end


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

# 97 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_0:
# 97 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 97 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 97 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 97 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 97 "data/maps/NorthCampus/scripts.pory"
	face_up
	step_end

# 105 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_1:
# 105 "data/maps/NorthCampus/scripts.pory"
	face_down
	step_end

# 126 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_2:
# 126 "data/maps/NorthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 153 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_3:
# 153 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 153 "data/maps/NorthCampus/scripts.pory"
	walk_down
# 153 "data/maps/NorthCampus/scripts.pory"
	walk_down
	step_end

# 160 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_4:
# 160 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 160 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 160 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 160 "data/maps/NorthCampus/scripts.pory"
	face_down
	step_end

# 198 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_5:
# 198 "data/maps/NorthCampus/scripts.pory"
	face_down
# 198 "data/maps/NorthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 199 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_6:
# 199 "data/maps/NorthCampus/scripts.pory"
	face_right
# 199 "data/maps/NorthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 203 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_7:
# 203 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 203 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 203 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 203 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 203 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 203 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 203 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 203 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 203 "data/maps/NorthCampus/scripts.pory"
	face_up
	step_end

# 213 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_8:
# 213 "data/maps/NorthCampus/scripts.pory"
	walk_fast_right
# 213 "data/maps/NorthCampus/scripts.pory"
	walk_fast_right
# 213 "data/maps/NorthCampus/scripts.pory"
	walk_fast_right
	step_end

# 215 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_9:
# 215 "data/maps/NorthCampus/scripts.pory"
	jump_2_right
	step_end

# 248 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_10:
# 248 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 248 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 248 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 248 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 248 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 248 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 248 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 248 "data/maps/NorthCampus/scripts.pory"
	walk_right
	step_end

# 266 "data/maps/NorthCampus/scripts.pory"
NorthCampus_EnterWildArea_Movement_11:
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_down
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 266 "data/maps/NorthCampus/scripts.pory"
	walk_right
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
# 102 "data/maps/NorthCampus/scripts.pory"
	.string "I'm… not sure I've met this man.\n"
	.string "Is he a new professor here?\p"
	.string "I didn't hear anything about new staff.\p"
	.string "Something's off…$"

NorthCampus_EnterWildArea_Text_1:
# 109 "data/maps/NorthCampus/scripts.pory"
	.string "Greetings, students!\n"
	.string "My name is Cyrus.$"

NorthCampus_EnterWildArea_Text_2:
# 112 "data/maps/NorthCampus/scripts.pory"
	.string "But you may call me Professor Cyrus.$"

NorthCampus_EnterWildArea_Text_3:
# 115 "data/maps/NorthCampus/scripts.pory"
	.string "Nice to meet you, Professor Cyrus!$"

NorthCampus_EnterWildArea_Text_4:
# 118 "data/maps/NorthCampus/scripts.pory"
	.string "That's DOCTOR Professor Cyrus,\n"
	.string "actually.$"

NorthCampus_EnterWildArea_Text_5:
# 121 "data/maps/NorthCampus/scripts.pory"
	.string "Oh! Uhh… I'm sorry, Doctor Professor\n"
	.string "Cyru-$"

NorthCampus_EnterWildArea_Text_6:
# 124 "data/maps/NorthCampus/scripts.pory"
	.string "MISTER DOCTOR PROFESSOR CYRUS!$"

NorthCampus_EnterWildArea_Text_7:
# 130 "data/maps/NorthCampus/scripts.pory"
	.string "Eek!$"

NorthCampus_EnterWildArea_Text_8:
# 133 "data/maps/NorthCampus/scripts.pory"
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
# 136 "data/maps/NorthCampus/scripts.pory"
	.string "But um… Mister Doctor Professor Cyrus…$"

NorthCampus_EnterWildArea_Text_10:
# 139 "data/maps/NorthCampus/scripts.pory"
	.string "No need to be so formal,\n"
	.string "call me Cyrus!$"

NorthCampus_EnterWildArea_Text_11:
# 142 "data/maps/NorthCampus/scripts.pory"
	.string "…\p"
	.string "Right… Cyrus.\p"
	.string "You have to weaken a Pokémon first\n"
	.string "before you can catch it.\p"
	.string "You can't just throw a Poké Ball at a\n"
	.string "wild Pokémon out of nowhere!\p"
	.string "That's… not how it works.$"

NorthCampus_EnterWildArea_Text_12:
# 145 "data/maps/NorthCampus/scripts.pory"
	.string "That's a great point!\n"
	.string "I like your style.\p"
	.string "What's your name?$"

NorthCampus_EnterWildArea_Text_13:
# 148 "data/maps/NorthCampus/scripts.pory"
	.string "Oh, umm… Thank you?\n"
	.string "I'm Tracie.$"

NorthCampus_EnterWildArea_Text_14:
# 151 "data/maps/NorthCampus/scripts.pory"
	.string "A pleasure to meet you, Trucie.\n"
	.string "Here's ¥5!$"

NorthCampus_EnterWildArea_Text_15:
# 156 "data/maps/NorthCampus/scripts.pory"
	.string "Trucie received ¥5 from Cyrus!$"

NorthCampus_EnterWildArea_Text_16:
# 161 "data/maps/NorthCampus/scripts.pory"
	.string "Thank… you?$"

NorthCampus_EnterWildArea_Text_17:
# 165 "data/maps/NorthCampus/scripts.pory"
	.string "Now, I believe it's time for\n"
	.string "a demonstration!\p"
	.string "Watch carefuly, Trucie!$"

NorthCampus_EnterWildArea_Text_18:
# 176 "data/maps/NorthCampus/scripts.pory"
	.string "Woah!$"

NorthCampus_EnterWildArea_Text_19:
# 181 "data/maps/NorthCampus/scripts.pory"
	.string "Not another one…\p"
	.string "These poor miscolored Pokémon…\n"
	.string "They're so sick.$"

NorthCampus_EnterWildArea_Text_20:
# 187 "data/maps/NorthCampus/scripts.pory"
	.string "It rests upon my shoulders\n"
	.string "to save them all!$"

NorthCampus_EnterWildArea_Text_21:
# 191 "data/maps/NorthCampus/scripts.pory"
	.string "Umm…\n"
	.string "Cyrus?\p"
	.string "That Pokémon isn't sick, it's…$"

NorthCampus_EnterWildArea_Text_22:
# 196 "data/maps/NorthCampus/scripts.pory"
	.string "Sorry I'm late!$"

NorthCampus_EnterWildArea_Text_23:
# 210 "data/maps/NorthCampus/scripts.pory"
	.string "Hey!\n"
	.string "Who the hell are you!?$"

NorthCampus_EnterWildArea_Text_24:
# 223 "data/maps/NorthCampus/scripts.pory"
	.string "Sigh… guess I'm calling security.$"

NorthCampus_EnterWildArea_Text_25:
# 228 "data/maps/NorthCampus/scripts.pory"
	.string "Professor Aspen!\p"
	.string "Were you supposed to be giving this\n"
	.string "lesson?$"

NorthCampus_EnterWildArea_Text_26:
# 231 "data/maps/NorthCampus/scripts.pory"
	.string "Hey there, Tracie.\n"
	.string "Yes, I was.\p"
	.string "Apologies for my tardiness.\p"
	.string "Though, it looks like whoever you had\n"
	.string "already covered the basics?$"

NorthCampus_EnterWildArea_Text_27:
# 234 "data/maps/NorthCampus/scripts.pory"
	.string "Uhh… yeah.\n"
	.string "I think I got the gist of it.\p"
	.string "Cyrus was… interesting.$"

NorthCampus_EnterWildArea_Text_28:
# 237 "data/maps/NorthCampus/scripts.pory"
	.string "Cyrus was his name?\p"
	.string "I think I've heard that name before.\p"
	.string "Well, in any case, I'm glad you\n"
	.string "were able to learn something today.\p"
	.string "I've brought some Poké Balls for the\n"
	.string "two of you to use.\p"
	.string "The PokéMart is also now fully stocked,\n"
	.string "so feel free to buy more if you'd like.$"

NorthCampus_EnterWildArea_Text_29:
# 243 "data/maps/NorthCampus/scripts.pory"
	.string "Thank you, Professor Aspen!\p"
	.string "I'll be sure to put these to good use!$"

NorthCampus_EnterWildArea_Text_30:
# 246 "data/maps/NorthCampus/scripts.pory"
	.string "You're welcome, Tracie.\p"
	.string "Now, if you'll excuse me, I have to go\n"
	.string "file a police report.$"

NorthCampus_EnterWildArea_Text_31:
# 254 "data/maps/NorthCampus/scripts.pory"
	.string "Well, that was… something.$"

NorthCampus_EnterWildArea_Text_32:
# 260 "data/maps/NorthCampus/scripts.pory"
	.string "Attention all seniors.\p"
	.string "Please report to Mahindra Library for\n"
	.string "your next assignment.$"

NorthCampus_EnterWildArea_Text_33:
# 264 "data/maps/NorthCampus/scripts.pory"
	.string "There's our cue!\p"
	.string "I'll meet up with your later, {PLAYER}.\p"
	.string "I've got Pokémon to catch!$"

NorthCampus_NPC1_Text_0:
# 280 "data/maps/NorthCampus/scripts.pory"
	.string "I love Dunsparce!\n"
	.string "Though, I wish it had an evolution…$"

NorthCampus_NPC2_Text_0:
# 289 "data/maps/NorthCampus/scripts.pory"
	.string "My dad carved the tractor statue here.\p"
	.string "What an incredible display of both\n"
	.string "architecture and agriculture!$"

NorthCampus_NPC3_Text_0:
# 298 "data/maps/NorthCampus/scripts.pory"
	.string "Hey, {PLAYER}.\n"
	.string "Rotcart came through not that long\l"
	.string "ago.\p"
	.string "Is it me, or is he even more of an\n"
	.string "intolerable asshole this year?$"

NorthCampus_NPC4_Text_0:
# 307 "data/maps/NorthCampus/scripts.pory"
	.string "Your Eevee is soooo cute!\p"
	.string "Have you decided which evolution you'll\n"
	.string "choose?\p"
	.string "My favorite Eeveelution is Espeon!$"

NorthCampus_NPC5_Text_0:
# 316 "data/maps/NorthCampus/scripts.pory"
	.string "I read that Main Hall was built almost a\n"
	.string "century ago!\p"
	.string "It's amazing that it's still standing\n"
	.string "strong.\p"
	.string "I hope it lasts for another hundred\n"
	.string "years!$"

NorthCampus_NPC6_Text_0:
# 325 "data/maps/NorthCampus/scripts.pory"
	.string "Watch out for the Pidgey that hangs\n"
	.string "out by the statue.\p"
	.string "They've gotten bold.\n"
	.string "Like, 'steal your lunch' bold.$"
