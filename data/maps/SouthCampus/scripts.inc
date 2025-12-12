SouthCampus_MapScripts::
# 2 "data/maps/SouthCampus/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthCampus_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SouthCampus_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SouthCampus/scripts.pory"
	compare VAR_SOUTH_CAMPUS_STATE, 1
	goto_if_ge SouthCampus_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SouthCampus_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SouthCampus/scripts.pory"
	setobjectxyperm LOCALID_SOUTH_CAMPUS_FAT_MAN, 26, 30
# 5 "data/maps/SouthCampus/scripts.pory"
	setobjectmovementtype LOCALID_SOUTH_CAMPUS_FAT_MAN, MOVEMENT_TYPE_WANDER_AROUND
	return


SouthCampus_MoveToBattle1::
# 11 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 12 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle1_Movement_0
# 13 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle1_Movement_1
# 14 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 15 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle2::
# 19 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 20 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle2_Movement_0
# 21 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle2_Movement_1
# 22 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 23 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle3::
# 27 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 28 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle3_Movement_0
# 29 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle3_Movement_1
# 30 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 31 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle4::
# 35 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 36 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle4_Movement_0
# 37 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle4_Movement_1
# 38 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 39 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle5::
# 43 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 44 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle5_Movement_0
# 45 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_1
# 46 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 47 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_2
# 48 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle5_Movement_3
# 49 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 50 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle6::
# 54 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 55 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 56 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 57 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 58 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_2
# 59 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_3
# 60 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 61 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle7::
# 65 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 66 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 67 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 68 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 69 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_2
# 70 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle7_Movement_0
# 71 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 72 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle8::
# 76 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 77 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 78 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 79 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 80 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle8_Movement_0
# 81 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle8_Movement_1
# 82 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 83 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_HearBattle::
# 87 "data/maps/SouthCampus/scripts.pory"
	lock
# 88 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_SOUTH_CAMPUS_FAT_MAN, SouthCampus_MoveToBattle6_Movement_0
# 89 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 90 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_0
# 91 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 92 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 93 "data/maps/SouthCampus/scripts.pory"
	delay 10
# 94 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 95 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_0
# 96 "data/maps/SouthCampus/scripts.pory"
	playse SE_PIN
# 97 "data/maps/SouthCampus/scripts.pory"
	waitse
# 98 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle_Movement_1
# 99 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 100 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 101 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 102 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 103 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 104 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 105 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 106 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 107 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_1
# 108 "data/maps/SouthCampus/scripts.pory"
	closemessage
	return


SouthCampus_HearBattle2::
# 113 "data/maps/SouthCampus/scripts.pory"
	lock
# 114 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_SOUTH_CAMPUS_FAT_MAN, SouthCampus_MoveToBattle6_Movement_0
# 115 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 116 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_0
# 117 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 118 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 119 "data/maps/SouthCampus/scripts.pory"
	delay 10
# 120 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 121 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_0
# 122 "data/maps/SouthCampus/scripts.pory"
	playse SE_PIN
# 123 "data/maps/SouthCampus/scripts.pory"
	waitse
# 124 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle2_Movement_1
# 125 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 126 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 127 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 128 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 129 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 130 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 131 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 132 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 133 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_1
# 134 "data/maps/SouthCampus/scripts.pory"
	closemessage
	return


SouthCampus_ApproachBattle::
# 141 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 142 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_0
# 143 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 144 "data/maps/SouthCampus/scripts.pory"
	special SpawnCameraObject
# 145 "data/maps/SouthCampus/scripts.pory"
	setobjectxy LOCALID_CAMERA, 23, 29
# 146 "data/maps/SouthCampus/scripts.pory"
	playbgm CUS_VS_TRAINER, FALSE
# 147 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_0
# 148 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 149 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_YOUNGSTER
# 150 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_1
# 151 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 152 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_LASS
# 153 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_2
# 154 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 155 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_1
# 156 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 157 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 158 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_3
# 159 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 160 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle2_Movement_1
# 161 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_1
# 162 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_SOUTH_CAMPUS_FAT_MAN, SouthCampus_HearBattle_Movement_1
# 163 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 164 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_MAN
# 165 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_4
# 166 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 167 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 168 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_5
# 169 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 170 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_0
# 171 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_0
# 172 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_SOUTH_CAMPUS_FAT_MAN, SouthCampus_MoveToBattle6_Movement_0
# 173 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_0
# 174 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 175 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_MeowthBattle
	return


SouthCampus_MeowthBattle::
# 179 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_YOUNGSTER
# 180 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_0
# 181 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 182 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 183 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 184 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_0
# 185 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 186 "data/maps/SouthCampus/scripts.pory"
	playse SE_M_SCRATCH
# 187 "data/maps/SouthCampus/scripts.pory"
	waitse
# 188 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_1
# 189 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 190 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_LASS
# 191 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_1
# 192 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 193 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH_ALOLA, 0
# 194 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 195 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_2
# 196 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 197 "data/maps/SouthCampus/scripts.pory"
	playse SE_M_PAY_DAY
# 198 "data/maps/SouthCampus/scripts.pory"
	waitse
# 199 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_3
# 200 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 201 "data/maps/SouthCampus/scripts.pory"
	delay 40
# 202 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_FAINT
# 203 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 204 "data/maps/SouthCampus/scripts.pory"
	playse SE_FAINT
# 205 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_4
# 206 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 207 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_MEOWTH, MAP_SOUTH_CAMPUS
# 208 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_MEOWTH
# 209 "data/maps/SouthCampus/scripts.pory"
	delay 40
# 210 "data/maps/SouthCampus/scripts.pory"
	fadedefaultbgm
# 211 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_4
# 212 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 213 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_MEOWTH_ALOLA, MAP_SOUTH_CAMPUS
# 214 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_MEOWTH_ALOLA
# 215 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_HIDE_MEOWTHS
# 216 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_YOUNGSTER
# 217 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_2
# 218 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 219 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_LASS
# 220 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_3
# 221 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 222 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_LASS, SouthCampus_MeowthBattle_Movement_5
# 223 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_YOUNGSTER, SouthCampus_MeowthBattle_Movement_6
# 224 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_1
# 225 "data/maps/SouthCampus/scripts.pory"
	delay 20
# 226 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 227 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_4
# 228 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 229 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle_Movement_1
# 230 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_1
# 231 "data/maps/SouthCampus/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 232 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 233 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_5
# 234 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 235 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MeowthBattle_Movement_7
# 236 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MeowthBattle_Movement_8
# 237 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_MeowthBattle_Movement_9
# 238 "data/maps/SouthCampus/scripts.pory"
	delay 90
# 239 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 240 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_6
# 241 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 242 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_HIDE_SOUTH_CAMPUS_TRAINERS
# 243 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_WHITEOUT_CONTINUE
# 244 "data/maps/SouthCampus/scripts.pory"
	trainerbattle_no_intro TRAINER_TRACIE_SOUTH_CAMPUS, SouthCampus_MeowthBattle_Text_7
# 245 "data/maps/SouthCampus/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 246 "data/maps/SouthCampus/scripts.pory"
	clearflag FLAG_WHITEOUT_CONTINUE
# 247 "data/maps/SouthCampus/scripts.pory"
	special RemoveCameraObject
# 248 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_CAMERA
# 249 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_TraciePostBattle
	return


SouthCampus_TraciePostBattle::
# 254 "data/maps/SouthCampus/scripts.pory"
	special SpawnCameraObject
# 255 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_LASS, MAP_SOUTH_CAMPUS
# 256 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_LASS
# 257 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_YOUNGSTER, MAP_SOUTH_CAMPUS
# 258 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_YOUNGSTER
# 259 "data/maps/SouthCampus/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 23, 26
# 260 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_TraciePostBattle_Movement_0
# 261 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_TraciePostBattle_Movement_1
# 262 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 263 "data/maps/SouthCampus/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq SouthCampus_TraciePostBattle_2
# 270 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 271 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_1
# 272 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 273 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HealParty
SouthCampus_TraciePostBattle_1:
# 275 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 276 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_2
# 277 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 278 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_TraciePostBattle_Movement_2
# 279 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 280 "data/maps/SouthCampus/scripts.pory"
	special RemoveCameraObject
# 281 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_CAMERA
# 282 "data/maps/SouthCampus/scripts.pory"
	destroyfollowernpc
# 283 "data/maps/SouthCampus/scripts.pory"
	setvar VAR_SOUTH_CAMPUS_STATE, 1
# 284 "data/maps/SouthCampus/scripts.pory"
	setrespawn HEAL_LOCATION_SOUTH_CAMPUS
# 285 "data/maps/SouthCampus/scripts.pory"
	fadedefaultbgm
# 286 "data/maps/SouthCampus/scripts.pory"
	release
	end

SouthCampus_TraciePostBattle_2:
# 264 "data/maps/SouthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 265 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_0
# 266 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 267 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HealParty
	goto SouthCampus_TraciePostBattle_1


SouthCampus_HealParty::
# 291 "data/maps/SouthCampus/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 292 "data/maps/SouthCampus/scripts.pory"
	playse SE_USE_ITEM
# 293 "data/maps/SouthCampus/scripts.pory"
	waitse
# 294 "data/maps/SouthCampus/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 295 "data/maps/SouthCampus/scripts.pory"
	special HealPlayerParty
	return


SouthCampus_NPC1::
# 299 "data/maps/SouthCampus/scripts.pory"
	lock
# 300 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 301 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC1_Text_0
# 302 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 303 "data/maps/SouthCampus/scripts.pory"
	release
	end


SouthCampus_NPC2::
# 308 "data/maps/SouthCampus/scripts.pory"
	lock
# 309 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 310 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC2_Text_0
# 311 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 312 "data/maps/SouthCampus/scripts.pory"
	release
	end


SouthCampus_NPC3::
# 317 "data/maps/SouthCampus/scripts.pory"
	lock
# 318 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 319 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC3_Text_0
# 320 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 321 "data/maps/SouthCampus/scripts.pory"
	release
	end


SouthCampus_NPC4::
# 326 "data/maps/SouthCampus/scripts.pory"
	lock
# 327 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 328 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC4_Text_0
# 329 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 330 "data/maps/SouthCampus/scripts.pory"
	release
	end


SouthCampus_NPC5::
# 335 "data/maps/SouthCampus/scripts.pory"
	lock
# 336 "data/maps/SouthCampus/scripts.pory"
	faceplayer
# 337 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_NPC5_Text_0
# 338 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 339 "data/maps/SouthCampus/scripts.pory"
	release
	end


# 12 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle1_Movement_0:
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 12 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 13 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle1_Movement_1:
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 13 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 20 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle2_Movement_0:
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 20 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 21 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle2_Movement_1:
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 21 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 28 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle3_Movement_0:
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 28 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 29 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle3_Movement_1:
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 29 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 36 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle4_Movement_0:
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 36 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 37 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle4_Movement_1:
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 37 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 44 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_0:
# 44 "data/maps/SouthCampus/scripts.pory"
	face_down
	step_end

# 45 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_1:
# 45 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 45 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
	step_end

# 47 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_2:
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 47 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 48 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_3:
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 48 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 55 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_0:
# 55 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 56 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_1:
# 56 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 56 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
	step_end

# 58 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_2:
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 58 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 59 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_3:
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 59 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 70 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle7_Movement_0:
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 70 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 80 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle8_Movement_0:
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 80 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 81 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle8_Movement_1:
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 81 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 95 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_0:
# 95 "data/maps/SouthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 98 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_1:
# 98 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 100 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_2:
# 100 "data/maps/SouthCampus/scripts.pory"
	jump_in_place_left
	step_end

# 121 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle2_Movement_0:
# 121 "data/maps/SouthCampus/scripts.pory"
	face_left
# 121 "data/maps/SouthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 124 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle2_Movement_1:
# 124 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 147 "data/maps/SouthCampus/scripts.pory"
SouthCampus_ApproachBattle_Movement_0:
# 147 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 147 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 147 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
	step_end

# 155 "data/maps/SouthCampus/scripts.pory"
SouthCampus_ApproachBattle_Movement_1:
# 155 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 155 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 155 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
	step_end

# 184 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_0:
# 184 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 184 "data/maps/SouthCampus/scripts.pory"
	slide_right
	step_end

# 188 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_1:
# 188 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 188 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 188 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 195 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_2:
# 195 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 195 "data/maps/SouthCampus/scripts.pory"
	slide_left
	step_end

# 199 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_3:
# 199 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 199 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 199 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 205 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_4:
# 205 "data/maps/SouthCampus/scripts.pory"
	enter_pokeball
	step_end

# 222 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_5:
# 222 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 222 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 222 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 222 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 222 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 223 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_6:
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 223 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 235 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_7:
# 235 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 235 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 235 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 235 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 235 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 235 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 235 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 236 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_8:
# 236 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 236 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 236 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 236 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 236 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 236 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 236 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 237 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_9:
# 237 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 237 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 237 "data/maps/SouthCampus/scripts.pory"
	walk_up
	step_end

# 260 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_0:
# 260 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 260 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 260 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 261 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_1:
# 261 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 261 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 261 "data/maps/SouthCampus/scripts.pory"
	walk_left
	step_end

# 278 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_2:
# 278 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 278 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 278 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 278 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 278 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 278 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 278 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 278 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

SouthCampus_HearBattle_Text_0:
# 90 "data/maps/SouthCampus/scripts.pory"
	.string "Go, Meowth!$"

SouthCampus_HearBattle_Text_1:
# 107 "data/maps/SouthCampus/scripts.pory"
	.string "{PLAYER}, did you hear that?\p"
	.string "It sounds like a Pokémon battle\n"
	.string "just started!\p"
	.string "Let's check it out!$"

SouthCampus_ApproachBattle_Text_0:
# 142 "data/maps/SouthCampus/scripts.pory"
	.string "I knew it!\n"
	.string "They're having a battle!$"

SouthCampus_ApproachBattle_Text_1:
# 150 "data/maps/SouthCampus/scripts.pory"
	.string "My Meowth is way stronger!\n"
	.string "He's going to win for sure!$"

SouthCampus_ApproachBattle_Text_2:
# 153 "data/maps/SouthCampus/scripts.pory"
	.string "Don't get overconfident.\p"
	.string "I'll bet you've never seen a\n"
	.string "Meowth like mine before!$"

SouthCampus_ApproachBattle_Text_3:
# 158 "data/maps/SouthCampus/scripts.pory"
	.string "I've never seen a Meowth like her's\n"
	.string "before, either.\p"
	.string "I wonder why it looks so different…$"

SouthCampus_ApproachBattle_Text_4:
# 165 "data/maps/SouthCampus/scripts.pory"
	.string "Some Pokémon come in different\n"
	.string "varieties depending on their habitat.\p"
	.string "Her Meowth is a {COLOR RED}Dark-type {COLOR DARK_GRAY}and his is a\n"
	.string "{COLOR RED}Normal-type.\p"
	.string "{COLOR DARK_GRAY}Neither Meowth has a type advantage\n"
	.string "against the other, so it's been a good\l"
	.string "battle so far!$"

SouthCampus_ApproachBattle_Text_5:
# 168 "data/maps/SouthCampus/scripts.pory"
	.string "Oh, that makes sense!\p"
	.string "It's so neat that Pokémon of the same\n"
	.string "species can be different types!$"

SouthCampus_MeowthBattle_Text_0:
# 180 "data/maps/SouthCampus/scripts.pory"
	.string "Meowth, use Scratch!$"

SouthCampus_MeowthBattle_Text_1:
# 191 "data/maps/SouthCampus/scripts.pory"
	.string "Meowth, use Pay Day!$"

SouthCampus_MeowthBattle_Text_2:
# 217 "data/maps/SouthCampus/scripts.pory"
	.string "Aww, darn!\n"
	.string "Oh well.\p"
	.string "Can't win them all.\n"
	.string "Thanks for the battle!$"

SouthCampus_MeowthBattle_Text_3:
# 220 "data/maps/SouthCampus/scripts.pory"
	.string "Same to you!\n"
	.string "It was fun!$"

SouthCampus_MeowthBattle_Text_4:
# 227 "data/maps/SouthCampus/scripts.pory"
	.string "That was such a great battle!\n"
	.string "I'm all fired up!$"

SouthCampus_MeowthBattle_Text_5:
# 233 "data/maps/SouthCampus/scripts.pory"
	.string "Hey!\n"
	.string "Let's have a battle!\p"
	.string "It'll be the first battle of our final\n"
	.string "year of school, and I can't think of\l"
	.string "anyone better to have it with!$"

SouthCampus_MeowthBattle_Text_6:
# 240 "data/maps/SouthCampus/scripts.pory"
	.string "Alright, here we go.\n"
	.string "No holding back!$"

SouthCampus_MeowthBattle_Text_7:
# 244 "data/maps/SouthCampus/scripts.pory"
	.string "Looks like I still have some\n"
	.string "catching up to do!$"

SouthCampus_TraciePostBattle_Text_0:
# 265 "data/maps/SouthCampus/scripts.pory"
	.string "Thanks for the battle!\p"
	.string "But, I could tell you were\n"
	.string "holding back!\p"
	.string "You better not do that again!\p"
	.string "I can't wait to battle again once our\n"
	.string "journeys start!\p"
	.string "Let me heal your Pokémon quick!$"

SouthCampus_TraciePostBattle_Text_1:
# 271 "data/maps/SouthCampus/scripts.pory"
	.string "That was so much fun!\p"
	.string "I can't wait to battle again once our\n"
	.string "journeys start!\p"
	.string "Let me heal your Pokémon quick!$"

SouthCampus_TraciePostBattle_Text_2:
# 276 "data/maps/SouthCampus/scripts.pory"
	.string "I'm going to go on ahead to {COLOR GREEN}North\n"
	.string "Campus{COLOR DARK_GRAY} for orientation.\p"
	.string "Try not to take too long getting there.\n"
	.string "You don't want to be late!\p"
	.string "See you soon!$"

SouthCampus_NPC1_Text_0:
# 301 "data/maps/SouthCampus/scripts.pory"
	.string "Hi, {PLAYER}! Hard to believe it's\n"
	.string "senior year.\p"
	.string "Good luck on your journey ahead!$"

SouthCampus_NPC2_Text_0:
# 310 "data/maps/SouthCampus/scripts.pory"
	.string "Hey! Have you heard about 'trsfu'?\p"
	.string "It's the new thing!\n"
	.string "It means, 'I'm ready to go!'$"

SouthCampus_NPC3_Text_0:
# 319 "data/maps/SouthCampus/scripts.pory"
	.string "That was a great battle you had back\n"
	.string "there!\p"
	.string "I hope I can be as good as you one day.$"

SouthCampus_NPC4_Text_0:
# 328 "data/maps/SouthCampus/scripts.pory"
	.string "Not now, {PLAYER}!\n"
	.string "I'm busy studying for my exams!$"

SouthCampus_NPC5_Text_0:
# 337 "data/maps/SouthCampus/scripts.pory"
	.string "I used to hang out here all the time as\n"
	.string "a freshman.\p"
	.string "My friends and I would race alongside\n"
	.string "the shoreline.\p"
	.string "Feels weird knowing this is my last year\n"
	.string "here.$"
