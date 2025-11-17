PlayerDorm_MapScripts::
# 2 "data/maps/PlayerDorm/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PlayerDorm/scripts.pory"
	map_script_2 VAR_PLAYERDORM_STATE, 0, PlayerDorm_WakeUp
	.2byte 0


PlayerDorm_WakeUp::
# 13 "data/maps/PlayerDorm/scripts.pory"
	lockall
# 14 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_CATCHING_PROFESSOR
# 16 "data/maps/PlayerDorm/scripts.pory"
	delay 80
# 17 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 18 "data/maps/PlayerDorm/scripts.pory"
	delay 40
# 19 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 20 "data/maps/PlayerDorm/scripts.pory"
	msgbox PlayerDorm_WakeUp_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 22 "data/maps/PlayerDorm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_0
# 24 "data/maps/PlayerDorm/scripts.pory"
	waitmovement
# 25 "data/maps/PlayerDorm/scripts.pory"
	hideobjectat LOCALID_TRACIE, MAP_PLAYER_DORM
# 26 "data/maps/PlayerDorm/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_PLAYER_DORM
# 27 "data/maps/PlayerDorm/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 28 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 29 "data/maps/PlayerDorm/scripts.pory"
	delay 80
# 30 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 31 "data/maps/PlayerDorm/scripts.pory"
	delay 20
# 32 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_1
# 33 "data/maps/PlayerDorm/scripts.pory"
	playse SE_PIN
# 34 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 35 "data/maps/PlayerDorm/scripts.pory"
	delay 60
# 36 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_2
# 37 "data/maps/PlayerDorm/scripts.pory"
	playse SE_LEDGE
# 38 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 39 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 40 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Enter_Tracie
	return


Player_Dorm_Door_Knocking::
# 44 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 45 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 46 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 47 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 48 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 49 "data/maps/PlayerDorm/scripts.pory"
	waitse
	return


Player_Dorm_Enter_Tracie::
# 54 "data/maps/PlayerDorm/scripts.pory"
	playse SE_DOOR
# 55 "data/maps/PlayerDorm/scripts.pory"
	showobjectat LOCALID_TRACIE, MAP_PLAYER_DORM
# 56 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_0
# 57 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 58 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_1
# 59 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 60 "data/maps/PlayerDorm/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 61 "data/maps/PlayerDorm/scripts.pory"
	delay 40
# 62 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 63 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_0
# 64 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 65 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Approach
# 66 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 67 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_2
# 68 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 69 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 70 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_1
# 71 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 72 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_3
# 73 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 74 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 75 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_2
# 76 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 77 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_4
# 78 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 79 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 80 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_3
# 81 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 82 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Leaves
# 83 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 84 "data/maps/PlayerDorm/scripts.pory"
	hideobjectat LOCALID_TRACIE, MAP_PLAYER_DORM
# 85 "data/maps/PlayerDorm/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/PlayerDorm/scripts.pory"
	removeobject LOCALID_TRACIE
# 87 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_HIDE_TRACIE
# 88 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 89 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 1
# 90 "data/maps/PlayerDorm/scripts.pory"
	releaseall
	end


# 94 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Approach:
# 95 "data/maps/PlayerDorm/scripts.pory"
	walk_up
# 95 "data/maps/PlayerDorm/scripts.pory"
	walk_up
# 95 "data/maps/PlayerDorm/scripts.pory"
	walk_up
# 96 "data/maps/PlayerDorm/scripts.pory"
	walk_left
# 96 "data/maps/PlayerDorm/scripts.pory"
	walk_left
# 96 "data/maps/PlayerDorm/scripts.pory"
	walk_left
	step_end

# 99 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Leaves:
# 100 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_right
# 100 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_right
# 100 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_right
# 101 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_down
# 101 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_down
# 101 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_down
	step_end

Player_Dorm_Take_Eevee::
# 105 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 2
# 106 "data/maps/PlayerDorm/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_ORAN_BERRY
# 107 "data/maps/PlayerDorm/scripts.pory"
	removeobject LOCALID_EEVEE
# 108 "data/maps/PlayerDorm/scripts.pory"
	updatefollowingmon
# 109 "data/maps/PlayerDorm/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 110 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Take_Eevee_Text_0
# 111 "data/maps/PlayerDorm/scripts.pory"
	waitfanfare
# 112 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_TAKE_EEVEE
# 113 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 114 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Nickname_Eevee
# 115 "data/maps/PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_Nickname_Eevee::
# 120 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Nickname_Eevee_Text_0, MSGBOX_YESNO
# 121 "data/maps/PlayerDorm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Player_Dorm_Nickname_Eevee_2
Player_Dorm_Nickname_Eevee_1:
	return

Player_Dorm_Nickname_Eevee_2:
# 122 "data/maps/PlayerDorm/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 123 "data/maps/PlayerDorm/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Player_Dorm_Nickname_Eevee_1


Player_Dorm_EventScript_CheckPlayersPC::
# 129 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_0x8004, 1
# 130 "data/maps/PlayerDorm/scripts.pory"
	special DoPCTurnOnEffect
# 131 "data/maps/PlayerDorm/scripts.pory"
	playse SE_PC_ON
# 132 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_EventScript_CheckPlayersPC_Text_0, MSGBOX_DEFAULT
# 133 "data/maps/PlayerDorm/scripts.pory"
	special BedroomPC
# 134 "data/maps/PlayerDorm/scripts.pory"
	waitstate
# 135 "data/maps/PlayerDorm/scripts.pory"
	releaseall
	end


Player_Dorm_Trigger_CantLeave::
# 140 "data/maps/PlayerDorm/scripts.pory"
	lock
# 141 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Trigger_CantLeave_Text_0
# 142 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 143 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_0
# 144 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 145 "data/maps/PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_NintendoSwitch::
# 150 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_NintendoSwitch_Text_0
# 151 "data/maps/PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_Drawers::
# 156 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Drawers_Text_0
# 157 "data/maps/PlayerDorm/scripts.pory"
	release
	end


EventScript_New_TV::
# 162 "data/maps/PlayerDorm/scripts.pory"
	msgbox EventScript_New_TV_Text_0
# 163 "data/maps/PlayerDorm/scripts.pory"
	release
	end


# 23 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_0:
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 23 "data/maps/PlayerDorm/scripts.pory"
	face_left
	step_end

# 32 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_1:
# 32 "data/maps/PlayerDorm/scripts.pory"
	face_down
# 32 "data/maps/PlayerDorm/scripts.pory"
	emote_exclamation_mark
	step_end

# 36 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_2:
# 36 "data/maps/PlayerDorm/scripts.pory"
	jump_right
	step_end

# 56 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_0:
# 56 "data/maps/PlayerDorm/scripts.pory"
	walk_up
	step_end

# 58 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_1:
# 58 "data/maps/PlayerDorm/scripts.pory"
	face_down
	step_end

# 67 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_2:
# 67 "data/maps/PlayerDorm/scripts.pory"
	face_right
	step_end

# 72 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_3:
# 72 "data/maps/PlayerDorm/scripts.pory"
	walk_right
# 72 "data/maps/PlayerDorm/scripts.pory"
	walk_right
	step_end

# 77 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_4:
# 77 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_left
# 77 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_left
	step_end

PlayerDorm_WakeUp_Text_0:
# 20 "data/maps/PlayerDorm/scripts.pory"
	.string "Hello…? {PLAYER}?\p"
	.string "{PLAYER}, are you there?$"

Player_Dorm_Enter_Tracie_Text_0:
# 63 "data/maps/PlayerDorm/scripts.pory"
	.string "Ugh! Seriously?$"

Player_Dorm_Enter_Tracie_Text_1:
# 70 "data/maps/PlayerDorm/scripts.pory"
	.string "You're sleeping right now?\n"
	.string "Today of all days?\p"
	.string "Come on! You didn't actually\n"
	.string "forget, did you?\p"
	.string "Our senior orientation is today!\n"
	.string "I can't believe you!\p"
	.string "We've been dreaming of this day since\n"
	.string "we were kids!$"

Player_Dorm_Enter_Tracie_Text_2:
# 75 "data/maps/PlayerDorm/scripts.pory"
	.string "I can’t believe it…\n"
	.string "Me… Tracie!\p"
	.string "Soon to be grad and official Pokémon\n"
	.string "Trainer!$"

Player_Dorm_Enter_Tracie_Text_3:
# 80 "data/maps/PlayerDorm/scripts.pory"
	.string "Well, what are we waiting for!?\p"
	.string "Grab Eevee and let's go!\n"
	.string "I'm so excited!$"

Player_Dorm_Take_Eevee_Text_0:
# 110 "data/maps/PlayerDorm/scripts.pory"
	.string "{PLAYER} picked up their\npartner, Eevee!$"

Player_Dorm_Nickname_Eevee_Text_0:
# 120 "data/maps/PlayerDorm/scripts.pory"
	.string "Does Eevee have a nickname?$"

Player_Dorm_EventScript_CheckPlayersPC_Text_0:
# 132 "data/maps/PlayerDorm/scripts.pory"
	.string "{PLAYER} booted up the laptop.$"

Player_Dorm_Trigger_CantLeave_Text_0:
# 141 "data/maps/PlayerDorm/scripts.pory"
	.string "You can't leave without Eevee.$"

Player_Dorm_NintendoSwitch_Text_0:
# 150 "data/maps/PlayerDorm/scripts.pory"
	.string "It's a Nintendo Switch 2.\p"
	.string "There are two JoyCons attached to the\n"
	.string "sides.$"

Player_Dorm_Drawers_Text_0:
# 156 "data/maps/PlayerDorm/scripts.pory"
	.string "The drawers are filled with clothes and\n"
	.string "school supplies.$"

EventScript_New_TV_Text_0:
# 162 "data/maps/PlayerDorm/scripts.pory"
	.string "Mom would like this show…\n"
	.string "… … …\p"
	.string "Time to go!$"

Tracie::
# 7 "data/maps/PlayerDorm/scripts.pory"
	.string "Tracie$"
