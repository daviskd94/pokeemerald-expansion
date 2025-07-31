SouthCampus_MapScripts::
# 2 "data/maps/SouthCampus/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SouthCampus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SouthCampus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


SouthCampus_MoveToBattle1::
# 7 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 8 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle1_Movement_0
# 9 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle1_Movement_1
# 10 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 11 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle2::
# 15 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 16 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle2_Movement_0
# 17 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle2_Movement_1
# 18 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 19 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle3::
# 23 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 24 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle3_Movement_0
# 25 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle3_Movement_1
# 26 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 27 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle4::
# 31 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 32 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle4_Movement_0
# 33 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle4_Movement_1
# 34 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 35 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle5::
# 39 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 40 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle5_Movement_0
# 41 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_1
# 42 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 43 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_2
# 44 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle5_Movement_3
# 45 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 46 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle6::
# 50 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 51 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 52 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 53 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 54 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_2
# 55 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_3
# 56 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 57 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle7::
# 61 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 62 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 63 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 64 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 65 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_2
# 66 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle7_Movement_0
# 67 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 68 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle8::
# 72 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 73 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 74 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 75 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 76 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle8_Movement_0
# 77 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle8_Movement_1
# 78 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 79 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_HearBattle::
# 83 "data/maps/SouthCampus/scripts.pory"
	lock
# 84 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_MoveToBattle6_Movement_0
# 85 "data/maps/SouthCampus/scripts.pory"
	speakername Unknown
# 86 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_0
# 87 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 88 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 89 "data/maps/SouthCampus/scripts.pory"
	delay 10
# 90 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 91 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_0
# 92 "data/maps/SouthCampus/scripts.pory"
	playse SE_PIN
# 93 "data/maps/SouthCampus/scripts.pory"
	waitse
# 94 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle_Movement_1
# 95 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 96 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 97 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 98 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 99 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 100 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 101 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 102 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 103 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_1
# 104 "data/maps/SouthCampus/scripts.pory"
	closemessage
	return


SouthCampus_HearBattle2::
# 109 "data/maps/SouthCampus/scripts.pory"
	lock
# 110 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_MoveToBattle6_Movement_0
# 111 "data/maps/SouthCampus/scripts.pory"
	speakername Unknown
# 112 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_0
# 113 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 114 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 115 "data/maps/SouthCampus/scripts.pory"
	delay 10
# 116 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 117 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_0
# 118 "data/maps/SouthCampus/scripts.pory"
	playse SE_PIN
# 119 "data/maps/SouthCampus/scripts.pory"
	waitse
# 120 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle2_Movement_1
# 121 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 122 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 123 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 124 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 125 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 126 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 127 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 128 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 129 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_1
# 130 "data/maps/SouthCampus/scripts.pory"
	closemessage
	return


SouthCampus_ApproachBattle::
# 137 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 138 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_0
# 139 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 140 "data/maps/SouthCampus/scripts.pory"
	special SpawnCameraObject
# 141 "data/maps/SouthCampus/scripts.pory"
	setobjectxy LOCALID_CAMERA, 23, 29
# 142 "data/maps/SouthCampus/scripts.pory"
	playbgm CUS_VS_TRAINER, TRUE
# 143 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_0
# 144 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 145 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_1
# 146 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_2
# 147 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 148 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_3
# 149 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_4
# 150 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 151 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_1
# 152 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 153 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 154 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_5
# 155 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 156 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle2_Movement_1
# 157 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_1
# 158 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_HearBattle_Movement_1
# 159 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 160 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_6
# 161 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_7
# 162 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 163 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 164 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_8
# 165 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 166 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_0
# 167 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 168 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_MoveToBattle6_Movement_0
# 169 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_0
# 170 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 171 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_MeowthBattle
	return


SouthCampus_MeowthBattle::
# 175 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_1
# 176 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_0
# 177 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 178 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 179 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 180 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_0
# 181 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 182 "data/maps/SouthCampus/scripts.pory"
	playse SE_M_SCRATCH
# 183 "data/maps/SouthCampus/scripts.pory"
	waitse
# 184 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_1
# 185 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 186 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_3
# 187 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_1
# 188 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 189 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH_ALOLA, 0
# 190 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 191 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_2
# 192 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 193 "data/maps/SouthCampus/scripts.pory"
	playse SE_M_PAY_DAY
# 194 "data/maps/SouthCampus/scripts.pory"
	waitse
# 195 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_3
# 196 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 197 "data/maps/SouthCampus/scripts.pory"
	delay 40
# 198 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_FAINT
# 199 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 200 "data/maps/SouthCampus/scripts.pory"
	playse SE_FAINT
# 201 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_4
# 202 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 203 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_MEOWTH, MAP_SOUTH_CAMPUS
# 204 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_MEOWTH
# 205 "data/maps/SouthCampus/scripts.pory"
	delay 40
# 206 "data/maps/SouthCampus/scripts.pory"
	fadedefaultbgm
# 207 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_4
# 208 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 209 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_MEOWTH_ALOLA, MAP_SOUTH_CAMPUS
# 210 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_MEOWTH_ALOLA
# 211 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_HIDE_MEOWTHS
# 212 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_1
# 213 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_2
# 214 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 215 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_3
# 216 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_3
# 217 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 218 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_LASS, SouthCampus_MeowthBattle_Movement_5
# 219 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_YOUNGSTER, SouthCampus_MeowthBattle_Movement_6
# 220 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_1
# 221 "data/maps/SouthCampus/scripts.pory"
	delay 20
# 222 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 223 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_4
# 224 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 225 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle_Movement_1
# 226 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_1
# 227 "data/maps/SouthCampus/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 228 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 229 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_5
# 230 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 231 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MeowthBattle_Movement_7
# 232 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MeowthBattle_Movement_8
# 233 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_MeowthBattle_Movement_9
# 234 "data/maps/SouthCampus/scripts.pory"
	delay 90
# 235 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 236 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_6
# 237 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 238 "data/maps/SouthCampus/scripts.pory"
	special RemoveCameraObject
# 239 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_CAMERA
# 240 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_HIDE_SOUTH_CAMPUS_TRAINERS
# 241 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_WHITEOUT_CONTINUE
# 242 "data/maps/SouthCampus/scripts.pory"
	trainerbattle_no_intro TRAINER_TRACIE_SOUTH_CAMPUS, SouthCampus_MeowthBattle_Text_7
# 243 "data/maps/SouthCampus/scripts.pory"
	clearflag FLAG_WHITEOUT_CONTINUE
# 244 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_TraciePostBattle
	return


SouthCampus_TraciePostBattle::
# 249 "data/maps/SouthCampus/scripts.pory"
	special SpawnCameraObject
# 250 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_LASS, MAP_SOUTH_CAMPUS
# 251 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_LASS
# 252 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_YOUNGSTER, MAP_SOUTH_CAMPUS
# 253 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_YOUNGSTER
# 254 "data/maps/SouthCampus/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 23, 26
# 255 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_TraciePostBattle_Movement_0
# 256 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_TraciePostBattle_Movement_1
# 257 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 258 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 259 "data/maps/SouthCampus/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq SouthCampus_TraciePostBattle_2
# 266 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_1
# 267 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 268 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HealParty
SouthCampus_TraciePostBattle_1:
# 270 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 271 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_2
# 272 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 273 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_TraciePostBattle_Movement_2
# 274 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 275 "data/maps/SouthCampus/scripts.pory"
	special RemoveCameraObject
# 276 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_CAMERA
# 277 "data/maps/SouthCampus/scripts.pory"
	destroyfollowernpc
# 278 "data/maps/SouthCampus/scripts.pory"
	setvar VAR_SOUTH_CAMPUS_STATE, 1
# 279 "data/maps/SouthCampus/scripts.pory"
	fadedefaultbgm
# 280 "data/maps/SouthCampus/scripts.pory"
	release
	end

SouthCampus_TraciePostBattle_2:
# 260 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_0
# 261 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 262 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HealParty
	goto SouthCampus_TraciePostBattle_1


SouthCampus_HealParty::
# 285 "data/maps/SouthCampus/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 286 "data/maps/SouthCampus/scripts.pory"
	playse SE_USE_ITEM
# 287 "data/maps/SouthCampus/scripts.pory"
	waitse
# 288 "data/maps/SouthCampus/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 289 "data/maps/SouthCampus/scripts.pory"
	special HealPlayerParty
	return


# 8 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle1_Movement_0:
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 8 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 9 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle1_Movement_1:
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 9 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 16 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle2_Movement_0:
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 16 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 17 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle2_Movement_1:
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 17 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 24 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle3_Movement_0:
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 24 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 25 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle3_Movement_1:
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 25 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 32 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle4_Movement_0:
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 32 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 33 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle4_Movement_1:
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 33 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 40 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_0:
# 40 "data/maps/SouthCampus/scripts.pory"
	face_down
	step_end

# 41 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_1:
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 41 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
	step_end

# 43 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_2:
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 43 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 44 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_3:
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 44 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 51 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_0:
# 51 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 52 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_1:
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 52 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
	step_end

# 54 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_2:
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 54 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 55 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_3:
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 55 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 66 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle7_Movement_0:
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 66 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 76 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle8_Movement_0:
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 76 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 77 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle8_Movement_1:
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 77 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 91 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_0:
# 91 "data/maps/SouthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 94 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_1:
# 94 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 96 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_2:
# 96 "data/maps/SouthCampus/scripts.pory"
	jump_in_place_left
	step_end

# 117 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle2_Movement_0:
# 117 "data/maps/SouthCampus/scripts.pory"
	face_left
# 117 "data/maps/SouthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 120 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle2_Movement_1:
# 120 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 143 "data/maps/SouthCampus/scripts.pory"
SouthCampus_ApproachBattle_Movement_0:
# 143 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 143 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 143 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
	step_end

# 151 "data/maps/SouthCampus/scripts.pory"
SouthCampus_ApproachBattle_Movement_1:
# 151 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 151 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 151 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
	step_end

# 180 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_0:
# 180 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 180 "data/maps/SouthCampus/scripts.pory"
	slide_right
	step_end

# 184 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_1:
# 184 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 184 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 184 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 191 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_2:
# 191 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 191 "data/maps/SouthCampus/scripts.pory"
	slide_left
	step_end

# 195 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_3:
# 195 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 195 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 195 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 201 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_4:
# 201 "data/maps/SouthCampus/scripts.pory"
	enter_pokeball
	step_end

# 218 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_5:
# 218 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 218 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 218 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 218 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 218 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 219 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_6:
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 219 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 231 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_7:
# 231 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 231 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 231 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 231 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 231 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 231 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 231 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 232 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_8:
# 232 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 232 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 232 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 232 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 232 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 232 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 232 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 233 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_9:
# 233 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 233 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 233 "data/maps/SouthCampus/scripts.pory"
	walk_up
	step_end

# 255 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_0:
# 255 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 255 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 255 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 256 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_1:
# 256 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 256 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 256 "data/maps/SouthCampus/scripts.pory"
	walk_left
	step_end

# 273 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_2:
# 273 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 273 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 273 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 273 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 273 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 273 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 273 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 273 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

SouthCampus_HearBattle_Text_0:
# 86 "data/maps/SouthCampus/scripts.pory"
	.string "Go, Meowth!$"

SouthCampus_HearBattle_Text_1:
# 103 "data/maps/SouthCampus/scripts.pory"
	.string "{PLAYER}, did you hear that?\p"
	.string "It sounds like a Pokémon battle\n"
	.string "just started!\p"
	.string "Let's check it out!$"

SouthCampus_ApproachBattle_Text_0:
# 138 "data/maps/SouthCampus/scripts.pory"
	.string "I knew it!\n"
	.string "They're having a battle!$"

SouthCampus_ApproachBattle_Text_1:
# 145 "data/maps/SouthCampus/scripts.pory"
	.string "Youngster$"

SouthCampus_ApproachBattle_Text_2:
# 146 "data/maps/SouthCampus/scripts.pory"
	.string "My Meowth is way stronger!\n"
	.string "He's going to win for sure!$"

SouthCampus_ApproachBattle_Text_3:
# 148 "data/maps/SouthCampus/scripts.pory"
	.string "Lass$"

SouthCampus_ApproachBattle_Text_4:
# 149 "data/maps/SouthCampus/scripts.pory"
	.string "Don't get overconfident.\p"
	.string "I'll bet you've never seen a\n"
	.string "Meowth like mine before!$"

SouthCampus_ApproachBattle_Text_5:
# 154 "data/maps/SouthCampus/scripts.pory"
	.string "I've never seen a Meowth like her's\n"
	.string "before, either.\p"
	.string "I wonder why it looks so different…$"

SouthCampus_ApproachBattle_Text_6:
# 160 "data/maps/SouthCampus/scripts.pory"
	.string "Man$"

SouthCampus_ApproachBattle_Text_7:
# 161 "data/maps/SouthCampus/scripts.pory"
	.string "Some Pokémon come in different\n"
	.string "varieties depending on their habitat.\p"
	.string "Her Meowth is a Dark-type and his is a\n"
	.string "Normal-type.\p"
	.string "Neither Meowth has a type advantage\n"
	.string "against the other, so it's been a good\l"
	.string "battle so far!$"

SouthCampus_ApproachBattle_Text_8:
# 164 "data/maps/SouthCampus/scripts.pory"
	.string "Oh, that makes sense!\p"
	.string "It's so neat that Pokémon of the same\n"
	.string "species can be different types!$"

SouthCampus_MeowthBattle_Text_0:
# 176 "data/maps/SouthCampus/scripts.pory"
	.string "Meowth, use Scratch!$"

SouthCampus_MeowthBattle_Text_1:
# 187 "data/maps/SouthCampus/scripts.pory"
	.string "Meowth, use Pay Day!$"

SouthCampus_MeowthBattle_Text_2:
# 213 "data/maps/SouthCampus/scripts.pory"
	.string "Aww, darn!\n"
	.string "Oh well.\p"
	.string "Can't win them all.\n"
	.string "Thanks for the battle!$"

SouthCampus_MeowthBattle_Text_3:
# 216 "data/maps/SouthCampus/scripts.pory"
	.string "Same to you!\n"
	.string "It was fun!$"

SouthCampus_MeowthBattle_Text_4:
# 223 "data/maps/SouthCampus/scripts.pory"
	.string "That was such a great battle!\n"
	.string "I'm all fired up!$"

SouthCampus_MeowthBattle_Text_5:
# 229 "data/maps/SouthCampus/scripts.pory"
	.string "Hey!\n"
	.string "Let's have a battle!\p"
	.string "It'll be the first battle of our final\n"
	.string "year of school, and I can't think of\l"
	.string "anyone better to have it with!$"

SouthCampus_MeowthBattle_Text_6:
# 236 "data/maps/SouthCampus/scripts.pory"
	.string "Alright, here we go.\n"
	.string "No holding back!$"

SouthCampus_MeowthBattle_Text_7:
# 242 "data/maps/SouthCampus/scripts.pory"
	.string "Looks like I still have some\n"
	.string "catching up to do!$"

SouthCampus_TraciePostBattle_Text_0:
# 260 "data/maps/SouthCampus/scripts.pory"
	.string "Thanks for the battle!\p"
	.string "But, I could tell you were\n"
	.string "holding back!\p"
	.string "You better not do that again!\p"
	.string "I can't wait to battle again once our\n"
	.string "journeys start!\p"
	.string "Let me heal your Pokémon quick!$"

SouthCampus_TraciePostBattle_Text_1:
# 266 "data/maps/SouthCampus/scripts.pory"
	.string "That was so much fun!\p"
	.string "I can't wait to battle again once our\n"
	.string "journeys start!\p"
	.string "Let me heal your Pokémon quick!$"

SouthCampus_TraciePostBattle_Text_2:
# 271 "data/maps/SouthCampus/scripts.pory"
	.string "I'm going to go on ahead to North\n"
	.string "Campus for orientation.\p"
	.string "Try not to take too long getting there.\n"
	.string "You don't want to be late!\p"
	.string "See you soon!$"
