PlayerDorm_MapScripts::
# 2 "data/maps/PlayerDorm/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerDorm_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PlayerDorm/scripts.pory"
	map_script_2 VAR_PLAYERDORM_STATE, 0, PlayerDorm_WakeUp
	.2byte 0


PlayerDorm_WakeUp::
# 8 "data/maps/PlayerDorm/scripts.pory"
	lockall
# 9 "data/maps/PlayerDorm/scripts.pory"
	speakername Unknown
# 10 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_0
# 11 "data/maps/PlayerDorm/scripts.pory"
	delay 80
# 12 "data/maps/PlayerDorm/scripts.pory"
	call DoorKnocking
# 13 "data/maps/PlayerDorm/scripts.pory"
	delay 40
# 14 "data/maps/PlayerDorm/scripts.pory"
	msgbox PlayerDorm_WakeUp_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/PlayerDorm/scripts.pory"
	closemessage
# 16 "data/maps/PlayerDorm/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 17 "data/maps/PlayerDorm/scripts.pory"
	delay 80
# 18 "data/maps/PlayerDorm/scripts.pory"
	call DoorKnocking
# 19 "data/maps/PlayerDorm/scripts.pory"
	delay 20
# 20 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_1
# 21 "data/maps/PlayerDorm/scripts.pory"
	playse SE_PIN
# 22 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 23 "data/maps/PlayerDorm/scripts.pory"
	delay 60
# 24 "data/maps/PlayerDorm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerDorm_WakeUp_Movement_2
# 25 "data/maps/PlayerDorm/scripts.pory"
	playse SE_LEDGE
# 26 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 27 "data/maps/PlayerDorm/scripts.pory"
	waitmovement 0
# 28 "data/maps/PlayerDorm/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 29 "data/maps/PlayerDorm/scripts.pory"
	setvar VAR_PLAYERDORM_STATE, 1
# 30 "data/maps/PlayerDorm/scripts.pory"
	releaseall
	return


DoorKnocking::
# 34 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 35 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 36 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 37 "data/maps/PlayerDorm/scripts.pory"
	waitse
# 38 "data/maps/PlayerDorm/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 39 "data/maps/PlayerDorm/scripts.pory"
	waitse
	return


# 10 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_0:
# 10 "data/maps/PlayerDorm/scripts.pory"
	face_left
	step_end

# 20 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_1:
# 20 "data/maps/PlayerDorm/scripts.pory"
	face_down
# 20 "data/maps/PlayerDorm/scripts.pory"
	emote_exclamation_mark
	step_end

# 24 "data/maps/PlayerDorm/scripts.pory"
PlayerDorm_WakeUp_Movement_2:
# 24 "data/maps/PlayerDorm/scripts.pory"
	jump_right
	step_end

PlayerDorm_WakeUp_Text_0:
# 14 "data/maps/PlayerDorm/scripts.pory"
	.string "Hello? {PLAYER}, are you there?$"
