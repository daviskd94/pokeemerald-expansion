NorthCampus_MapScripts::
# 2 "data/maps/NorthCampus/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NorthCampus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NorthCampus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


NorthCampus_WalkNextToTracie1::
# 7 "data/maps/NorthCampus/scripts.pory"
	lockall
# 8 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie1_Movement_0
# 9 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 10 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie2::
# 14 "data/maps/NorthCampus/scripts.pory"
	lockall
# 15 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie2_Movement_0
# 16 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 17 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie3::
# 21 "data/maps/NorthCampus/scripts.pory"
	lockall
# 22 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie3_Movement_0
# 23 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 24 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie4::
# 28 "data/maps/NorthCampus/scripts.pory"
	lockall
# 29 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie4_Movement_0
# 30 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 31 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie5::
# 35 "data/maps/NorthCampus/scripts.pory"
	lockall
# 36 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie5_Movement_0
# 37 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 38 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie6::
# 42 "data/maps/NorthCampus/scripts.pory"
	lockall
# 43 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie6_Movement_0
# 44 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 45 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_TalkToTracie::
# 49 "data/maps/NorthCampus/scripts.pory"
	fadeoutbgm 1
# 50 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 51 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_TalkToTracie_Text_0
# 52 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_0
# 53 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_1
# 54 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 56 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_TalkToTracie_Text_1
# 57 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 58 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 59 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_3
# 60 "data/maps/NorthCampus/scripts.pory"
	opendoor 42, 16
# 61 "data/maps/NorthCampus/scripts.pory"
	waitdooranim
# 62 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 63 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_2
# 64 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 65 "data/maps/NorthCampus/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_NORTH_CAMPUS
# 66 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_2
# 67 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 68 "data/maps/NorthCampus/scripts.pory"
	hideobjectat 26, MAP_NORTH_CAMPUS
# 69 "data/maps/NorthCampus/scripts.pory"
	closedoor 42, 16
# 70 "data/maps/NorthCampus/scripts.pory"
	waitdooranim
# 71 "data/maps/NorthCampus/scripts.pory"
	special SpawnCameraObject
# 72 "data/maps/NorthCampus/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 42, 16
# 73 "data/maps/NorthCampus/scripts.pory"
	delay 60
# 74 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_TalkToTracie_Movement_4
# 75 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 76 "data/maps/NorthCampus/scripts.pory"
	delay 120
# 80 "data/maps/NorthCampus/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 1
# 81 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_TRACIE_1
# 83 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 84 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
# 85 "data/maps/NorthCampus/scripts.pory"
	waitstate
# 86 "data/maps/NorthCampus/scripts.pory"
	releaseall
	end


NorthCampus_TestWarp::
# 91 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
	return


# 8 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie1_Movement_0:
# 8 "data/maps/NorthCampus/scripts.pory"
	walk_down
# 8 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 8 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 8 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 15 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie2_Movement_0:
# 15 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 15 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 15 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 22 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie3_Movement_0:
# 22 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 22 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 22 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 22 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 29 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie4_Movement_0:
# 29 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 29 "data/maps/NorthCampus/scripts.pory"
	face_up
	step_end

# 36 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie5_Movement_0:
# 36 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 36 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 43 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie6_Movement_0:
# 43 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 43 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 43 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 52 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_0:
# 52 "data/maps/NorthCampus/scripts.pory"
	face_left
	step_end

# 53 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_1:
# 53 "data/maps/NorthCampus/scripts.pory"
	face_right
	step_end

# 58 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_2:
# 58 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 59 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_3:
# 59 "data/maps/NorthCampus/scripts.pory"
	walk_right
	step_end

# 74 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_4:
# 74 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 74 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 74 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 74 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 74 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 74 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
	step_end

NorthCampus_TalkToTracie_Text_0:
# 51 "data/maps/NorthCampus/scripts.pory"
	.string "…\p"
	.string "Take a good look, {PLAYER}…\p"
	.string "Main Hall sure does hit different when\n"
	.string "you know it's your final year.\p"
	.string "We've had a lot of great memories in\n"
	.string "here.\p"
	.string "And… okay, maybe a few\n"
	.string "catastrophes too.\p"
	.string "We never did find out what happened to\n"
	.string "the guy with the Mareep and the lotion…$"

NorthCampus_TalkToTracie_Text_1:
# 56 "data/maps/NorthCampus/scripts.pory"
	.string "But, enough about that.\n"
	.string "C'mon, {PLAYER}.\p"
	.string "Let's head inside before I start\n"
	.string "getting all mushy.$"
