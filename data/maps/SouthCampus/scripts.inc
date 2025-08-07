SouthCampus_MapScripts::
	.byte 0


SouthCampus_LockedCafeteria::
# 5 "data/maps/SouthCampus/scripts.pory"
	lock
# 6 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_LockedCafeteria_Movement_0
# 7 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_LockedCafeteria_Text_0
# 8 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 9 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_LockedCafeteria_Movement_1
# 10 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
	return


SouthCampus_MoveToBattle1::
# 14 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 15 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle1_Movement_0
# 16 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle1_Movement_1
# 17 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 18 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle2::
# 22 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 23 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle2_Movement_0
# 24 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle2_Movement_1
# 25 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 26 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle3::
# 30 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 31 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle3_Movement_0
# 32 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle3_Movement_1
# 33 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 34 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle4::
# 38 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle
# 39 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle4_Movement_0
# 40 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle4_Movement_1
# 41 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 42 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle5::
# 46 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 47 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle5_Movement_0
# 48 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_1
# 49 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 50 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_2
# 51 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle5_Movement_3
# 52 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 53 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle6::
# 57 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 58 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_LockedCafeteria_Movement_0
# 59 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_0
# 60 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 61 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_1
# 62 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle6_Movement_2
# 63 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 64 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle7::
# 68 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 69 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_LockedCafeteria_Movement_0
# 70 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_0
# 71 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 72 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle5_Movement_2
# 73 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle7_Movement_0
# 74 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 75 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_MoveToBattle8::
# 79 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HearBattle2
# 80 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_LockedCafeteria_Movement_0
# 81 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle6_Movement_0
# 82 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 83 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MoveToBattle8_Movement_0
# 84 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MoveToBattle8_Movement_1
# 85 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 86 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_ApproachBattle
	return


SouthCampus_HearBattle::
# 90 "data/maps/SouthCampus/scripts.pory"
	lock
# 91 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_LockedCafeteria_Movement_0
# 92 "data/maps/SouthCampus/scripts.pory"
	speakername Unknown
# 93 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_0
# 94 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 95 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 96 "data/maps/SouthCampus/scripts.pory"
	delay 10
# 97 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 98 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_0
# 99 "data/maps/SouthCampus/scripts.pory"
	playse SE_PIN
# 100 "data/maps/SouthCampus/scripts.pory"
	waitse
# 101 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle_Movement_1
# 102 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 103 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 104 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 105 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 106 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 107 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 108 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 109 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 110 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_1
# 111 "data/maps/SouthCampus/scripts.pory"
	closemessage
	return


SouthCampus_HearBattle2::
# 116 "data/maps/SouthCampus/scripts.pory"
	lock
# 117 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_LockedCafeteria_Movement_0
# 118 "data/maps/SouthCampus/scripts.pory"
	speakername Unknown
# 119 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_0
# 120 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 121 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 122 "data/maps/SouthCampus/scripts.pory"
	delay 10
# 123 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 124 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_0
# 125 "data/maps/SouthCampus/scripts.pory"
	playse SE_PIN
# 126 "data/maps/SouthCampus/scripts.pory"
	waitse
# 127 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle2_Movement_1
# 128 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 129 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 130 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 131 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 132 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle_Movement_2
# 133 "data/maps/SouthCampus/scripts.pory"
	playse SE_LEDGE
# 134 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 135 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 136 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_HearBattle_Text_1
# 137 "data/maps/SouthCampus/scripts.pory"
	closemessage
	return


SouthCampus_ApproachBattle::
# 144 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 145 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_0
# 146 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 147 "data/maps/SouthCampus/scripts.pory"
	special SpawnCameraObject
# 148 "data/maps/SouthCampus/scripts.pory"
	setobjectxy LOCALID_CAMERA, 23, 29
# 149 "data/maps/SouthCampus/scripts.pory"
	playbgm CUS_VS_TRAINER, FALSE
# 150 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_0
# 151 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 152 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_1
# 153 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_2
# 154 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 155 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_3
# 156 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_4
# 157 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 158 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_1
# 159 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 160 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 161 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_5
# 162 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 163 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle2_Movement_1
# 164 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_1
# 165 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_HearBattle_Movement_1
# 166 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 167 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_6
# 168 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_7
# 169 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 170 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 171 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_ApproachBattle_Text_8
# 172 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 173 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_LockedCafeteria_Movement_0
# 174 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_LockedCafeteria_Movement_0
# 175 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_FAT_MAN, SouthCampus_LockedCafeteria_Movement_0
# 176 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_0
# 177 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 178 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_MeowthBattle
	return


SouthCampus_MeowthBattle::
# 182 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_1
# 183 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_0
# 184 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 185 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, 0
# 186 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 187 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_0
# 188 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 189 "data/maps/SouthCampus/scripts.pory"
	playse SE_M_SCRATCH
# 190 "data/maps/SouthCampus/scripts.pory"
	waitse
# 191 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_1
# 192 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 193 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_3
# 194 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_1
# 195 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 196 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH_ALOLA, 0
# 197 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 198 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_2
# 199 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 200 "data/maps/SouthCampus/scripts.pory"
	playse SE_M_PAY_DAY
# 201 "data/maps/SouthCampus/scripts.pory"
	waitse
# 202 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_3
# 203 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 204 "data/maps/SouthCampus/scripts.pory"
	delay 40
# 205 "data/maps/SouthCampus/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_FAINT
# 206 "data/maps/SouthCampus/scripts.pory"
	waitmoncry
# 207 "data/maps/SouthCampus/scripts.pory"
	playse SE_FAINT
# 208 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH, SouthCampus_MeowthBattle_Movement_4
# 209 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 210 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_MEOWTH, MAP_SOUTH_CAMPUS
# 211 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_MEOWTH
# 212 "data/maps/SouthCampus/scripts.pory"
	delay 40
# 213 "data/maps/SouthCampus/scripts.pory"
	fadedefaultbgm
# 214 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_MEOWTH_ALOLA, SouthCampus_MeowthBattle_Movement_4
# 215 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 216 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_MEOWTH_ALOLA, MAP_SOUTH_CAMPUS
# 217 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_MEOWTH_ALOLA
# 218 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_HIDE_MEOWTHS
# 219 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_1
# 220 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_2
# 221 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 222 "data/maps/SouthCampus/scripts.pory"
	speakername SouthCampus_ApproachBattle_Text_3
# 223 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_3
# 224 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 225 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_LASS, SouthCampus_MeowthBattle_Movement_5
# 226 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_YOUNGSTER, SouthCampus_MeowthBattle_Movement_6
# 227 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_ApproachBattle_Movement_1
# 228 "data/maps/SouthCampus/scripts.pory"
	delay 20
# 229 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 230 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_4
# 231 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 232 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_HearBattle_Movement_1
# 233 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_HearBattle2_Movement_1
# 234 "data/maps/SouthCampus/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 235 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 236 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_5
# 237 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 238 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_MeowthBattle_Movement_7
# 239 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_MeowthBattle_Movement_8
# 240 "data/maps/SouthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, SouthCampus_MeowthBattle_Movement_9
# 241 "data/maps/SouthCampus/scripts.pory"
	delay 90
# 242 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 243 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_MeowthBattle_Text_6
# 244 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 245 "data/maps/SouthCampus/scripts.pory"
	special RemoveCameraObject
# 246 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_CAMERA
# 247 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_HIDE_SOUTH_CAMPUS_TRAINERS
# 248 "data/maps/SouthCampus/scripts.pory"
	setflag FLAG_WHITEOUT_CONTINUE
# 249 "data/maps/SouthCampus/scripts.pory"
	trainerbattle_no_intro TRAINER_TRACIE_SOUTH_CAMPUS, SouthCampus_MeowthBattle_Text_7
# 250 "data/maps/SouthCampus/scripts.pory"
	clearflag FLAG_WHITEOUT_CONTINUE
# 251 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_TraciePostBattle
	return


SouthCampus_TraciePostBattle::
# 256 "data/maps/SouthCampus/scripts.pory"
	special SpawnCameraObject
# 257 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_LASS, MAP_SOUTH_CAMPUS
# 258 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_LASS
# 259 "data/maps/SouthCampus/scripts.pory"
	hideobjectat LOCALID_YOUNGSTER, MAP_SOUTH_CAMPUS
# 260 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_YOUNGSTER
# 261 "data/maps/SouthCampus/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 23, 26
# 262 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthCampus_TraciePostBattle_Movement_0
# 263 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_TraciePostBattle_Movement_1
# 264 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 265 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 266 "data/maps/SouthCampus/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq SouthCampus_TraciePostBattle_2
# 273 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_1
# 274 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 275 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HealParty
SouthCampus_TraciePostBattle_1:
# 277 "data/maps/SouthCampus/scripts.pory"
	speakername Tracie
# 278 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_2
# 279 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 280 "data/maps/SouthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SouthCampus_TraciePostBattle_Movement_2
# 281 "data/maps/SouthCampus/scripts.pory"
	waitmovement 0
# 282 "data/maps/SouthCampus/scripts.pory"
	special RemoveCameraObject
# 283 "data/maps/SouthCampus/scripts.pory"
	removeobject LOCALID_CAMERA
# 284 "data/maps/SouthCampus/scripts.pory"
	destroyfollowernpc
# 285 "data/maps/SouthCampus/scripts.pory"
	setvar VAR_SOUTH_CAMPUS_STATE, 1
# 286 "data/maps/SouthCampus/scripts.pory"
	setrespawn HEAL_LOCATION_SOUTH_CAMPUS
# 287 "data/maps/SouthCampus/scripts.pory"
	fadedefaultbgm
# 288 "data/maps/SouthCampus/scripts.pory"
	release
	end

SouthCampus_TraciePostBattle_2:
# 267 "data/maps/SouthCampus/scripts.pory"
	msgbox SouthCampus_TraciePostBattle_Text_0
# 268 "data/maps/SouthCampus/scripts.pory"
	closemessage
# 269 "data/maps/SouthCampus/scripts.pory"
	call SouthCampus_HealParty
	goto SouthCampus_TraciePostBattle_1


SouthCampus_HealParty::
# 293 "data/maps/SouthCampus/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 294 "data/maps/SouthCampus/scripts.pory"
	playse SE_USE_ITEM
# 295 "data/maps/SouthCampus/scripts.pory"
	waitse
# 296 "data/maps/SouthCampus/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 297 "data/maps/SouthCampus/scripts.pory"
	special HealPlayerParty
	return


# 6 "data/maps/SouthCampus/scripts.pory"
SouthCampus_LockedCafeteria_Movement_0:
# 6 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 9 "data/maps/SouthCampus/scripts.pory"
SouthCampus_LockedCafeteria_Movement_1:
# 9 "data/maps/SouthCampus/scripts.pory"
	walk_down
	step_end

# 15 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle1_Movement_0:
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
	walk_fast_left
# 15 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 16 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle1_Movement_1:
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
	face_up
	step_end

# 23 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle2_Movement_0:
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
	walk_fast_left
# 23 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 24 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle2_Movement_1:
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
	face_up
	step_end

# 31 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle3_Movement_0:
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
	walk_fast_left
# 31 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 32 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle3_Movement_1:
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
	face_up
	step_end

# 39 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle4_Movement_0:
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 39 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 40 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle4_Movement_1:
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 40 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 47 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_0:
# 47 "data/maps/SouthCampus/scripts.pory"
	face_down
	step_end

# 48 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_1:
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 48 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
	step_end

# 50 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_2:
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 50 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 51 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle5_Movement_3:
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 51 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 59 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_0:
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 59 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
	step_end

# 61 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_1:
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 61 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 62 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle6_Movement_2:
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 62 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 73 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle7_Movement_0:
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 73 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 83 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle8_Movement_0:
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 83 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 84 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MoveToBattle8_Movement_1:
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	walk_fast_left
# 84 "data/maps/SouthCampus/scripts.pory"
	face_up
	step_end

# 98 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_0:
# 98 "data/maps/SouthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 101 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_1:
# 101 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 103 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle_Movement_2:
# 103 "data/maps/SouthCampus/scripts.pory"
	jump_in_place_left
	step_end

# 124 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle2_Movement_0:
# 124 "data/maps/SouthCampus/scripts.pory"
	face_left
# 124 "data/maps/SouthCampus/scripts.pory"
	emote_exclamation_mark
	step_end

# 127 "data/maps/SouthCampus/scripts.pory"
SouthCampus_HearBattle2_Movement_1:
# 127 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 150 "data/maps/SouthCampus/scripts.pory"
SouthCampus_ApproachBattle_Movement_0:
# 150 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 150 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
# 150 "data/maps/SouthCampus/scripts.pory"
	walk_fast_up
	step_end

# 158 "data/maps/SouthCampus/scripts.pory"
SouthCampus_ApproachBattle_Movement_1:
# 158 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 158 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
# 158 "data/maps/SouthCampus/scripts.pory"
	walk_fast_down
	step_end

# 187 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_0:
# 187 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 187 "data/maps/SouthCampus/scripts.pory"
	slide_right
	step_end

# 191 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_1:
# 191 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 191 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 191 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 198 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_2:
# 198 "data/maps/SouthCampus/scripts.pory"
	slide_left
# 198 "data/maps/SouthCampus/scripts.pory"
	slide_left
	step_end

# 202 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_3:
# 202 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 202 "data/maps/SouthCampus/scripts.pory"
	slide_right
# 202 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 208 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_4:
# 208 "data/maps/SouthCampus/scripts.pory"
	enter_pokeball
	step_end

# 225 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_5:
# 225 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 225 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 225 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 225 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 225 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 226 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_6:
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 226 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 238 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_7:
# 238 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 238 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 238 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 238 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 238 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 238 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 238 "data/maps/SouthCampus/scripts.pory"
	face_right
	step_end

# 239 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_8:
# 239 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 239 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 239 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 239 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 239 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 239 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 239 "data/maps/SouthCampus/scripts.pory"
	face_left
	step_end

# 240 "data/maps/SouthCampus/scripts.pory"
SouthCampus_MeowthBattle_Movement_9:
# 240 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 240 "data/maps/SouthCampus/scripts.pory"
	walk_up
# 240 "data/maps/SouthCampus/scripts.pory"
	walk_up
	step_end

# 262 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_0:
# 262 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 262 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 262 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

# 263 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_1:
# 263 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 263 "data/maps/SouthCampus/scripts.pory"
	walk_left
# 263 "data/maps/SouthCampus/scripts.pory"
	walk_left
	step_end

# 280 "data/maps/SouthCampus/scripts.pory"
SouthCampus_TraciePostBattle_Movement_2:
# 280 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 280 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 280 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 280 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 280 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 280 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 280 "data/maps/SouthCampus/scripts.pory"
	walk_right
# 280 "data/maps/SouthCampus/scripts.pory"
	walk_right
	step_end

SouthCampus_LockedCafeteria_Text_0:
# 7 "data/maps/SouthCampus/scripts.pory"
	.string "The cafeteria isn't open.$"

SouthCampus_HearBattle_Text_0:
# 93 "data/maps/SouthCampus/scripts.pory"
	.string "Go, Meowth!$"

SouthCampus_HearBattle_Text_1:
# 110 "data/maps/SouthCampus/scripts.pory"
	.string "{PLAYER}, did you hear that?\p"
	.string "It sounds like a Pokémon battle\n"
	.string "just started!\p"
	.string "Let's check it out!$"

SouthCampus_ApproachBattle_Text_0:
# 145 "data/maps/SouthCampus/scripts.pory"
	.string "I knew it!\n"
	.string "They're having a battle!$"

SouthCampus_ApproachBattle_Text_1:
# 152 "data/maps/SouthCampus/scripts.pory"
	.string "Youngster$"

SouthCampus_ApproachBattle_Text_2:
# 153 "data/maps/SouthCampus/scripts.pory"
	.string "My Meowth is way stronger!\n"
	.string "He's going to win for sure!$"

SouthCampus_ApproachBattle_Text_3:
# 155 "data/maps/SouthCampus/scripts.pory"
	.string "Lass$"

SouthCampus_ApproachBattle_Text_4:
# 156 "data/maps/SouthCampus/scripts.pory"
	.string "Don't get overconfident.\p"
	.string "I'll bet you've never seen a\n"
	.string "Meowth like mine before!$"

SouthCampus_ApproachBattle_Text_5:
# 161 "data/maps/SouthCampus/scripts.pory"
	.string "I've never seen a Meowth like her's\n"
	.string "before, either.\p"
	.string "I wonder why it looks so different…$"

SouthCampus_ApproachBattle_Text_6:
# 167 "data/maps/SouthCampus/scripts.pory"
	.string "Man$"

SouthCampus_ApproachBattle_Text_7:
# 168 "data/maps/SouthCampus/scripts.pory"
	.string "Some Pokémon come in different\n"
	.string "varieties depending on their habitat.\p"
	.string "Her Meowth is a Dark-type and his is a\n"
	.string "Normal-type.\p"
	.string "Neither Meowth has a type advantage\n"
	.string "against the other, so it's been a good\l"
	.string "battle so far!$"

SouthCampus_ApproachBattle_Text_8:
# 171 "data/maps/SouthCampus/scripts.pory"
	.string "Oh, that makes sense!\p"
	.string "It's so neat that Pokémon of the same\n"
	.string "species can be different types!$"

SouthCampus_MeowthBattle_Text_0:
# 183 "data/maps/SouthCampus/scripts.pory"
	.string "Meowth, use Scratch!$"

SouthCampus_MeowthBattle_Text_1:
# 194 "data/maps/SouthCampus/scripts.pory"
	.string "Meowth, use Pay Day!$"

SouthCampus_MeowthBattle_Text_2:
# 220 "data/maps/SouthCampus/scripts.pory"
	.string "Aww, darn!\n"
	.string "Oh well.\p"
	.string "Can't win them all.\n"
	.string "Thanks for the battle!$"

SouthCampus_MeowthBattle_Text_3:
# 223 "data/maps/SouthCampus/scripts.pory"
	.string "Same to you!\n"
	.string "It was fun!$"

SouthCampus_MeowthBattle_Text_4:
# 230 "data/maps/SouthCampus/scripts.pory"
	.string "That was such a great battle!\n"
	.string "I'm all fired up!$"

SouthCampus_MeowthBattle_Text_5:
# 236 "data/maps/SouthCampus/scripts.pory"
	.string "Hey!\n"
	.string "Let's have a battle!\p"
	.string "It'll be the first battle of our final\n"
	.string "year of school, and I can't think of\l"
	.string "anyone better to have it with!$"

SouthCampus_MeowthBattle_Text_6:
# 243 "data/maps/SouthCampus/scripts.pory"
	.string "Alright, here we go.\n"
	.string "No holding back!$"

SouthCampus_MeowthBattle_Text_7:
# 249 "data/maps/SouthCampus/scripts.pory"
	.string "Looks like I still have some\n"
	.string "catching up to do!$"

SouthCampus_TraciePostBattle_Text_0:
# 267 "data/maps/SouthCampus/scripts.pory"
	.string "Thanks for the battle!\p"
	.string "But, I could tell you were\n"
	.string "holding back!\p"
	.string "You better not do that again!\p"
	.string "I can't wait to battle again once our\n"
	.string "journeys start!\p"
	.string "Let me heal your Pokémon quick!$"

SouthCampus_TraciePostBattle_Text_1:
# 273 "data/maps/SouthCampus/scripts.pory"
	.string "That was so much fun!\p"
	.string "I can't wait to battle again once our\n"
	.string "journeys start!\p"
	.string "Let me heal your Pokémon quick!$"

SouthCampus_TraciePostBattle_Text_2:
# 278 "data/maps/SouthCampus/scripts.pory"
	.string "I'm going to go on ahead to North\n"
	.string "Campus for orientation.\p"
	.string "Try not to take too long getting there.\n"
	.string "You don't want to be late!\p"
	.string "See you soon!$"
