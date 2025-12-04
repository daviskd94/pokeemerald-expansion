PlayerDorm_MapScripts::
# 2 "data/maps/PlayerDorm/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PlayerDorm/scripts.pory"
	map_script_2 VAR_PLAYERDORM_STATE, 0, PlayerDorm_WakeUp
	.2byte 0


SettingUniversalFlags::
# 8 "data/maps/PlayerDorm/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 9 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_CATCHING_PROFESSOR
# 10 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_HIDE_TRACIE_CYRUS
# 11 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_HIDE_PROFESSOR_HANZNEESTOZ
# 12 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_HIDE_TRACIE_LECTURE_HALL
	return


PlayerDorm_WakeUp::
# 17 "data/maps/PlayerDorm/scripts.pory"
	lockall
# 18 "data/maps/PlayerDorm/scripts.pory"
	call SettingUniversalFlags
# 20 "data/maps/PlayerDorm/scripts.pory"
	delay 80
# 21 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 22 "data/maps/PlayerDorm/scripts.pory"
	delay 40
# 23 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 24 "data/maps/PlayerDorm/scripts.pory"
	msgbox PlayerDorm_WakeUp_Text_0, MSGBOX_DEFAULT
# 25 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 26 "data/maps/PlayerDorm/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_0
# 28 "data/maps/PlayerDorm/scripts.pory"
	waitmovement
# 29 "data/maps/PlayerDorm/scripts.pory"
	hideobjectat LOCALID_TRACIE, MAP_PLAYER_DORM
# 30 "data/maps/PlayerDorm/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_PLAYER_DORM
# 31 "data/maps/PlayerDorm/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 32 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 33 "data/maps/PlayerDorm/scripts.pory"
	delay 80
# 34 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Door_Knocking
# 35 "data/maps/PlayerDorm/scripts.pory"
	delay 20
# 36 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_1
# 37 "data/maps/PlayerDorm/scripts.pory"
	playse SE_PIN
# 38 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 39 "data/maps/PlayerDorm/scripts.pory"
	delay 60
# 40 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_2
# 41 "data/maps/PlayerDorm/scripts.pory"
	playse SE_LEDGE
# 42 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 43 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 44 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Enter_Tracie
	return


Player_Dorm_Door_Knocking::
# 48 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 49 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 50 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 51 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 52 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 53 "data/maps/PlayerDorm/scripts.pory"
	waitse
	return


Player_Dorm_Enter_Tracie::
# 58 "data/maps/PlayerDorm/scripts.pory"
	playse SE_DOOR
# 59 "data/maps/PlayerDorm/scripts.pory"
	showobjectat LOCALID_TRACIE, MAP_PLAYER_DORM
# 60 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_0
# 61 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 62 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_1
# 63 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 64 "data/maps/PlayerDorm/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 65 "data/maps/PlayerDorm/scripts.pory"
	delay 40
# 66 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 67 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_0
# 68 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 69 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Approach
# 70 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 71 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_2
# 72 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 73 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 74 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_1
# 75 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 76 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_3
# 77 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 78 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 79 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_2
# 80 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 81 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Enter_Tracie_Movement_4
# 82 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 83 "data/maps/PlayerDorm/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 84 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Enter_Tracie_Text_3
# 85 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 86 "data/maps/PlayerDorm/scripts.pory"
	applymovement LOCALID_TRACIE, Player_Dorm_Tracie_Leaves
# 87 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 88 "data/maps/PlayerDorm/scripts.pory"
	hideobjectat LOCALID_TRACIE, MAP_PLAYER_DORM
# 89 "data/maps/PlayerDorm/scripts.pory"
	playse SE_EXIT
# 90 "data/maps/PlayerDorm/scripts.pory"
	removeobject LOCALID_TRACIE
# 91 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_HIDE_TRACIE
# 92 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 93 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 1
# 94 "data/maps/PlayerDorm/scripts.pory"
	releaseall
	end


# 98 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Approach:
# 99 "data/maps/PlayerDorm/scripts.pory"
	walk_up
# 99 "data/maps/PlayerDorm/scripts.pory"
	walk_up
# 99 "data/maps/PlayerDorm/scripts.pory"
	walk_up
# 100 "data/maps/PlayerDorm/scripts.pory"
	walk_left
# 100 "data/maps/PlayerDorm/scripts.pory"
	walk_left
# 100 "data/maps/PlayerDorm/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Tracie_Leaves:
# 104 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_right
# 104 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_right
# 104 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_right
# 105 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_down
# 105 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_down
# 105 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_down
	step_end

Player_Dorm_Take_Eevee::
# 109 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 2
# 110 "data/maps/PlayerDorm/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_ORAN_BERRY
# 111 "data/maps/PlayerDorm/scripts.pory"
	removeobject LOCALID_EEVEE
# 112 "data/maps/PlayerDorm/scripts.pory"
	updatefollowingmon
# 113 "data/maps/PlayerDorm/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Take_Eevee_Text_0
# 115 "data/maps/PlayerDorm/scripts.pory"
	waitfanfare
# 116 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_TAKE_EEVEE
# 117 "data/maps/PlayerDorm/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 118 "data/maps/PlayerDorm/scripts.pory"
	call Player_Dorm_Nickname_Eevee
# 119 "data/maps/PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_Nickname_Eevee::
# 124 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Nickname_Eevee_Text_0, MSGBOX_YESNO
# 125 "data/maps/PlayerDorm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Player_Dorm_Nickname_Eevee_2
Player_Dorm_Nickname_Eevee_1:
	return

Player_Dorm_Nickname_Eevee_2:
# 126 "data/maps/PlayerDorm/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 127 "data/maps/PlayerDorm/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Player_Dorm_Nickname_Eevee_1


Player_Dorm_EventScript_CheckPlayersPC::
# 133 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_0x8004, 1
# 134 "data/maps/PlayerDorm/scripts.pory"
	special DoPCTurnOnEffect
# 135 "data/maps/PlayerDorm/scripts.pory"
	playse SE_PC_ON
# 136 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_EventScript_CheckPlayersPC_Text_0, MSGBOX_DEFAULT
# 137 "data/maps/PlayerDorm/scripts.pory"
	special BedroomPC
# 138 "data/maps/PlayerDorm/scripts.pory"
	waitstate
# 139 "data/maps/PlayerDorm/scripts.pory"
	releaseall
	end


Player_Dorm_Trigger_CantLeave::
# 144 "data/maps/PlayerDorm/scripts.pory"
	lock
# 145 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Trigger_CantLeave_Text_0
# 146 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 147 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Dorm_Enter_Tracie_Movement_0
# 148 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 149 "data/maps/PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_NintendoSwitch::
# 154 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_NintendoSwitch_Text_0
# 155 "data/maps/PlayerDorm/scripts.pory"
	release
	end


Player_Dorm_Drawers::
# 160 "data/maps/PlayerDorm/scripts.pory"
	msgbox Player_Dorm_Drawers_Text_0
# 161 "data/maps/PlayerDorm/scripts.pory"
	release
	end


EventScript_New_TV::
# 166 "data/maps/PlayerDorm/scripts.pory"
	msgbox EventScript_New_TV_Text_0
# 167 "data/maps/PlayerDorm/scripts.pory"
	release
	end


# 27 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_0:
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	slide_right
# 27 "data/maps/PlayerDorm/scripts.pory"
	face_left
	step_end

# 36 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_1:
# 36 "data/maps/PlayerDorm/scripts.pory"
	face_down
# 36 "data/maps/PlayerDorm/scripts.pory"
	emote_exclamation_mark
	step_end

# 40 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_2:
# 40 "data/maps/PlayerDorm/scripts.pory"
	jump_right
	step_end

# 60 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_0:
# 60 "data/maps/PlayerDorm/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_1:
# 62 "data/maps/PlayerDorm/scripts.pory"
	face_down
	step_end

# 71 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_2:
# 71 "data/maps/PlayerDorm/scripts.pory"
	face_right
	step_end

# 76 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_3:
# 76 "data/maps/PlayerDorm/scripts.pory"
	walk_right
# 76 "data/maps/PlayerDorm/scripts.pory"
	walk_right
	step_end

# 81 "data/maps/PlayerDorm/scripts.pory"
Player_Dorm_Enter_Tracie_Movement_4:
# 81 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_left
# 81 "data/maps/PlayerDorm/scripts.pory"
	walk_fast_left
	step_end

PlayerDorm_WakeUp_Text_0:
# 24 "data/maps/PlayerDorm/scripts.pory"
	.string "Hello…? {PLAYER}?\p"
	.string "{PLAYER}, are you there?$"

Player_Dorm_Enter_Tracie_Text_0:
# 67 "data/maps/PlayerDorm/scripts.pory"
	.string "Ugh! Seriously?$"

Player_Dorm_Enter_Tracie_Text_1:
# 74 "data/maps/PlayerDorm/scripts.pory"
	.string "You're sleeping right now?\n"
	.string "Today of all days?\p"
	.string "Come on! You didn't actually forget,\n"
	.string "did you?\p"
	.string "Our senior orientation is today!\n"
	.string "I can't believe you!\p"
	.string "We've been dreaming of this day since\n"
	.string "we were kids!$"

Player_Dorm_Enter_Tracie_Text_2:
# 79 "data/maps/PlayerDorm/scripts.pory"
	.string "I can’t believe it…\n"
	.string "Me… Tracie!\p"
	.string "Soon to be grad and official Pokémon\n"
	.string "Trainer!$"

Player_Dorm_Enter_Tracie_Text_3:
# 84 "data/maps/PlayerDorm/scripts.pory"
	.string "Well, what are we waiting for!?\p"
	.string "Grab Eevee and let's go!\n"
	.string "I'm so excited!$"

Player_Dorm_Take_Eevee_Text_0:
# 114 "data/maps/PlayerDorm/scripts.pory"
	.string "{PLAYER} picked up their\npartner, Eevee!$"

Player_Dorm_Nickname_Eevee_Text_0:
# 124 "data/maps/PlayerDorm/scripts.pory"
	.string "Does Eevee have a nickname?$"

Player_Dorm_EventScript_CheckPlayersPC_Text_0:
# 136 "data/maps/PlayerDorm/scripts.pory"
	.string "{PLAYER} booted up the laptop.$"

Player_Dorm_Trigger_CantLeave_Text_0:
# 145 "data/maps/PlayerDorm/scripts.pory"
	.string "You can't leave without Eevee.$"

Player_Dorm_NintendoSwitch_Text_0:
# 154 "data/maps/PlayerDorm/scripts.pory"
	.string "It's a Nintendo Switch 2.\p"
	.string "There are two JoyCons attached to the\n"
	.string "sides.$"

Player_Dorm_Drawers_Text_0:
# 160 "data/maps/PlayerDorm/scripts.pory"
	.string "The drawers are filled with clothes and\n"
	.string "school supplies.$"

EventScript_New_TV_Text_0:
# 166 "data/maps/PlayerDorm/scripts.pory"
	.string "Mom would like this show…\n"
	.string "… … …\p"
	.string "Time to go!$"
