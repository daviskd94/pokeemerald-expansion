SouthCampus_MapScripts::
	.byte 0


SouthCampus_MoveToBattle1::
# 5 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 6 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle1_Movement_0
# 7 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle1_Movement_1
# 8 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 9 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle2::
# 13 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 14 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle2_Movement_0
# 15 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle2_Movement_1
# 16 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 17 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle3::
# 21 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 22 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle3_Movement_0
# 23 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle3_Movement_1
# 24 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 25 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle4::
# 29 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 30 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle4_Movement_0
# 31 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle4_Movement_1
# 32 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 33 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle5::
# 37 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 38 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle5_Movement_0
# 39 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_1
# 40 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 41 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_2
# 42 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle5_Movement_3
# 43 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 44 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle6::
# 48 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 49 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 50 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 51 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 52 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_2
# 53 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_3
# 54 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 55 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle7::
# 59 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 60 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 61 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 62 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 63 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_2
# 64 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle7_Movement_0
# 65 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 66 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle8::
# 70 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 71 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 72 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 73 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 74 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle8_Movement_0
# 75 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle8_Movement_1
# 76 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 77 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_HearBattle::
# 81 "data/maps/SouthCampus/scripts.pory"
	lock
# 82 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_MoveToBattle6_Movement_0
# 83 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 84 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_0
# 85 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 86 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 87 "data/maps/SouthCampus/scripts.pory"
	delay 10
# 88 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 89 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_0
# 90 "data/maps/SouthCampus/scripts.pory"
	playse SE_PIN
# 91 "data/maps/SouthCampus/scripts.pory"
	waitse
# 92 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle_Movement_1
# 93 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 94 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 95 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 96 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 97 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 98 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 99 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 100 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 101 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_1
# 102 "data/maps/SouthCampus/scripts.pory"
	closemessage
	return


SouthCampus_HearBattle2::
# 107 "data/maps/SouthCampus/scripts.pory"
	lock
# 108 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_MoveToBattle6_Movement_0
# 109 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 110 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_0
# 111 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 112 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 113 "data/maps/SouthCampus/scripts.pory"
	delay 10
# 114 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 115 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_0
# 116 "data/maps/SouthCampus/scripts.pory"
	playse SE_PIN
# 117 "data/maps/SouthCampus/scripts.pory"
	waitse
# 118 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle2_Movement_1
# 119 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 120 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 121 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 122 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 123 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 124 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 125 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 126 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 127 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_1
# 128 "data/maps/SouthCampus/scripts.pory"
	closemessage
	return


SouthCampus_ApproachBattle::
# 135 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 136 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_0
# 137 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 138 "data/maps/SouthCampus/scripts.pory"
	special SpawnCameraObject
# 139 "data/maps/SouthCampus/scripts.pory"
	setobjectxy LOCALID_CAMERA, 23, 29
# 140 "data/maps/SouthCampus/scripts.pory"
	playbgm CUS_VS_TRAINER, FALSE
# 141 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_0
# 142 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 143 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_YOUNGSTER
# 144 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_1
# 145 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 146 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_LASS
# 147 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_2
# 148 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 149 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_1
# 150 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 151 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 152 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_3
# 153 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 154 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle2_Movement_1
# 155 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_1
# 156 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_HearBattle_Movement_1
# 157 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 158 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_MAN
# 159 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_4
# 160 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 161 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 162 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_5
# 163 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 164 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_0
# 165 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 166 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_MoveToBattle6_Movement_0
# 167 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_0
# 168 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 169 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_MeowthBattle
	return


SouthCampus_MeowthBattle::
# 173 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_YOUNGSTER
# 174 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_0
# 175 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 176 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 177 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 178 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_0
# 179 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 180 "data/maps/SouthCampus/scripts.pory"
	playse SE_M_SCRATCH
# 181 "data/maps/SouthCampus/scripts.pory"
	waitse
# 182 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_1
# 183 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 184 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_LASS
# 185 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_1
# 186 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 187 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH_ALOLA, 0
# 188 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 189 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_2
# 190 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 191 "data/maps/SouthCampus/scripts.pory"
	playse SE_M_PAY_DAY
# 192 "data/maps/SouthCampus/scripts.pory"
	waitse
# 193 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_3
# 194 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 195 "data/maps/SouthCampus/scripts.pory"
	delay 40
# 196 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_FAINT
# 197 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 198 "data/maps/SouthCampus/scripts.pory"
	playse SE_FAINT
# 199 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_4
# 200 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 201 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_MEOWTH, MAP_SOUTH_CAMPUS
# 202 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_MEOWTH
# 203 "data/maps/SouthCampus/scripts.pory"
	delay 40
# 204 "data/maps/SouthCampus/scripts.pory"
	fadedefaultbgm
# 205 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_4
# 206 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 207 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_MEOWTH_ALOLA, MAP_SOUTH_CAMPUS
# 208 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_MEOWTH_ALOLA
# 209 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_HIDE_MEOWTHS
# 210 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_YOUNGSTER
# 211 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_2
# 212 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 213 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_LASS
# 214 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_3
# 215 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 216 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_LASS, SouthCampus_MeowthBattle_Movement_5
# 217 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_YOUNGSTER, SouthCampus_MeowthBattle_Movement_6
# 218 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_1
# 219 "data/maps/SouthCampus/scripts.pory"
	delay 20
# 220 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 221 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_4
# 222 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 223 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle_Movement_1
# 224 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_1
# 225 "data/maps/SouthCampus/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 226 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 227 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_5
# 228 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 229 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MeowthBattle_Movement_7
# 230 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MeowthBattle_Movement_8
# 231 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_MeowthBattle_Movement_9
# 232 "data/maps/SouthCampus/scripts.pory"
	delay 90
# 233 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 234 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_6
# 235 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 236 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_HIDE_SOUTH_CAMPUS_TRAINERS
# 237 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_WHITEOUT_CONTINUE
# 238 "data/maps/SouthCampus/scripts.pory"
	trainerbattle_no_intro TRAINER_TRACIE_SOUTH_CAMPUS, SouthCampus_MeowthBattle_Text_7
# 239 "data/maps/SouthCampus/scripts.pory"
	clearflag FLAG_WHITEOUT_CONTINUE
# 240 "data/maps/SouthCampus/scripts.pory"
	special RemoveCameraObject
# 241 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_CAMERA
# 242 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_TraciePostBattle
	return


SouthCampus_TraciePostBattle::
# 247 "data/maps/SouthCampus/scripts.pory"
	special SpawnCameraObject
# 248 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_LASS, MAP_SOUTH_CAMPUS
# 249 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_LASS
# 250 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_YOUNGSTER, MAP_SOUTH_CAMPUS
# 251 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_YOUNGSTER
# 252 "data/maps/SouthCampus/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 23, 26
# 253 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_TraciePostBattle_Movement_0
# 254 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_TraciePostBattle_Movement_1
# 255 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 256 "data/maps/SouthCampus/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq SouthCampus_TraciePostBattle_2
# 263 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 264 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_1
# 265 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 266 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HealParty
SouthCampus_TraciePostBattle_1:
# 268 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 269 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_2
# 270 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 271 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_TraciePostBattle_Movement_2
# 272 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 273 "data/maps/SouthCampus/scripts.pory"
	special RemoveCameraObject
# 274 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_CAMERA
# 275 "data/maps/SouthCampus/scripts.pory"
	destroyfollowernpc
# 276 "data/maps/SouthCampus/scripts.pory"
	setvar VAR_SOUTH_CAMPUS_STATE, 1
# 277 "data/maps/SouthCampus/scripts.pory"
	setrespawn HEAL_LOCATION_SOUTH_CAMPUS
# 278 "data/maps/SouthCampus/scripts.pory"
	fadedefaultbgm
# 279 "data/maps/SouthCampus/scripts.pory"
	release
	end

SouthCampus_TraciePostBattle_2:
# 257 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 258 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_0
# 259 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 260 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HealParty
	goto SouthCampus_TraciePostBattle_1


SouthCampus_HealParty::
# 284 "data/maps/SouthCampus/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 285 "data/maps/SouthCampus/scripts.pory"
	playse SE_USE_ITEM
# 286 "data/maps/SouthCampus/scripts.pory"
	waitse
# 287 "data/maps/SouthCampus/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 288 "data/maps/SouthCampus/scripts.pory"
	special HealPlayerParty
	return


SouthCampus_NPC1::
# 292 "data/maps/SouthCampus/scripts.pory"
	lock
# 293 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 294 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC1_Text_0
# 295 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 296 "data/maps/SouthCampus/scripts.pory"
	release
	end


SouthCampus_NPC2::
# 301 "data/maps/SouthCampus/scripts.pory"
	lock
# 302 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 303 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC2_Text_0
# 304 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 305 "data/maps/SouthCampus/scripts.pory"
	release
	end


SouthCampus_NPC3::
# 310 "data/maps/SouthCampus/scripts.pory"
	lock
# 311 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 312 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC3_Text_0
# 313 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 314 "data/maps/SouthCampus/scripts.pory"
	release
	end


SouthCampus_NPC4::
# 319 "data/maps/SouthCampus/scripts.pory"
	lock
# 320 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 321 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC4_Text_0
# 322 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 323 "data/maps/SouthCampus/scripts.pory"
	release
	end


SouthCampus_NPC5::
# 328 "data/maps/SouthCampus/scripts.pory"
	lock
# 329 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 330 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC5_Text_0
# 331 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 332 "data/maps/SouthCampus/scripts.pory"
	release
	end


# 6 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle1_Movement_0:
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 6 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 7 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle1_Movement_1:
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 7 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 14 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle2_Movement_0:
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 14 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 15 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle2_Movement_1:
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 22 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle3_Movement_0:
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 22 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 23 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle3_Movement_1:
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 30 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle4_Movement_0:
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 30 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 31 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle4_Movement_1:
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 38 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_0:
# 38 "data/maps/SouthCampus/scripts.pory"
	face_down
	step_end

# 39 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_1:
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
	step_end

# 41 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_2:
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 41 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 42 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_3:
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 42 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 49 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_0:
# 49 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 50 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_1:
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
	step_end

# 52 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_2:
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 52 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 53 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_3:
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 53 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 64 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle7_Movement_0:
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 64 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 74 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle8_Movement_0:
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 74 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 75 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle8_Movement_1:
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 75 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 89 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_0:
# 89 "data/maps/SouthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 92 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_1:
# 92 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 94 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_2:
# 94 "data/maps/SouthCampus/scripts.pory"
	jump_in_place_left
	step_end

# 115 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle2_Movement_0:
# 115 "data/maps/SouthCampus/scripts.pory"
	face_left
# 115 "data/maps/SouthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 118 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle2_Movement_1:
# 118 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 141 "data/maps/SouthCampus/scripts.pory"
SouthCampus_ApproachBattle_Movement_0:
# 141 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 141 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 141 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
	step_end

# 149 "data/maps/SouthCampus/scripts.pory"
SouthCampus_ApproachBattle_Movement_1:
# 149 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 149 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 149 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
	step_end

# 178 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_0:
# 178 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 178 "data/maps/SouthCampus/scripts.pory"
	slide_right
	step_end

# 182 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_1:
# 182 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 182 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 182 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 189 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_2:
# 189 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 189 "data/maps/SouthCampus/scripts.pory"
	slide_left
	step_end

# 193 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_3:
# 193 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 193 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 193 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 199 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_4:
# 199 "data/maps/SouthCampus/scripts.pory"
	enter_pokeball
	step_end

# 216 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_5:
# 216 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 216 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 216 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 216 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 216 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 217 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_6:
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 217 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 229 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_7:
# 229 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 229 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 229 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 229 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 229 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 229 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 229 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 230 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_8:
# 230 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 230 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 230 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 230 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 230 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 230 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 230 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 231 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_9:
# 231 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 231 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 231 "data/maps/SouthCampus/scripts.pory"
	walk_up
	step_end

# 253 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_0:
# 253 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 253 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 253 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 254 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_1:
# 254 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 254 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 254 "data/maps/SouthCampus/scripts.pory"
	walk_left
	step_end

# 271 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_2:
# 271 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 271 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 271 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 271 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 271 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 271 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 271 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 271 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

SouthCampus_HearBattle_Text_0:
# 84 "data/maps/SouthCampus/scripts.pory"
	.string "Go, Meowth!$"

SouthCampus_HearBattle_Text_1:
# 101 "data/maps/SouthCampus/scripts.pory"
	.string "{PLAYER}, did you hear that?\p"
	.string "It sounds like a Pokémon battle\n"
	.string "just started!\p"
	.string "Let's check it out!$"

SouthCampus_ApproachBattle_Text_0:
# 136 "data/maps/SouthCampus/scripts.pory"
	.string "I knew it!\n"
	.string "They're having a battle!$"

SouthCampus_ApproachBattle_Text_1:
# 144 "data/maps/SouthCampus/scripts.pory"
	.string "My Meowth is way stronger!\n"
	.string "He's going to win for sure!$"

SouthCampus_ApproachBattle_Text_2:
# 147 "data/maps/SouthCampus/scripts.pory"
	.string "Don't get overconfident.\p"
	.string "I'll bet you've never seen a\n"
	.string "Meowth like mine before!$"

SouthCampus_ApproachBattle_Text_3:
# 152 "data/maps/SouthCampus/scripts.pory"
	.string "I've never seen a Meowth like her's\n"
	.string "before, either.\p"
	.string "I wonder why it looks so different…$"

SouthCampus_ApproachBattle_Text_4:
# 159 "data/maps/SouthCampus/scripts.pory"
	.string "Some Pokémon come in different\n"
	.string "varieties depending on their habitat.\p"
	.string "Her Meowth is a {COLOR RED}Dark-type {COLOR DARK_GRAY}and his is a\n"
	.string "{COLOR RED}Normal-type.\p"
	.string "{COLOR DARK_GRAY}Neither Meowth has a type advantage\n"
	.string "against the other, so it's been a good\l"
	.string "battle so far!$"

SouthCampus_ApproachBattle_Text_5:
# 162 "data/maps/SouthCampus/scripts.pory"
	.string "Oh, that makes sense!\p"
	.string "It's so neat that Pokémon of the same\n"
	.string "species can be different types!$"

SouthCampus_MeowthBattle_Text_0:
# 174 "data/maps/SouthCampus/scripts.pory"
	.string "Meowth, use Scratch!$"

SouthCampus_MeowthBattle_Text_1:
# 185 "data/maps/SouthCampus/scripts.pory"
	.string "Meowth, use Pay Day!$"

SouthCampus_MeowthBattle_Text_2:
# 211 "data/maps/SouthCampus/scripts.pory"
	.string "Aww, darn!\n"
	.string "Oh well.\p"
	.string "Can't win them all.\n"
	.string "Thanks for the battle!$"

SouthCampus_MeowthBattle_Text_3:
# 214 "data/maps/SouthCampus/scripts.pory"
	.string "Same to you!\n"
	.string "It was fun!$"

SouthCampus_MeowthBattle_Text_4:
# 221 "data/maps/SouthCampus/scripts.pory"
	.string "That was such a great battle!\n"
	.string "I'm all fired up!$"

SouthCampus_MeowthBattle_Text_5:
# 227 "data/maps/SouthCampus/scripts.pory"
	.string "Hey!\n"
	.string "Let's have a battle!\p"
	.string "It'll be the first battle of our final\n"
	.string "year of school, and I can't think of\l"
	.string "anyone better to have it with!$"

SouthCampus_MeowthBattle_Text_6:
# 234 "data/maps/SouthCampus/scripts.pory"
	.string "Alright, here we go.\n"
	.string "No holding back!$"

SouthCampus_MeowthBattle_Text_7:
# 238 "data/maps/SouthCampus/scripts.pory"
	.string "Looks like I still have some\n"
	.string "catching up to do!$"

SouthCampus_TraciePostBattle_Text_0:
# 258 "data/maps/SouthCampus/scripts.pory"
	.string "Thanks for the battle!\p"
	.string "But, I could tell you were\n"
	.string "holding back!\p"
	.string "You better not do that again!\p"
	.string "I can't wait to battle again once our\n"
	.string "journeys start!\p"
	.string "Let me heal your Pokémon quick!$"

SouthCampus_TraciePostBattle_Text_1:
# 264 "data/maps/SouthCampus/scripts.pory"
	.string "That was so much fun!\p"
	.string "I can't wait to battle again once our\n"
	.string "journeys start!\p"
	.string "Let me heal your Pokémon quick!$"

SouthCampus_TraciePostBattle_Text_2:
# 269 "data/maps/SouthCampus/scripts.pory"
	.string "I'm going to go on ahead to North\n"
	.string "Campus for orientation.\p"
	.string "Try not to take too long getting there.\n"
	.string "You don't want to be late!\p"
	.string "See you soon!$"

SouthCampus_NPC1_Text_0:
# 294 "data/maps/SouthCampus/scripts.pory"
	.string "Hi, {PLAYER}! Hard to believe it's\n"
	.string "senior year.\p"
	.string "Good luck on your journey ahead!$"

SouthCampus_NPC2_Text_0:
# 303 "data/maps/SouthCampus/scripts.pory"
	.string "Hey! Have you heard about 'trsfu'?\p"
	.string "It's the new thing!\n"
	.string "It means, 'I'm ready to go!'$"

SouthCampus_NPC3_Text_0:
# 312 "data/maps/SouthCampus/scripts.pory"
	.string "That was a great battle you had back\n"
	.string "there!\p"
	.string "I hope I can be as good as you one day.$"

SouthCampus_NPC4_Text_0:
# 321 "data/maps/SouthCampus/scripts.pory"
	.string "Not now, {PLAYER}!\n"
	.string "I'm busy studying for my exams!$"

SouthCampus_NPC5_Text_0:
# 330 "data/maps/SouthCampus/scripts.pory"
	.string "I used to hang out here all the time as\n"
	.string "a freshman.\p"
	.string "My friends and I would race alongside\n"
	.string "the shoreline.\p"
	.string "Feels weird knowing this is my last year\n"
	.string "here.$"
