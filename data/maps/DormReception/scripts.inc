DormReception_MapScripts::
	.byte 0


DormReception_Trash::
# 4 "data/maps/DormReception/scripts.pory"
	lock
# 5 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Trash_Text_0
# 6 "data/maps/DormReception/scripts.pory"
	release
	end


DormReception_Trash_Found::
# 11 "data/maps/DormReception/scripts.pory"
	lock
# 12 "data/maps/DormReception/scripts.pory"
	goto_if_unset FLAG_DORM_TRASH, DormReception_Trash_Found_2
# 22 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Trash_Text_0
DormReception_Trash_Found_1:
# 24 "data/maps/DormReception/scripts.pory"
	release
	end

DormReception_Trash_Found_2:
# 14 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Trash_Found_Text_0
# 15 "data/maps/DormReception/scripts.pory"
	closemessage
# 16 "data/maps/DormReception/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 17 "data/maps/DormReception/scripts.pory"
	waitfanfare
# 18 "data/maps/DormReception/scripts.pory"
	setflag FLAG_DORM_TRASH
	goto DormReception_Trash_Found_1


DormReception_TelevisionShow::
# 29 "data/maps/DormReception/scripts.pory"
	lock
# 30 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_TelevisionShow_Text_0
# 31 "data/maps/DormReception/scripts.pory"
	release
	end


DormReception_Trash_Text_0:
# 5 "data/maps/DormReception/scripts.pory"
	.string "Nothing but trash inside…$"

DormReception_Trash_Found_Text_0:
# 14 "data/maps/DormReception/scripts.pory"
	.string "Nothing but trash inside…\p…\pOh wait! There's something here!$"

DormReception_TelevisionShow_Text_0:
# 30 "data/maps/DormReception/scripts.pory"
	.string "There are people dancing like chickens\n"
	.string "on this TV show.\p"
	.string "Have they ever even seen a chicken…?$"
