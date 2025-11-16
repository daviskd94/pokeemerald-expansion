NorthCampus_MapScripts::
# 2 "data/maps/NorthCampus/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NorthCampus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NorthCampus_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


NorthCampus_WalkNextToTracie1::
# 9 "data/maps/NorthCampus/scripts.pory"
	lockall
# 10 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie1_Movement_0
# 11 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 12 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie2::
# 16 "data/maps/NorthCampus/scripts.pory"
	lockall
# 17 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie2_Movement_0
# 18 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 19 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie3::
# 23 "data/maps/NorthCampus/scripts.pory"
	lockall
# 24 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie3_Movement_0
# 25 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 26 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie4::
# 30 "data/maps/NorthCampus/scripts.pory"
	lockall
# 31 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie4_Movement_0
# 32 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 33 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie5::
# 37 "data/maps/NorthCampus/scripts.pory"
	lockall
# 38 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie5_Movement_0
# 39 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 40 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_WalkNextToTracie6::
# 44 "data/maps/NorthCampus/scripts.pory"
	lockall
# 45 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_WalkNextToTracie6_Movement_0
# 46 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 47 "data/maps/NorthCampus/scripts.pory"
	call NorthCampus_TalkToTracie
	return


NorthCampus_TalkToTracie::
# 51 "data/maps/NorthCampus/scripts.pory"
	fadeoutbgm 1
# 52 "data/maps/NorthCampus/scripts.pory"
	setspeaker SP_NAME_TRACIE
# 53 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_TalkToTracie_Text_0
# 54 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_0
# 55 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_1
# 56 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 58 "data/maps/NorthCampus/scripts.pory"
	msgbox NorthCampus_TalkToTracie_Text_1
# 59 "data/maps/NorthCampus/scripts.pory"
	closemessage
# 60 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 61 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_3
# 62 "data/maps/NorthCampus/scripts.pory"
	opendoor 42, 16
# 63 "data/maps/NorthCampus/scripts.pory"
	waitdooranim
# 64 "data/maps/NorthCampus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NorthCampus_TalkToTracie_Movement_2
# 65 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_2
# 66 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 67 "data/maps/NorthCampus/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_NORTH_CAMPUS
# 68 "data/maps/NorthCampus/scripts.pory"
	applymovement 26, NorthCampus_TalkToTracie_Movement_2
# 69 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 70 "data/maps/NorthCampus/scripts.pory"
	hideobjectat 26, MAP_NORTH_CAMPUS
# 71 "data/maps/NorthCampus/scripts.pory"
	closedoor 42, 16
# 72 "data/maps/NorthCampus/scripts.pory"
	waitdooranim
# 73 "data/maps/NorthCampus/scripts.pory"
	special SpawnCameraObject
# 74 "data/maps/NorthCampus/scripts.pory"
	setobjectxyperm LOCALID_CAMERA, 42, 16
# 75 "data/maps/NorthCampus/scripts.pory"
	delay 60
# 76 "data/maps/NorthCampus/scripts.pory"
	applymovement LOCALID_CAMERA, NorthCampus_TalkToTracie_Movement_4
# 77 "data/maps/NorthCampus/scripts.pory"
	waitmovement 0
# 78 "data/maps/NorthCampus/scripts.pory"
	delay 120
# 82 "data/maps/NorthCampus/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 1
# 83 "data/maps/NorthCampus/scripts.pory"
	setflag FLAG_NORTH_CAMPUS_TRACIE_1
# 85 "data/maps/NorthCampus/scripts.pory"
	playbgm MUS_OCEANIC_MUSEUM, TRUE
# 86 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
# 87 "data/maps/NorthCampus/scripts.pory"
	waitstate
# 88 "data/maps/NorthCampus/scripts.pory"
	releaseall
	end


NorthCampus_TestWarp::
# 93 "data/maps/NorthCampus/scripts.pory"
	warp MAP_NORTH_CAMPUS_MAIN_HALL, 37, 34
	return


# 10 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie1_Movement_0:
# 10 "data/maps/NorthCampus/scripts.pory"
	walk_down
# 10 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 10 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 10 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie2_Movement_0:
# 17 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 17 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 17 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 24 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie3_Movement_0:
# 24 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 24 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 24 "data/maps/NorthCampus/scripts.pory"
	walk_right
# 24 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie4_Movement_0:
# 31 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 31 "data/maps/NorthCampus/scripts.pory"
	face_up
	step_end

# 38 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie5_Movement_0:
# 38 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 38 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/NorthCampus/scripts.pory"
NorthCampus_WalkNextToTracie6_Movement_0:
# 45 "data/maps/NorthCampus/scripts.pory"
	walk_left
# 45 "data/maps/NorthCampus/scripts.pory"
	walk_up
# 45 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 54 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_0:
# 54 "data/maps/NorthCampus/scripts.pory"
	face_left
	step_end

# 55 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_1:
# 55 "data/maps/NorthCampus/scripts.pory"
	face_right
	step_end

# 60 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_2:
# 60 "data/maps/NorthCampus/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_3:
# 61 "data/maps/NorthCampus/scripts.pory"
	walk_right
	step_end

# 76 "data/maps/NorthCampus/scripts.pory"
NorthCampus_TalkToTracie_Movement_4:
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
# 76 "data/maps/NorthCampus/scripts.pory"
	walk_slow_up
	step_end

NorthCampus_TalkToTracie_Text_0:
# 53 "data/maps/NorthCampus/scripts.pory"
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
# 58 "data/maps/NorthCampus/scripts.pory"
	.string "But, enough about that.\n"
	.string "C'mon, {PLAYER}.\p"
	.string "Let's head inside before I start\n"
	.string "getting all mushy.$"
