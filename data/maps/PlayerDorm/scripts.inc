PlayerDorm_MapScripts::
# 2 "data/maps/PlayerDorm/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PlayerDorm/scripts.pory"
	map_script_2 VAR_PLAYERDORM_STATE, 0, PlayerDorm_WakeUp
	.2byte 0


PlayerDorm_WakeUp::
# 12 "data/maps/PlayerDorm/scripts.pory"
	lockall
# 13 "data/maps/PlayerDorm/scripts.pory"
	hideobjectat LOCALID_TRACIE, MAP_PLAYER_DORM
# 14 "data/maps/PlayerDorm/scripts.pory"
	speakername Unknown
# 15 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_0
# 16 "data/maps/PlayerDorm/scripts.pory"
	delay 80
# 17 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 18 "data/maps/PlayerDorm/scripts.pory"
	delay 40
# 19 "data/maps/PlayerDorm/scripts.pory"
	msgbox PlayerDorm_WakeUp_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 21 "data/maps/PlayerDorm/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 22 "data/maps/PlayerDorm/scripts.pory"
	delay 80
# 23 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 24 "data/maps/PlayerDorm/scripts.pory"
	delay 20
# 25 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_1
# 26 "data/maps/PlayerDorm/scripts.pory"
	playse SE_PIN
# 27 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 28 "data/maps/PlayerDorm/scripts.pory"
	delay 60
# 29 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_2
# 30 "data/maps/PlayerDorm/scripts.pory"
	playse SE_LEDGE
# 31 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 32 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 33 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Enter_Tracie
	return


Player_Dorm_Door_Knocking::
# 37 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 38 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 39 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 40 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 41 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 42 "data/maps/PlayerDorm/scripts.pory"
	waitse
	return


Player_Dorm_Enter_Tracie::
# 47 "data/maps/PlayerDorm/scripts.pory"
	playse SE_DOOR
# 48 "data/maps/PlayerDorm/scripts.pory"
	showobjectat LOCALID_TRACIE, MAP_PLAYER_DORM
# 49 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_0
# 50 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 51 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_1
# 52 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 53 "data/maps/PlayerDorm/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 54 "data/maps/PlayerDorm/scripts.pory"
	delay 40
# 55 "data/maps/PlayerDorm/scripts.pory"
	speakername Tracie
# 56 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_0
# 57 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 58 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Approach
# 59 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 60 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_2
# 61 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 62 "data/maps/PlayerDorm/scripts.pory"
	speakername Tracie
# 63 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_1
# 64 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 65 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_3
# 66 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 67 "data/maps/PlayerDorm/scripts.pory"
	speakername Tracie
# 68 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_2
# 69 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 70 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_4
# 71 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 72 "data/maps/PlayerDorm/scripts.pory"
	speakername Tracie
# 73 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_3
# 74 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 75 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Leaves
# 76 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 77 "data/maps/PlayerDorm/scripts.pory"
	hideobjectat LOCALID_TRACIE, MAP_PLAYER_DORM
# 78 "data/maps/PlayerDorm/scripts.pory"
	playse SE_EXIT
# 79 "data/maps/PlayerDorm/scripts.pory"
	removeobject LOCALID_TRACIE
# 80 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_HIDE_TRACIE
# 81 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 82 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 1
# 83 "data/maps/PlayerDorm/scripts.pory"
	releaseall
	end


# 87 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Approach:
# 88 "data/maps/PlayerDorm/scripts.pory"
	walk_up
# 88 "data/maps/PlayerDorm/scripts.pory"
	walk_up
# 88 "data/maps/PlayerDorm/scripts.pory"
	walk_up
# 89 "data/maps/PlayerDorm/scripts.pory"
	walk_left
# 89 "data/maps/PlayerDorm/scripts.pory"
	walk_left
# 89 "data/maps/PlayerDorm/scripts.pory"
	walk_left
	step_end

# 92 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Leaves:
# 93 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_right
# 93 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_right
# 93 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_right
# 94 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_down
# 94 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_down
# 94 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_down
	step_end

Player_Dorm_Take_Eevee::
# 98 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 2
# 99 "data/maps/PlayerDorm/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_ORAN_BERRY
# 100 "data/maps/PlayerDorm/scripts.pory"
	removeobject LOCALID_EEVEE
# 101 "data/maps/PlayerDorm/scripts.pory"
	updatefollowingmon
# 102 "data/maps/PlayerDorm/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 103 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Take_Eevee_Text_0
# 104 "data/maps/PlayerDorm/scripts.pory"
	waitfanfare
# 105 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_TAKE_EEVEE
# 106 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 107 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Nickname_Eevee
# 108 "data/maps/PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_Nickname_Eevee::
# 113 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Nickname_Eevee_Text_0, MSGBOX_YESNO
# 114 "data/maps/PlayerDorm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Player_Dorm_Nickname_Eevee_2
Player_Dorm_Nickname_Eevee_1:
	return

Player_Dorm_Nickname_Eevee_2:
# 115 "data/maps/PlayerDorm/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 116 "data/maps/PlayerDorm/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Player_Dorm_Nickname_Eevee_1


Player_Dorm_EventScript_CheckPlayersPC::
# 122 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_0x8004, 1
# 123 "data/maps/PlayerDorm/scripts.pory"
	special DoPCTurnOnEffect
# 124 "data/maps/PlayerDorm/scripts.pory"
	playse SE_PC_ON
# 125 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_EventScript_CheckPlayersPC_Text_0, MSGBOX_DEFAULT
# 126 "data/maps/PlayerDorm/scripts.pory"
	special BedroomPC
# 127 "data/maps/PlayerDorm/scripts.pory"
	waitstate
# 128 "data/maps/PlayerDorm/scripts.pory"
	releaseall
	end


Player_Dorm_Trigger_CantLeave::
# 133 "data/maps/PlayerDorm/scripts.pory"
	lock
# 134 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Trigger_CantLeave_Text_0
# 135 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 136 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_0
# 137 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 138 "data/maps/PlayerDorm/scripts.pory"
	release
	end


# 15 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_0:
# 15 "data/maps/PlayerDorm/scripts.pory"
	face_left
	step_end

# 25 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_1:
# 25 "data/maps/PlayerDorm/scripts.pory"
	face_down
# 25 "data/maps/PlayerDorm/scripts.pory"
	emote_exclamation_mark
	step_end

# 29 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_2:
# 29 "data/maps/PlayerDorm/scripts.pory"
	jump_right
	step_end

# 49 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_0:
# 49 "data/maps/PlayerDorm/scripts.pory"
	walk_up
	step_end

# 51 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_1:
# 51 "data/maps/PlayerDorm/scripts.pory"
	face_down
	step_end

# 60 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_2:
# 60 "data/maps/PlayerDorm/scripts.pory"
	face_right
	step_end

# 65 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_3:
# 65 "data/maps/PlayerDorm/scripts.pory"
	walk_right
# 65 "data/maps/PlayerDorm/scripts.pory"
	walk_right
	step_end

# 70 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_4:
# 70 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_left
# 70 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_left
	step_end

PlayerDorm_WakeUp_Text_0:
# 19 "data/maps/PlayerDorm/scripts.pory"
	.string "Hello…? {PLAYER}?\p"
	.string "{PLAYER}, are you there?$"

Player_Dorm_Enter_Tracie_Text_0:
# 56 "data/maps/PlayerDorm/scripts.pory"
	.string "Ugh! Seriously?$"

Player_Dorm_Enter_Tracie_Text_1:
# 63 "data/maps/PlayerDorm/scripts.pory"
	.string "You're sleeping right now?\n"
	.string "Today of all days?\p"
	.string "Come on! You didn't actually\n"
	.string "forget, did you?\p"
	.string "Our senior orientation is today!\n"
	.string "I can't believe you!\p"
	.string "We've been dreaming of this day since\n"
	.string "we were kids!$"

Player_Dorm_Enter_Tracie_Text_2:
# 68 "data/maps/PlayerDorm/scripts.pory"
	.string "I can’t believe it…\n"
	.string "Me… Tracie!\p"
	.string "Soon to be grad and an official Pokémon\n"
	.string "Trainer!$"

Player_Dorm_Enter_Tracie_Text_3:
# 73 "data/maps/PlayerDorm/scripts.pory"
	.string "Well, what are we waiting for!?\p"
	.string "Grab Eevee and let's go!\n"
	.string "I'm so excited!$"

Player_Dorm_Take_Eevee_Text_0:
# 103 "data/maps/PlayerDorm/scripts.pory"
	.string "{PLAYER} picked up their partner, Eevee!$"

Player_Dorm_Nickname_Eevee_Text_0:
# 113 "data/maps/PlayerDorm/scripts.pory"
	.string "Does Eevee have a nickname?$"

Player_Dorm_EventScript_CheckPlayersPC_Text_0:
# 125 "data/maps/PlayerDorm/scripts.pory"
	.string "{PLAYER} booted up the laptop.$"

Player_Dorm_Trigger_CantLeave_Text_0:
# 134 "data/maps/PlayerDorm/scripts.pory"
	.string "You can't leave without Eevee.$"

Tracie::
# 7 "data/maps/PlayerDorm/scripts.pory"
	.string "Tracie$"
