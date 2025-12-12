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


DormReception_Fridge::
# 36 "data/maps/DormReception/scripts.pory"
	lock
# 37 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Fridge_Text_0
# 38 "data/maps/DormReception/scripts.pory"
	release
	end


DormReception_Stove::
# 43 "data/maps/DormReception/scripts.pory"
	lock
# 44 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Stove_Text_0
# 45 "data/maps/DormReception/scripts.pory"
	release
	end


DormReception_Sink::
# 50 "data/maps/DormReception/scripts.pory"
	lock
# 51 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Sink_Text_0
# 52 "data/maps/DormReception/scripts.pory"
	release
	end


DormReception_Bookcase::
# 57 "data/maps/DormReception/scripts.pory"
	lock
# 58 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Bookcase_Text_0
# 59 "data/maps/DormReception/scripts.pory"
	release
	end


DormReception_Camper::
# 64 "data/maps/DormReception/scripts.pory"
	lock
# 65 "data/maps/DormReception/scripts.pory"
	faceplayer
# 66 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Camper_Text_0
# 67 "data/maps/DormReception/scripts.pory"
	closemessage
# 68 "data/maps/DormReception/scripts.pory"
	release
	end


DormReception_Lady::
# 73 "data/maps/DormReception/scripts.pory"
	lock
# 74 "data/maps/DormReception/scripts.pory"
	faceplayer
# 75 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Lady_Text_0
# 76 "data/maps/DormReception/scripts.pory"
	closemessage
# 77 "data/maps/DormReception/scripts.pory"
	release
	end


DormReception_Picnicker::
# 82 "data/maps/DormReception/scripts.pory"
	lock
# 83 "data/maps/DormReception/scripts.pory"
	faceplayer
# 84 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Picnicker_Text_0
# 85 "data/maps/DormReception/scripts.pory"
	closemessage
# 86 "data/maps/DormReception/scripts.pory"
	release
	end


DormReception_Lass::
# 91 "data/maps/DormReception/scripts.pory"
	lock
# 92 "data/maps/DormReception/scripts.pory"
	faceplayer
# 93 "data/maps/DormReception/scripts.pory"
	msgbox DormReception_Lass_Text_0
# 94 "data/maps/DormReception/scripts.pory"
	closemessage
# 95 "data/maps/DormReception/scripts.pory"
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

DormReception_Fridge_Text_0:
# 37 "data/maps/DormReception/scripts.pory"
	.string "It's filled with lots of beer\n"
	.string "and frozen meals.$"

DormReception_Stove_Text_0:
# 44 "data/maps/DormReception/scripts.pory"
	.string "There's half eaten ramen still\n"
	.string "sitting in the pot.$"

DormReception_Sink_Text_0:
# 51 "data/maps/DormReception/scripts.pory"
	.string "Piled up high with used dishes.$"

DormReception_Bookcase_Text_0:
# 58 "data/maps/DormReception/scripts.pory"
	.string "Very dusty, clearly not used.$"

DormReception_Camper_Text_0:
# 66 "data/maps/DormReception/scripts.pory"
	.string "Oh!\n"
	.string "You have a {COLOR BLUE}Quest Log{COLOR DARK_GRAY} too?\p"
	.string "It's a good thing to have if you ever\n"
	.string "forget what you were doing.\p"
	.string "Happens to me all the time!$"

DormReception_Lady_Text_0:
# 75 "data/maps/DormReception/scripts.pory"
	.string "You can store {COLOR GREEN}Pokémon {COLOR DARK_GRAY}and {COLOR GREEN}Items{COLOR DARK_GRAY} in\n"
	.string "your PC.\p"
	.string "I'm sure you have one in your dorm room,\n"
	.string "but that one only holds {COLOR GREEN}Items{COLOR DARK_GRAY}.\p"
	.string "The {COLOR GREEN}Pokémon Centers{COLOR DARK_GRAY} have PCs that can\n"
	.string "store both {COLOR GREEN}Pokémon {COLOR DARK_GRAY}and {COLOR GREEN}Items{COLOR DARK_GRAY}.\p"
	.string "They're very useful!$"

DormReception_Picnicker_Text_0:
# 84 "data/maps/DormReception/scripts.pory"
	.string "You should check out the {COLOR GREEN}South Campus\n"
	.string "{COLOR DARK_GRAY}Poké Mart sometime!\p"
	.string "They have some useful medicine for\n"
	.string "sale.$"

DormReception_Lass_Text_0:
# 93 "data/maps/DormReception/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "I saw Rotcart leave just a minute ago.\p"
	.string "He flipped me off as he went by!$"
