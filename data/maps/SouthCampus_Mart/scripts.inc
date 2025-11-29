SouthCampus_Mart_MapScripts::
	.byte 0


SouthCampus_Mart_Clerk::
# 7 "data/maps/SouthCampus_Mart/scripts.pory"
	lock
# 8 "data/maps/SouthCampus_Mart/scripts.pory"
	faceplayer
# 9 "data/maps/SouthCampus_Mart/scripts.pory"
	msgbox SouthCampus_Mart_Clerk_Text_0
# 10 "data/maps/SouthCampus_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/SouthCampus_Mart/scripts.pory"
	goto_if_set FLAG_POKEBALLS_UNLOCKED, SouthCampus_Mart_Clerk_2
SouthCampus_Mart_Clerk_1:
# 14 "data/maps/SouthCampus_Mart/scripts.pory"
	pokemart MyMartItems
# 15 "data/maps/SouthCampus_Mart/scripts.pory"
	msgbox SouthCampus_Mart_Clerk_Text_1
# 16 "data/maps/SouthCampus_Mart/scripts.pory"
	release
	end

SouthCampus_Mart_Clerk_2:
# 12 "data/maps/SouthCampus_Mart/scripts.pory"
	pokemart MyMartItems2
	goto SouthCampus_Mart_Clerk_1


	.align 2
# 20 "data/maps/SouthCampus_Mart/scripts.pory"
MyMartItems:
# 21 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POTION
# 22 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 23 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 26 "data/maps/SouthCampus_Mart/scripts.pory"
MyMartItems2:
# 27 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 28 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POTION
# 29 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 30 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

SouthCampus_Mart_Clerk_Text_0:
# 9 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "Welcome!\nHow may I serve you?$"

SouthCampus_Mart_Clerk_Text_1:
# 15 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "Please come again.$"
