NorthCampus_MainHall_2F_MapScripts::
	.byte 0


NorthCampus_MainHall_2F_Coach_Cedar::
# 4 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	lock
# 5 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	faceplayer
# 6 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	setspeaker SP_NAME_CEDAR
# 7 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	msgbox NorthCampus_MainHall_2F_Coach_Cedar_Text_0
# 8 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	closemessage
# 9 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	release
	end


NorthCampus_MainHall_2F_Coach_Cedar_Text_0:
# 7 "data/maps/NorthCampus_MainHall_2F/scripts.pory"
	.string "Hey there, {PLAYER}!\n"
	.string "Gymnasium's not open yet.\p"
	.string "Come back later when I've finished\n"
	.string "setting up.$"
