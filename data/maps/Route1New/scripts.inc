Route1New_MapScripts::
	.byte 0


SignScript_Route1::
# 4 "data/maps/Route1New/scripts.pory"
	msgbox SignScript_Route1_Text_0, MSGBOX_SIGN
# 5 "data/maps/Route1New/scripts.pory"
	closemessage
	end


Route1_WalkUpToBoat1::
# 10 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_WalkUpToBoat1_Movement_0
# 11 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route1New/scripts.pory"
	call Route1_ArriveAtBoat
	return


Route1_WalkUpToBoat2::
# 16 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_WalkUpToBoat2_Movement_0
# 17 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route1New/scripts.pory"
	call Route1_ArriveAtBoat
	return


Route1_ArriveAtBoat::
# 23 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 24 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_0
# 25 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 27 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_0
# 28 "data/maps/Route1New/scripts.pory"
	closemessage
# 29 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_1
# 30 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 32 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_1
# 33 "data/maps/Route1New/scripts.pory"
	closemessage
# 34 "data/maps/Route1New/scripts.pory"
	delay 20
# 35 "data/maps/Route1New/scripts.pory"
	addobject LOCALID_ROUTE_1_ROTCART
# 36 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_ROTCART, Route1_ArriveAtBoat_Movement_2
# 37 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_3
# 39 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_4
# 40 "data/maps/Route1New/scripts.pory"
	playse SE_PIN
# 41 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_ROTCART, Route1_ArriveAtBoat_Movement_5
# 42 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 43 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_2
# 44 "data/maps/Route1New/scripts.pory"
	closemessage
# 45 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 46 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_3
# 47 "data/maps/Route1New/scripts.pory"
	closemessage
# 48 "data/maps/Route1New/scripts.pory"
	delay 20
# 49 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_0
# 50 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_1
# 51 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 53 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_4
# 54 "data/maps/Route1New/scripts.pory"
	closemessage
# 55 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 56 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_5
# 57 "data/maps/Route1New/scripts.pory"
	closemessage
# 58 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_6
# 59 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_6
# 60 "data/maps/Route1New/scripts.pory"
	delay 5
# 61 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BLACK_BELT, Route1_ArriveAtBoat_Movement_6
# 62 "data/maps/Route1New/scripts.pory"
	delay 10
# 63 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_SCHOOL_KID_M, Route1_ArriveAtBoat_Movement_6
# 64 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_M, Route1_ArriveAtBoat_Movement_6
# 65 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_F, Route1_ArriveAtBoat_Movement_6
# 66 "data/maps/Route1New/scripts.pory"
	delay 5
# 67 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_RANCHER, Route1_ArriveAtBoat_Movement_6
# 68 "data/maps/Route1New/scripts.pory"
	special SpawnCameraObject
# 69 "data/maps/Route1New/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 28, 30
# 70 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_CAMERA, Route1_ArriveAtBoat_Movement_7
# 71 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route1New/scripts.pory"
	playbgm MUS_B_TOWER, TRUE
# 73 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_MARIO
# 74 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_6
# 75 "data/maps/Route1New/scripts.pory"
	closemessage
# 76 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_CAMERA, Route1_ArriveAtBoat_Movement_8
# 77 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_CAMERA
# 79 "data/maps/Route1New/scripts.pory"
	special RemoveCameraObject
# 80 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_1
# 81 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_0
# 82 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_MARIO, Route1_ArriveAtBoat_Movement_9
# 83 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_MAPLE, Route1_ArriveAtBoat_Movement_10
# 85 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_ROTCART, Route1_ArriveAtBoat_Movement_11
# 86 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BLACK_BELT, Route1_ArriveAtBoat_Movement_12
# 87 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_SCHOOL_KID_M, Route1_ArriveAtBoat_Movement_13
# 89 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_M, Route1_ArriveAtBoat_Movement_14
# 90 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_F, Route1_ArriveAtBoat_Movement_15
# 91 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_RANCHER, Route1_ArriveAtBoat_Movement_16
# 92 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 93 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_7
# 94 "data/maps/Route1New/scripts.pory"
	closemessage
# 95 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_17
# 97 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route1New/scripts.pory"
	setflag FLAG_HIDE_ROUTE_1_NPCS
# 99 "data/maps/Route1New/scripts.pory"
	setflag FLAG_HIDE_ROUTE_1_ROTCART
# 100 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_TRACIE
# 101 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_ROTCART
# 102 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BLACK_BELT
# 103 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_SCHOOL_KID_M
# 104 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BREEDER_M
# 105 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BREEDER_F
# 106 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_RANCHER
# 107 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_MARIO
# 108 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_MAPLE
# 109 "data/maps/Route1New/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 110 "data/maps/Route1New/scripts.pory"
	release
	end


Route1_Captain::
# 115 "data/maps/Route1New/scripts.pory"
	lock
# 116 "data/maps/Route1New/scripts.pory"
	faceplayer
# 117 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_ACRE
# 118 "data/maps/Route1New/scripts.pory"
	msgbox Route1_Captain_Text_0, MSGBOX_YESNO
# 119 "data/maps/Route1New/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_Captain_1
# 126 "data/maps/Route1New/scripts.pory"
	closemessage
# 127 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_ACRE
# 128 "data/maps/Route1New/scripts.pory"
	msgbox Route1_Captain_Text_2
# 129 "data/maps/Route1New/scripts.pory"
	closemessage
# 130 "data/maps/Route1New/scripts.pory"
	release
	end

Route1_Captain_1:
# 120 "data/maps/Route1New/scripts.pory"
	closemessage
# 121 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_ACRE
# 122 "data/maps/Route1New/scripts.pory"
	msgbox Route1_Captain_Text_1
# 123 "data/maps/Route1New/scripts.pory"
	closemessage
# 124 "data/maps/Route1New/scripts.pory"
	goto Route1_BoardingBoat
	return


Route1_BoardingBoat::
# 136 "data/maps/Route1New/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 137 "data/maps/Route1New/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/Route1New/scripts.pory"
	case DIR_SOUTH, Route1_BoardingBoat_3
# 142 "data/maps/Route1New/scripts.pory"
	case DIR_EAST, Route1_BoardingBoat_4
Route1_BoardingBoat_1:
# 146 "data/maps/Route1New/scripts.pory"
	playse SE_EXIT
# 147 "data/maps/Route1New/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE1NEW
# 148 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CAPTAIN, Route1_BoardingBoat_Movement_2
# 149 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route1New/scripts.pory"
	playse SE_EXIT
# 151 "data/maps/Route1New/scripts.pory"
	hideobjectat LOCALID_ROUTE_1_CAPTAIN, MAP_ROUTE1NEW
# 152 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 153 "data/maps/Route1New/scripts.pory"
	addobject LOCALID_ROUTE_1_CYRUS
# 154 "data/maps/Route1New/scripts.pory"
	delay 180
# 155 "data/maps/Route1New/scripts.pory"
	playbgm CUS_DD_CROOG_THEME, FALSE
# 156 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_BoardingBoat_Movement_3
# 157 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 158 "data/maps/Route1New/scripts.pory"
	delay 20
# 159 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_ArriveAtBoat_Movement_0
# 160 "data/maps/Route1New/scripts.pory"
	delay 20
# 161 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_ArriveAtBoat_Movement_1
# 162 "data/maps/Route1New/scripts.pory"
	delay 20
# 163 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_ArriveAtBoat_Movement_3
# 164 "data/maps/Route1New/scripts.pory"
	delay 20
# 165 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_BoardingBoat_Movement_4
# 166 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route1New/scripts.pory"
	playse SE_EXIT
# 168 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_CYRUS
# 169 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 170 "data/maps/Route1New/scripts.pory"
	addobject LOCALID_ROUTE_1_GRUNT
# 171 "data/maps/Route1New/scripts.pory"
	delay 40
# 172 "data/maps/Route1New/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 173 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BOAT_BACK, Route1_BoardingBoat_Movement_5
# 174 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BOAT_FRONT, Route1_BoardingBoat_Movement_5
# 175 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route1New/scripts.pory"
	setflag FLAG_HIDE_ROUTE_1_BOAT
# 177 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BOAT_BACK
# 178 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BOAT_FRONT
# 179 "data/maps/Route1New/scripts.pory"
	delay 120
# 180 "data/maps/Route1New/scripts.pory"
	special SpawnCameraObject
# 181 "data/maps/Route1New/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 37, 33
# 182 "data/maps/Route1New/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, FALSE
# 183 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_CAMERA, Route1_BoardingBoat_Movement_6
# 184 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_CAMERA
# 186 "data/maps/Route1New/scripts.pory"
	special RemoveCameraObject
# 187 "data/maps/Route1New/scripts.pory"
	delay 100
# 188 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_GRUNT, Route1_ArriveAtBoat_Movement_0
# 189 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route1New/scripts.pory"
	playse SE_POKENAV_CALL
# 191 "data/maps/Route1New/scripts.pory"
	waitse
# 192 "data/maps/Route1New/scripts.pory"
	delay 30
# 193 "data/maps/Route1New/scripts.pory"
	playse SE_POKENAV_CALL
# 194 "data/maps/Route1New/scripts.pory"
	waitse
# 195 "data/maps/Route1New/scripts.pory"
	delay 30
# 196 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 197 "data/maps/Route1New/scripts.pory"
	msgbox Route1_BoardingBoat_Text_0
# 198 "data/maps/Route1New/scripts.pory"
	closemessage
# 199 "data/maps/Route1New/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 200 "data/maps/Route1New/scripts.pory"
	waitse
# 201 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_GRUNT, Route1_BoardingBoat_Movement_7
# 202 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route1New/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 12
# 204 "data/maps/Route1New/scripts.pory"
	delay 60
# 205 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 206 "data/maps/Route1New/scripts.pory"
	msgbox Route1_BoardingBoat_Text_1
# 207 "data/maps/Route1New/scripts.pory"
	closemessage
# 208 "data/maps/Route1New/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 209 "data/maps/Route1New/scripts.pory"
	warp MAP_SOUTH_CAMPUS, 37, 40
# 210 "data/maps/Route1New/scripts.pory"
	waitstate
# 211 "data/maps/Route1New/scripts.pory"
	release
	end

Route1_BoardingBoat_3:
# 139 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_BoardingBoat_Movement_0
# 140 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route1New/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE1NEW
	goto Route1_BoardingBoat_1

Route1_BoardingBoat_4:
# 143 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_BoardingBoat_Movement_1
# 144 "data/maps/Route1New/scripts.pory"
	waitmovement 0
	goto Route1_BoardingBoat_1


# 10 "data/maps/Route1New/scripts.pory"
Route1_WalkUpToBoat1_Movement_0:
# 10 "data/maps/Route1New/scripts.pory"
	walk_down
# 10 "data/maps/Route1New/scripts.pory"
	walk_down
# 10 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 16 "data/maps/Route1New/scripts.pory"
Route1_WalkUpToBoat2_Movement_0:
# 16 "data/maps/Route1New/scripts.pory"
	walk_down
# 16 "data/maps/Route1New/scripts.pory"
	walk_left
# 16 "data/maps/Route1New/scripts.pory"
	walk_down
# 16 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_0:
# 24 "data/maps/Route1New/scripts.pory"
	face_up
	step_end

# 29 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_1:
# 29 "data/maps/Route1New/scripts.pory"
	face_down
	step_end

# 36 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_2:
# 36 "data/maps/Route1New/scripts.pory"
	walk_down
# 36 "data/maps/Route1New/scripts.pory"
	walk_down
# 36 "data/maps/Route1New/scripts.pory"
	walk_down
# 36 "data/maps/Route1New/scripts.pory"
	walk_down
# 36 "data/maps/Route1New/scripts.pory"
	walk_down
# 36 "data/maps/Route1New/scripts.pory"
	walk_left
# 36 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 38 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_3:
# 38 "data/maps/Route1New/scripts.pory"
	face_left
	step_end

# 39 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_4:
# 39 "data/maps/Route1New/scripts.pory"
	face_left
# 39 "data/maps/Route1New/scripts.pory"
	emote_exclamation_mark
	step_end

# 41 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_5:
# 41 "data/maps/Route1New/scripts.pory"
	walk_down
# 41 "data/maps/Route1New/scripts.pory"
	walk_down
# 41 "data/maps/Route1New/scripts.pory"
	walk_left
# 41 "data/maps/Route1New/scripts.pory"
	walk_left
# 41 "data/maps/Route1New/scripts.pory"
	face_right
	step_end

# 58 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_6:
# 58 "data/maps/Route1New/scripts.pory"
	face_right
	step_end

# 70 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_7:
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
# 70 "data/maps/Route1New/scripts.pory"
	walk_down
# 70 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 76 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_8:
# 76 "data/maps/Route1New/scripts.pory"
	walk_left
# 76 "data/maps/Route1New/scripts.pory"
	walk_left
# 76 "data/maps/Route1New/scripts.pory"
	walk_up
# 76 "data/maps/Route1New/scripts.pory"
	walk_left
	step_end

# 82 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_9:
# 82 "data/maps/Route1New/scripts.pory"
	walk_down
# 82 "data/maps/Route1New/scripts.pory"
	walk_right
# 82 "data/maps/Route1New/scripts.pory"
	walk_right
# 82 "data/maps/Route1New/scripts.pory"
	walk_right
# 82 "data/maps/Route1New/scripts.pory"
	walk_right
# 82 "data/maps/Route1New/scripts.pory"
	walk_right
# 82 "data/maps/Route1New/scripts.pory"
	walk_right
# 82 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 83 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_10:
# 83 "data/maps/Route1New/scripts.pory"
	walk_down
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
	step_end

# 85 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_11:
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_up
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
# 85 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 86 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_12:
# 86 "data/maps/Route1New/scripts.pory"
	walk_down
# 86 "data/maps/Route1New/scripts.pory"
	walk_down
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 87 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_13:
# 87 "data/maps/Route1New/scripts.pory"
	walk_up
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_up
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
# 87 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 89 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_14:
# 89 "data/maps/Route1New/scripts.pory"
	walk_up
# 89 "data/maps/Route1New/scripts.pory"
	walk_up
# 89 "data/maps/Route1New/scripts.pory"
	walk_right
# 89 "data/maps/Route1New/scripts.pory"
	walk_right
# 89 "data/maps/Route1New/scripts.pory"
	walk_right
# 89 "data/maps/Route1New/scripts.pory"
	walk_right
# 89 "data/maps/Route1New/scripts.pory"
	walk_right
# 89 "data/maps/Route1New/scripts.pory"
	walk_right
# 89 "data/maps/Route1New/scripts.pory"
	walk_right
# 89 "data/maps/Route1New/scripts.pory"
	walk_right
# 89 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 90 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_15:
# 90 "data/maps/Route1New/scripts.pory"
	walk_up
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 91 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_16:
# 91 "data/maps/Route1New/scripts.pory"
	walk_up
# 91 "data/maps/Route1New/scripts.pory"
	walk_up
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
# 91 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 96 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_17:
# 96 "data/maps/Route1New/scripts.pory"
	walk_down
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
# 96 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 139 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_0:
# 139 "data/maps/Route1New/scripts.pory"
	walk_left
# 139 "data/maps/Route1New/scripts.pory"
	walk_down
# 139 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_1:
# 143 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 148 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_2:
# 148 "data/maps/Route1New/scripts.pory"
	walk_left
# 148 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 156 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_3:
# 156 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route1New/scripts.pory"
	walk_fast_right
	step_end

# 165 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_4:
# 165 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route1New/scripts.pory"
	walk_fast_down
	step_end

# 173 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_5:
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 173 "data/maps/Route1New/scripts.pory"
	walk_slow_right
	step_end

# 183 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_6:
# 183 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 183 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 183 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 183 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 183 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 183 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 183 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 183 "data/maps/Route1New/scripts.pory"
	walk_slow_left
	step_end

# 201 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_7:
# 201 "data/maps/Route1New/scripts.pory"
	walk_up
# 201 "data/maps/Route1New/scripts.pory"
	walk_up
# 201 "data/maps/Route1New/scripts.pory"
	walk_up
# 201 "data/maps/Route1New/scripts.pory"
	walk_up
# 201 "data/maps/Route1New/scripts.pory"
	walk_up
# 201 "data/maps/Route1New/scripts.pory"
	walk_up
# 201 "data/maps/Route1New/scripts.pory"
	walk_up
# 201 "data/maps/Route1New/scripts.pory"
	walk_up
	step_end

SignScript_Route1_Text_0:
# 4 "data/maps/Route1New/scripts.pory"
	.string "Tractor University\nNorth Campus {UP_ARROW} South Campus {DOWN_ARROW}$"

Route1_ArriveAtBoat_Text_0:
# 27 "data/maps/Route1New/scripts.pory"
	.string "There you are, {PLAYER}!\n"
	.string "You're such a Slowpoke!$"

Route1_ArriveAtBoat_Text_1:
# 32 "data/maps/Route1New/scripts.pory"
	.string "Now we're just waiting on Rotcart…\n"
	.string "Think he's going to show up?$"

Route1_ArriveAtBoat_Text_2:
# 43 "data/maps/Route1New/scripts.pory"
	.string "Oh…!\n"
	.string "Never mind!$"

Route1_ArriveAtBoat_Text_3:
# 46 "data/maps/Route1New/scripts.pory"
	.string "… … …$"

Route1_ArriveAtBoat_Text_4:
# 53 "data/maps/Route1New/scripts.pory"
	.string "I guess that's everybody then!$"

Route1_ArriveAtBoat_Text_5:
# 56 "data/maps/Route1New/scripts.pory"
	.string "Alright, everybody!\nListen up!$"

Route1_ArriveAtBoat_Text_6:
# 74 "data/maps/Route1New/scripts.pory"
	.string "Hi, everybody!\n"
	.string "Thank you all for making it down here!\p"
	.string "Before we get started, I just want to\n"
	.string "say how proud we are to have you all as\l"
	.string "students.\p"
	.string "You are the future of {COLOR GREEN}Tractoria{COLOR DARK_GRAY}, and we\n"
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
	.string "speak with the {COLOR GREEN}Captain{COLOR DARK_GRAY} to board!$"

Route1_ArriveAtBoat_Text_7:
# 93 "data/maps/Route1New/scripts.pory"
	.string "Wow… This ship is huge!\p"
	.string "This is officially the start of our\n"
	.string "adventure, {PLAYER}!\p"
	.string "I can only imagine all the amazing\n"
	.string "things we'll see and do!\p"
	.string "I'll see you on board, okay?$"

Route1_Captain_Text_0:
# 118 "data/maps/Route1New/scripts.pory"
	.string "Are you ready to board?$"

Route1_Captain_Text_1:
# 122 "data/maps/Route1New/scripts.pory"
	.string "Watch your step.$"

Route1_Captain_Text_2:
# 128 "data/maps/Route1New/scripts.pory"
	.string "Please board once you're ready.$"

Route1_BoardingBoat_Text_0:
# 197 "data/maps/Route1New/scripts.pory"
	.string "… … …\p"
	.string "Mario has boarded the ship.\n"
	.string "They are enroute across the sea.\p"
	.string "… … …\p"
	.string "I counted 7 students.\p"
	.string "… … …\p"
	.string "Understood.$"

Route1_BoardingBoat_Text_1:
# 206 "data/maps/Route1New/scripts.pory"
	.string "This concludes the demo for Pokémon\n"
	.string "Tractors. Thank you for playing!{PAUSE 120}$"
