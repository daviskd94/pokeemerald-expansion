Route1New_MapScripts::
	.byte 0


SignScript_Route1::
# 4 "data/maps/Route1New/scripts.pory"
	msgbox SignScript_Route1_Text_0
# 5 "data/maps/Route1New/scripts.pory"
	closemessage
	return


Route1_WalkUpToBoat1::
# 9 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_WalkUpToBoat1_Movement_0
# 10 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 11 "data/maps/Route1New/scripts.pory"
	call Route1_ArriveAtBoat
	return


Route1_WalkUpToBoat2::
# 15 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_WalkUpToBoat2_Movement_0
# 16 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route1New/scripts.pory"
	call Route1_ArriveAtBoat
	return


Route1_ArriveAtBoat::
# 22 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 23 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_0
# 24 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 26 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_0
# 27 "data/maps/Route1New/scripts.pory"
	closemessage
# 28 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_1
# 29 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 31 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_1
# 32 "data/maps/Route1New/scripts.pory"
	closemessage
# 33 "data/maps/Route1New/scripts.pory"
	delay 20
# 34 "data/maps/Route1New/scripts.pory"
	addobject LOCALID_ROUTE_1_ROTCART
# 35 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_ROTCART, Route1_ArriveAtBoat_Movement_2
# 36 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_3
# 38 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_4
# 39 "data/maps/Route1New/scripts.pory"
	playse SE_PIN
# 40 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_ROTCART, Route1_ArriveAtBoat_Movement_5
# 41 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 42 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_2
# 43 "data/maps/Route1New/scripts.pory"
	closemessage
# 44 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_ROTCART
# 45 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_3
# 46 "data/maps/Route1New/scripts.pory"
	closemessage
# 47 "data/maps/Route1New/scripts.pory"
	delay 20
# 48 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_0
# 49 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_1
# 50 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 52 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_4
# 53 "data/maps/Route1New/scripts.pory"
	closemessage
# 54 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_MAPLE
# 55 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_5
# 56 "data/maps/Route1New/scripts.pory"
	closemessage
# 57 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_6
# 58 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_6
# 59 "data/maps/Route1New/scripts.pory"
	delay 5
# 60 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BLACK_BELT, Route1_ArriveAtBoat_Movement_6
# 61 "data/maps/Route1New/scripts.pory"
	delay 10
# 62 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_SCHOOL_KID_M, Route1_ArriveAtBoat_Movement_6
# 63 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_M, Route1_ArriveAtBoat_Movement_6
# 64 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_F, Route1_ArriveAtBoat_Movement_6
# 65 "data/maps/Route1New/scripts.pory"
	delay 5
# 66 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_RANCHER, Route1_ArriveAtBoat_Movement_6
# 67 "data/maps/Route1New/scripts.pory"
	special SpawnCameraObject
# 68 "data/maps/Route1New/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 28, 30
# 69 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_CAMERA, Route1_ArriveAtBoat_Movement_7
# 70 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route1New/scripts.pory"
	playbgm MUS_B_TOWER, TRUE
# 72 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_MARIO
# 73 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_6
# 74 "data/maps/Route1New/scripts.pory"
	closemessage
# 75 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_CAMERA, Route1_ArriveAtBoat_Movement_8
# 76 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_CAMERA
# 78 "data/maps/Route1New/scripts.pory"
	special RemoveCameraObject
# 79 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_ArriveAtBoat_Movement_1
# 80 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_0
# 81 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_MARIO, Route1_ArriveAtBoat_Movement_9
# 82 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_MAPLE, Route1_ArriveAtBoat_Movement_10
# 84 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_ROTCART, Route1_ArriveAtBoat_Movement_11
# 85 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BLACK_BELT, Route1_ArriveAtBoat_Movement_12
# 86 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_SCHOOL_KID_M, Route1_ArriveAtBoat_Movement_13
# 88 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_M, Route1_ArriveAtBoat_Movement_14
# 89 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BREEDER_F, Route1_ArriveAtBoat_Movement_15
# 90 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_RANCHER, Route1_ArriveAtBoat_Movement_16
# 91 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 92 "data/maps/Route1New/scripts.pory"
	msgbox Route1_ArriveAtBoat_Text_7
# 93 "data/maps/Route1New/scripts.pory"
	closemessage
# 94 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_TRACIE, Route1_ArriveAtBoat_Movement_17
# 96 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route1New/scripts.pory"
	setflag FLAG_HIDE_ROUTE_1_NPCS
# 98 "data/maps/Route1New/scripts.pory"
	setflag FLAG_HIDE_ROUTE_1_ROTCART
# 99 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_TRACIE
# 100 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_ROTCART
# 101 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BLACK_BELT
# 102 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_SCHOOL_KID_M
# 103 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BREEDER_M
# 104 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BREEDER_F
# 105 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_RANCHER
# 106 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_MARIO
# 107 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_MAPLE
# 108 "data/maps/Route1New/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 109 "data/maps/Route1New/scripts.pory"
	release
	end


Route1_Captain::
# 114 "data/maps/Route1New/scripts.pory"
	lock
# 115 "data/maps/Route1New/scripts.pory"
	faceplayer
# 116 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_ACRE
# 117 "data/maps/Route1New/scripts.pory"
	msgbox Route1_Captain_Text_0, MSGBOX_YESNO
# 118 "data/maps/Route1New/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_Captain_2
# 125 "data/maps/Route1New/scripts.pory"
	closemessage
# 126 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_ACRE
# 127 "data/maps/Route1New/scripts.pory"
	msgbox Route1_Captain_Text_2
Route1_Captain_1:
# 129 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 130 "data/maps/Route1New/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 131 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BOAT_BACK, Route1_Captain_Movement_0
# 132 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BOAT_FRONT, Route1_Captain_Movement_1
# 133 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route1New/scripts.pory"
	release
	end

Route1_Captain_2:
# 119 "data/maps/Route1New/scripts.pory"
	closemessage
# 120 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_ACRE
# 121 "data/maps/Route1New/scripts.pory"
	msgbox Route1_Captain_Text_1
# 122 "data/maps/Route1New/scripts.pory"
	closemessage
# 123 "data/maps/Route1New/scripts.pory"
	call Route1_BoardingBoat
	goto Route1_Captain_1


Route1_BoardingBoat::
# 139 "data/maps/Route1New/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 140 "data/maps/Route1New/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/Route1New/scripts.pory"
	case DIR_SOUTH, Route1_BoardingBoat_3
# 145 "data/maps/Route1New/scripts.pory"
	case DIR_EAST, Route1_BoardingBoat_4
Route1_BoardingBoat_1:
# 149 "data/maps/Route1New/scripts.pory"
	playse SE_EXIT
# 150 "data/maps/Route1New/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE1NEW
# 151 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CAPTAIN, Route1_BoardingBoat_Movement_2
# 152 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route1New/scripts.pory"
	playse SE_EXIT
# 154 "data/maps/Route1New/scripts.pory"
	hideobjectat LOCALID_ROUTE_1_CAPTAIN, MAP_ROUTE1NEW
# 155 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 156 "data/maps/Route1New/scripts.pory"
	addobject LOCALID_ROUTE_1_CYRUS
# 157 "data/maps/Route1New/scripts.pory"
	delay 180
# 158 "data/maps/Route1New/scripts.pory"
	playbgm CUS_DD_CROOG_THEME, FALSE
# 159 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_BoardingBoat_Movement_3
# 160 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route1New/scripts.pory"
	delay 20
# 162 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_ArriveAtBoat_Movement_0
# 163 "data/maps/Route1New/scripts.pory"
	delay 20
# 164 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_ArriveAtBoat_Movement_1
# 165 "data/maps/Route1New/scripts.pory"
	delay 20
# 166 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_ArriveAtBoat_Movement_3
# 167 "data/maps/Route1New/scripts.pory"
	delay 20
# 168 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_CYRUS, Route1_BoardingBoat_Movement_4
# 169 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route1New/scripts.pory"
	playse SE_EXIT
# 171 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_CYRUS
# 172 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 173 "data/maps/Route1New/scripts.pory"
	addobject LOCALID_ROUTE_1_GRUNT
# 174 "data/maps/Route1New/scripts.pory"
	delay 40
# 175 "data/maps/Route1New/scripts.pory"
	playse SE_RG_SS_ANNE_HORN
# 176 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BOAT_BACK, Route1_BoardingBoat_Movement_5
# 177 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_BOAT_FRONT, Route1_BoardingBoat_Movement_5
# 178 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route1New/scripts.pory"
	setflag FLAG_HIDE_ROUTE_1_BOAT
# 180 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BOAT_BACK
# 181 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_ROUTE_1_BOAT_FRONT
# 182 "data/maps/Route1New/scripts.pory"
	delay 120
# 183 "data/maps/Route1New/scripts.pory"
	special SpawnCameraObject
# 184 "data/maps/Route1New/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 37, 33
# 185 "data/maps/Route1New/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, FALSE
# 186 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_CAMERA, Route1_BoardingBoat_Movement_6
# 187 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route1New/scripts.pory"
	removeobject LOCALID_CAMERA
# 189 "data/maps/Route1New/scripts.pory"
	special RemoveCameraObject
# 190 "data/maps/Route1New/scripts.pory"
	delay 100
# 191 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_GRUNT, Route1_ArriveAtBoat_Movement_0
# 192 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route1New/scripts.pory"
	playse SE_POKENAV_CALL
# 194 "data/maps/Route1New/scripts.pory"
	waitse
# 195 "data/maps/Route1New/scripts.pory"
	delay 30
# 196 "data/maps/Route1New/scripts.pory"
	playse SE_POKENAV_CALL
# 197 "data/maps/Route1New/scripts.pory"
	waitse
# 198 "data/maps/Route1New/scripts.pory"
	delay 30
# 199 "data/maps/Route1New/scripts.pory"
	setspeaker SP_NAME_UNKNOWN
# 200 "data/maps/Route1New/scripts.pory"
	msgbox Route1_BoardingBoat_Text_0
# 201 "data/maps/Route1New/scripts.pory"
	closemessage
# 202 "data/maps/Route1New/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 203 "data/maps/Route1New/scripts.pory"
	waitse
# 204 "data/maps/Route1New/scripts.pory"
	applymovement LOCALID_ROUTE_1_GRUNT, Route1_BoardingBoat_Movement_7
# 205 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route1New/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 12
# 207 "data/maps/Route1New/scripts.pory"
	delay 60
# 208 "data/maps/Route1New/scripts.pory"
	fadeoutbgm 0
# 209 "data/maps/Route1New/scripts.pory"
	msgbox Route1_BoardingBoat_Text_1
# 210 "data/maps/Route1New/scripts.pory"
	closemessage
# 211 "data/maps/Route1New/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, TRUE
# 212 "data/maps/Route1New/scripts.pory"
	warp MAP_SOUTH_CAMPUS, 37, 40
# 213 "data/maps/Route1New/scripts.pory"
	waitstate
# 214 "data/maps/Route1New/scripts.pory"
	release
	end

Route1_BoardingBoat_3:
# 142 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_BoardingBoat_Movement_0
# 143 "data/maps/Route1New/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route1New/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE1NEW
	goto Route1_BoardingBoat_1

Route1_BoardingBoat_4:
# 146 "data/maps/Route1New/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_BoardingBoat_Movement_1
# 147 "data/maps/Route1New/scripts.pory"
	waitmovement 0
	goto Route1_BoardingBoat_1


# 9 "data/maps/Route1New/scripts.pory"
Route1_WalkUpToBoat1_Movement_0:
# 9 "data/maps/Route1New/scripts.pory"
	walk_down
# 9 "data/maps/Route1New/scripts.pory"
	walk_down
# 9 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 15 "data/maps/Route1New/scripts.pory"
Route1_WalkUpToBoat2_Movement_0:
# 15 "data/maps/Route1New/scripts.pory"
	walk_down
# 15 "data/maps/Route1New/scripts.pory"
	walk_left
# 15 "data/maps/Route1New/scripts.pory"
	walk_down
# 15 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 23 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_0:
# 23 "data/maps/Route1New/scripts.pory"
	face_up
	step_end

# 28 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_1:
# 28 "data/maps/Route1New/scripts.pory"
	face_down
	step_end

# 35 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_2:
# 35 "data/maps/Route1New/scripts.pory"
	walk_down
# 35 "data/maps/Route1New/scripts.pory"
	walk_down
# 35 "data/maps/Route1New/scripts.pory"
	walk_down
# 35 "data/maps/Route1New/scripts.pory"
	walk_down
# 35 "data/maps/Route1New/scripts.pory"
	walk_down
# 35 "data/maps/Route1New/scripts.pory"
	walk_left
# 35 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 37 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_3:
# 37 "data/maps/Route1New/scripts.pory"
	face_left
	step_end

# 38 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_4:
# 38 "data/maps/Route1New/scripts.pory"
	face_left
# 38 "data/maps/Route1New/scripts.pory"
	emote_exclamation_mark
	step_end

# 40 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_5:
# 40 "data/maps/Route1New/scripts.pory"
	walk_down
# 40 "data/maps/Route1New/scripts.pory"
	walk_down
# 40 "data/maps/Route1New/scripts.pory"
	walk_left
# 40 "data/maps/Route1New/scripts.pory"
	walk_left
# 40 "data/maps/Route1New/scripts.pory"
	face_right
	step_end

# 57 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_6:
# 57 "data/maps/Route1New/scripts.pory"
	face_right
	step_end

# 69 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_7:
# 69 "data/maps/Route1New/scripts.pory"
	walk_right
# 69 "data/maps/Route1New/scripts.pory"
	walk_right
# 69 "data/maps/Route1New/scripts.pory"
	walk_down
# 69 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 75 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_8:
# 75 "data/maps/Route1New/scripts.pory"
	walk_left
# 75 "data/maps/Route1New/scripts.pory"
	walk_left
# 75 "data/maps/Route1New/scripts.pory"
	walk_up
# 75 "data/maps/Route1New/scripts.pory"
	walk_left
	step_end

# 81 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_9:
# 81 "data/maps/Route1New/scripts.pory"
	walk_down
# 81 "data/maps/Route1New/scripts.pory"
	walk_right
# 81 "data/maps/Route1New/scripts.pory"
	walk_right
# 81 "data/maps/Route1New/scripts.pory"
	walk_right
# 81 "data/maps/Route1New/scripts.pory"
	walk_right
# 81 "data/maps/Route1New/scripts.pory"
	walk_right
# 81 "data/maps/Route1New/scripts.pory"
	walk_right
# 81 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 82 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_10:
# 82 "data/maps/Route1New/scripts.pory"
	walk_down
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

# 84 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_11:
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_up
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
# 84 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 85 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_12:
# 85 "data/maps/Route1New/scripts.pory"
	walk_down
# 85 "data/maps/Route1New/scripts.pory"
	walk_down
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
Route1_ArriveAtBoat_Movement_13:
# 86 "data/maps/Route1New/scripts.pory"
	walk_up
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_right
# 86 "data/maps/Route1New/scripts.pory"
	walk_up
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

# 88 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_14:
# 88 "data/maps/Route1New/scripts.pory"
	walk_up
# 88 "data/maps/Route1New/scripts.pory"
	walk_up
# 88 "data/maps/Route1New/scripts.pory"
	walk_right
# 88 "data/maps/Route1New/scripts.pory"
	walk_right
# 88 "data/maps/Route1New/scripts.pory"
	walk_right
# 88 "data/maps/Route1New/scripts.pory"
	walk_right
# 88 "data/maps/Route1New/scripts.pory"
	walk_right
# 88 "data/maps/Route1New/scripts.pory"
	walk_right
# 88 "data/maps/Route1New/scripts.pory"
	walk_right
# 88 "data/maps/Route1New/scripts.pory"
	walk_right
# 88 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 89 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_15:
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
Route1_ArriveAtBoat_Movement_16:
# 90 "data/maps/Route1New/scripts.pory"
	walk_up
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
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
# 90 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 95 "data/maps/Route1New/scripts.pory"
Route1_ArriveAtBoat_Movement_17:
# 95 "data/maps/Route1New/scripts.pory"
	walk_down
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
# 95 "data/maps/Route1New/scripts.pory"
	walk_right
	step_end

# 131 "data/maps/Route1New/scripts.pory"
Route1_Captain_Movement_0:
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 131 "data/maps/Route1New/scripts.pory"
	walk_slow_right
	step_end

# 132 "data/maps/Route1New/scripts.pory"
Route1_Captain_Movement_1:
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 132 "data/maps/Route1New/scripts.pory"
	walk_slow_right
	step_end

# 142 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_0:
# 142 "data/maps/Route1New/scripts.pory"
	walk_left
# 142 "data/maps/Route1New/scripts.pory"
	walk_down
# 142 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 146 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_1:
# 146 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 151 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_2:
# 151 "data/maps/Route1New/scripts.pory"
	walk_left
# 151 "data/maps/Route1New/scripts.pory"
	walk_down
	step_end

# 159 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_3:
# 159 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route1New/scripts.pory"
	walk_fast_right
	step_end

# 168 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_4:
# 168 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route1New/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route1New/scripts.pory"
	walk_fast_down
	step_end

# 176 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_5:
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
# 176 "data/maps/Route1New/scripts.pory"
	walk_slow_right
	step_end

# 186 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_6:
# 186 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 186 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 186 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 186 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 186 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 186 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 186 "data/maps/Route1New/scripts.pory"
	walk_slow_left
# 186 "data/maps/Route1New/scripts.pory"
	walk_slow_left
	step_end

# 204 "data/maps/Route1New/scripts.pory"
Route1_BoardingBoat_Movement_7:
# 204 "data/maps/Route1New/scripts.pory"
	walk_up
# 204 "data/maps/Route1New/scripts.pory"
	walk_up
# 204 "data/maps/Route1New/scripts.pory"
	walk_up
# 204 "data/maps/Route1New/scripts.pory"
	walk_up
# 204 "data/maps/Route1New/scripts.pory"
	walk_up
# 204 "data/maps/Route1New/scripts.pory"
	walk_up
# 204 "data/maps/Route1New/scripts.pory"
	walk_up
# 204 "data/maps/Route1New/scripts.pory"
	walk_up
	step_end

SignScript_Route1_Text_0:
# 4 "data/maps/Route1New/scripts.pory"
	.string "Tractor University\nNorth Campus {UP_ARROW} South Campus {DOWN_ARROW}$"

Route1_ArriveAtBoat_Text_0:
# 26 "data/maps/Route1New/scripts.pory"
	.string "There you are, {PLAYER}!\n"
	.string "You're such a Slowpoke!$"

Route1_ArriveAtBoat_Text_1:
# 31 "data/maps/Route1New/scripts.pory"
	.string "Now we're just waiting on Rotcart…\n"
	.string "Think he's going to show up?$"

Route1_ArriveAtBoat_Text_2:
# 42 "data/maps/Route1New/scripts.pory"
	.string "Oh…!\n"
	.string "Never mind!$"

Route1_ArriveAtBoat_Text_3:
# 45 "data/maps/Route1New/scripts.pory"
	.string "… … …$"

Route1_ArriveAtBoat_Text_4:
# 52 "data/maps/Route1New/scripts.pory"
	.string "I guess that's everybody then!$"

Route1_ArriveAtBoat_Text_5:
# 55 "data/maps/Route1New/scripts.pory"
	.string "Alright, everybody!\nListen up!$"

Route1_ArriveAtBoat_Text_6:
# 73 "data/maps/Route1New/scripts.pory"
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
# 92 "data/maps/Route1New/scripts.pory"
	.string "Wow… This ship is huge!\p"
	.string "This is officially the start of our\n"
	.string "adventure, {PLAYER}!\p"
	.string "I can only imagine all the amazing\n"
	.string "things we'll see and do!\p"
	.string "I'll see you on board, okay?$"

Route1_Captain_Text_0:
# 117 "data/maps/Route1New/scripts.pory"
	.string "Are you ready to board?$"

Route1_Captain_Text_1:
# 121 "data/maps/Route1New/scripts.pory"
	.string "Watch your step.$"

Route1_Captain_Text_2:
# 127 "data/maps/Route1New/scripts.pory"
	.string "Please board once you're ready.$"

Route1_BoardingBoat_Text_0:
# 200 "data/maps/Route1New/scripts.pory"
	.string "… … …\p"
	.string "Mario has boarded the ship.\n"
	.string "They are enroute across the sea.\p"
	.string "… … …\p"
	.string "I counted 7 students.\p"
	.string "… … …\p"
	.string "Understood.$"

Route1_BoardingBoat_Text_1:
# 209 "data/maps/Route1New/scripts.pory"
	.string "This concludes the demo for Pokémon\n"
	.string "Tractors. Thank you for playing!{PAUSE 120}$"
