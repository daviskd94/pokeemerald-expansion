Route1New_MapScripts::
	.byte 0


SignScript_Route1::
# 4 "data/maps/Route1New/scripts.pory"
	msgbox SignScript_Route1_Text_0
# 5 "data/maps/Route1New/scripts.pory"
	closemessage
	return


Route1_ArriveAtBoat::
# 9 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_0
# 10 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 11 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 12 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_1
# 13 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 15 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_0
# 16 "data/maps/Route1New/scripts.pory"
	closemessage
# 17 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_2
# 18 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 20 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_1
# 21 "data/maps/Route1New/scripts.pory"
	closemessage
# 22 "data/maps/Route1New/scripts.pory"
	delay 20
# 23 "data/maps/Route1New/scripts.pory"
	addobject LOCALID_ROUTE_1_ROTCART
# 24 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_ROTCART, Route1_ArriveAtBoat_Movement_3
# 25 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_4
# 27 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_5
# 28 "data/maps/Route1New/scripts.pory"
	playse SE_PIN
# 29 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_ROTCART, Route1_ArriveAtBoat_Movement_6
# 30 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 31 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_2
# 32 "data/maps/Route1New/scripts.pory"
	closemessage
# 33 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 34 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_3
# 35 "data/maps/Route1New/scripts.pory"
	closemessage
# 36 "data/maps/Route1New/scripts.pory"
	delay 20
# 37 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_1
# 38 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_2
# 39 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 41 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_4
# 42 "data/maps/Route1New/scripts.pory"
	closemessage
# 43 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 44 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_5
# 45 "data/maps/Route1New/scripts.pory"
	closemessage
# 46 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_7
# 47 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_7
# 48 "data/maps/Route1New/scripts.pory"
	delay 5
# 49 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BLACK_BELT, Route1_ArriveAtBoat_Movement_7
# 50 "data/maps/Route1New/scripts.pory"
	delay 10
# 51 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_SCHOOL_KID_M, Route1_ArriveAtBoat_Movement_7
# 52 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_M, Route1_ArriveAtBoat_Movement_7
# 53 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_F, Route1_ArriveAtBoat_Movement_7
# 54 "data/maps/Route1New/scripts.pory"
	delay 5
# 55 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_RANCHER, Route1_ArriveAtBoat_Movement_7
# 56 "data/maps/Route1New/scripts.pory"
	special SpawnCameraObject
# 57 "data/maps/Route1New/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 28, 30
# 58 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_CAMERA, Route1_ArriveAtBoat_Movement_8
# 59 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route1New/scripts.pory"
	playbgm MUS_B_TOWER, FALSE
# 61 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_MARIO
# 62 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_6
# 63 "data/maps/Route1New/scripts.pory"
	closemessage
# 64 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_CAMERA, Route1_ArriveAtBoat_Movement_9
# 65 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_CAMERA
# 67 "data/maps/Route1New/scripts.pory"
	special RemoveCameraObject
# 68 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_2
# 69 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_1
# 70 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_MARIO, Route1_ArriveAtBoat_Movement_10
# 71 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_MAPLE, Route1_ArriveAtBoat_Movement_11
# 73 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_ROTCART, Route1_ArriveAtBoat_Movement_12
# 74 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BLACK_BELT, Route1_ArriveAtBoat_Movement_13
# 75 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_SCHOOL_KID_M, Route1_ArriveAtBoat_Movement_14
# 77 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_M, Route1_ArriveAtBoat_Movement_15
# 78 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_F, Route1_ArriveAtBoat_Movement_16
# 79 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_RANCHER, Route1_ArriveAtBoat_Movement_17
# 80 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_7
# 81 "data/maps/Route1New/scripts.pory"
	closemessage
# 82 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_18
# 84 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route1New/scripts.pory"
	setflag FLAG_HIDE_ROUTE_1_NPCS
# 86 "data/maps/Route1New/scripts.pory"
	setflag FLAG_HIDE_ROUTE_1_ROTCART
# 87 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_TRACIE
# 88 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_ROTCART
# 89 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BLACK_BELT
# 90 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_SCHOOL_KID_M
# 91 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BREEDER_M
# 92 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BREEDER_F
# 93 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_RANCHER
# 94 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_MARIO
# 95 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_MAPLE
# 96 "data/maps/Route1New/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 97 "data/maps/Route1New/scripts.pory"
	release
	end


TestBoat_Route1::
# 102 "data/maps/Route1New/scripts.pory"
	lock
# 103 "data/maps/Route1New/scripts.pory"
	faceplayer
# 104 "data/maps/Route1New/scripts.pory"
	msgbox TestBoat_Route1_Text_0
# 105 "data/maps/Route1New/scripts.pory"
	closemessage
# 106 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 107 "data/maps/Route1New/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 108 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BOAT_BACK, TestBoat_Route1_Movement_0
# 109 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BOAT_FRONT, TestBoat_Route1_Movement_0
# 110 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route1New/scripts.pory"
	release
	end


# 9 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_0:
# 9 "data/maps/Route1New/scripts.pory"
	walk_down
# 9 "data/maps/Route1New/scripts.pory"
	walk_down
# 9 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 12 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_1:
# 12 "data/maps/Route1New/scripts.pory"
	face_up
	step_end

# 17 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_2:
# 17 "data/maps/Route1New/scripts.pory"
	face_down
	step_end

# 24 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_3:
# 24 "data/maps/Route1New/scripts.pory"
	walk_down
# 24 "data/maps/Route1New/scripts.pory"
	walk_down
# 24 "data/maps/Route1New/scripts.pory"
	walk_down
# 24 "data/maps/Route1New/scripts.pory"
	walk_down
# 24 "data/maps/Route1New/scripts.pory"
	walk_down
# 24 "data/maps/Route1New/scripts.pory"
	walk_left
# 24 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 26 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_4:
# 26 "data/maps/Route1New/scripts.pory"
	face_left
	step_end

# 27 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_5:
# 27 "data/maps/Route1New/scripts.pory"
	face_left
# 27 "data/maps/Route1New/scripts.pory"
	emote_exclamation_mark
	step_end

# 29 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_6:
# 29 "data/maps/Route1New/scripts.pory"
	walk_down
# 29 "data/maps/Route1New/scripts.pory"
	walk_down
# 29 "data/maps/Route1New/scripts.pory"
	walk_left
# 29 "data/maps/Route1New/scripts.pory"
	walk_left
# 29 "data/maps/Route1New/scripts.pory"
	face_right
	step_end

# 46 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_7:
# 46 "data/maps/Route1New/scripts.pory"
	face_right
	step_end

# 58 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_8:
# 58 "data/maps/Route1New/scripts.pory"
	walk_right
# 58 "data/maps/Route1New/scripts.pory"
	walk_right
# 58 "data/maps/Route1New/scripts.pory"
	walk_down
# 58 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 64 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_9:
# 64 "data/maps/Route1New/scripts.pory"
	walk_left
# 64 "data/maps/Route1New/scripts.pory"
	walk_left
# 64 "data/maps/Route1New/scripts.pory"
	walk_up
# 64 "data/maps/Route1New/scripts.pory"
	walk_left
	step_end

# 70 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_10:
# 70 "data/maps/Route1New/scripts.pory"
	walk_down
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 71 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_11:
# 71 "data/maps/Route1New/scripts.pory"
	walk_down
# 71 "data/maps/Route1New/scripts.pory"
	walk_down
# 71 "data/maps/Route1New/scripts.pory"
	walk_right
# 71 "data/maps/Route1New/scripts.pory"
	walk_right
# 71 "data/maps/Route1New/scripts.pory"
	walk_right
# 71 "data/maps/Route1New/scripts.pory"
	walk_right
# 71 "data/maps/Route1New/scripts.pory"
	walk_right
# 71 "data/maps/Route1New/scripts.pory"
	walk_right
# 71 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 73 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_12:
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
# 73 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 74 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_13:
# 74 "data/maps/Route1New/scripts.pory"
	walk_down
# 74 "data/maps/Route1New/scripts.pory"
	walk_down
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
# 74 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 75 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_14:
# 75 "data/maps/Route1New/scripts.pory"
	walk_up
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
# 75 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 77 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_15:
# 77 "data/maps/Route1New/scripts.pory"
	walk_up
# 77 "data/maps/Route1New/scripts.pory"
	walk_up
# 77 "data/maps/Route1New/scripts.pory"
	walk_right
# 77 "data/maps/Route1New/scripts.pory"
	walk_right
# 77 "data/maps/Route1New/scripts.pory"
	walk_right
# 77 "data/maps/Route1New/scripts.pory"
	walk_right
# 77 "data/maps/Route1New/scripts.pory"
	walk_right
# 77 "data/maps/Route1New/scripts.pory"
	walk_right
# 77 "data/maps/Route1New/scripts.pory"
	walk_right
# 77 "data/maps/Route1New/scripts.pory"
	walk_right
# 77 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 78 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_16:
# 78 "data/maps/Route1New/scripts.pory"
	walk_up
# 78 "data/maps/Route1New/scripts.pory"
	walk_right
# 78 "data/maps/Route1New/scripts.pory"
	walk_right
# 78 "data/maps/Route1New/scripts.pory"
	walk_right
# 78 "data/maps/Route1New/scripts.pory"
	walk_right
# 78 "data/maps/Route1New/scripts.pory"
	walk_right
# 78 "data/maps/Route1New/scripts.pory"
	walk_right
# 78 "data/maps/Route1New/scripts.pory"
	walk_right
# 78 "data/maps/Route1New/scripts.pory"
	walk_right
# 78 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 79 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_17:
# 79 "data/maps/Route1New/scripts.pory"
	walk_up
# 79 "data/maps/Route1New/scripts.pory"
	walk_up
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
# 79 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 83 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_18:
# 83 "data/maps/Route1New/scripts.pory"
	walk_down
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
# 83 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 108 "data/maps/Route1New/scripts.pory"
TestBoat_Route1_Movement_0:
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route1New/scripts.pory"
	walk_slow_right
	step_end

SignScript_Route1_Text_0:
# 4 "data/maps/Route1New/scripts.pory"
	.string "Tractor University\nNorth Campus {UP_ARROW} South Campus {DOWN_ARROW}$"

Route1_ArriveAtBoat_Text_0:
# 15 "data/maps/Route1New/scripts.pory"
	.string "There you are, {PLAYER}!\n"
	.string "You're such a Slowpoke!$"

Route1_ArriveAtBoat_Text_1:
# 20 "data/maps/Route1New/scripts.pory"
	.string "Now we're just waiting on Rotcart…\n"
	.string "Think he's going to show up?$"

Route1_ArriveAtBoat_Text_2:
# 31 "data/maps/Route1New/scripts.pory"
	.string "Oh…!\n"
	.string "Never mind!$"

Route1_ArriveAtBoat_Text_3:
# 34 "data/maps/Route1New/scripts.pory"
	.string "… … …$"

Route1_ArriveAtBoat_Text_4:
# 41 "data/maps/Route1New/scripts.pory"
	.string "I guess that's everybody then!$"

Route1_ArriveAtBoat_Text_5:
# 44 "data/maps/Route1New/scripts.pory"
	.string "Alright, everybody!\nListen up!$"

Route1_ArriveAtBoat_Text_6:
# 62 "data/maps/Route1New/scripts.pory"
	.string "Hi, everybody!\n"
	.string "Thank you all for making it down here!\p"
	.string "Before we get started, I just want to\n"
	.string "say how proud we are to have you all as\l"
	.string "students.\p"
	.string "You are the future of Tractoria, and we\n"
	.string "know you'll do great things!\p"
	.string "Upon boarding, you'll each have\n"
	.string "your own cabin to settle into.\p"
	.string "Feel free to explore the boat and\n"
	.string "make yourselves at home!\p"
	.string "It will be a long journey,\n"
	.string "after all!\p"
	.string "Professor Maple and I will be\n"
	.string "accompanying you to make sure\l"
	.string "everything goes smoothly.\p"
	.string "If you need anything, don't hesitate\n"
	.string "to ask one of us!\p"
	.string "Once you're ready,\n"
	.string "speak with the Captain to board!$"

Route1_ArriveAtBoat_Text_7:
# 80 "data/maps/Route1New/scripts.pory"
	.string "Wow… This ship is huge!\p"
	.string "This is officially the start of our\n"
	.string "adventure, {PLAYER}!\p"
	.string "I can only imagine all the amazing\n"
	.string "things we'll see and do!\p"
	.string "I'll see you on board, okay?$"

TestBoat_Route1_Text_0:
# 104 "data/maps/Route1New/scripts.pory"
	.string "Boat leaving$"
