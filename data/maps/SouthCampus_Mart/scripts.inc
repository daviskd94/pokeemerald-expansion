SouthCampus_Mart_MapScripts::
	.byte 0


SouthCampus_Mart_Clerk::
# 7 "data/maps/SouthCampus_Mart/scripts.pory"
	lock
# 8 "data/maps/SouthCampus_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/SouthCampus_Mart/scripts.pory"
	msgbox SouthCampus_Mart_Clerk_Text_0
# 11 "data/maps/SouthCampus_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/SouthCampus_Mart/scripts.pory"
	goto_if_set FLAG_POKEBALLS_UNLOCKED, SouthCampus_Mart_Clerk_2
SouthCampus_Mart_Clerk_1:
# 15 "data/maps/SouthCampus_Mart/scripts.pory"
	pokemart MyMartItems
# 17 "data/maps/SouthCampus_Mart/scripts.pory"
	msgbox SouthCampus_Mart_Clerk_Text_1
# 18 "data/maps/SouthCampus_Mart/scripts.pory"
	release
	end

SouthCampus_Mart_Clerk_2:
# 13 "data/maps/SouthCampus_Mart/scripts.pory"
	pokemart MyMartItems2
	goto SouthCampus_Mart_Clerk_1


	.align 2
# 22 "data/maps/SouthCampus_Mart/scripts.pory"
MyMartItems:
# 23 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 25 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 26 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 29 "data/maps/SouthCampus_Mart/scripts.pory"
MyMartItems2:
# 30 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 31 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POTION
# 32 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 33 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 34 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

SouthCampus_Mart_Clerk_Text_0:
# 10 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "Welcome!\nHow may I serve you?$"

SouthCampus_Mart_Clerk_Text_1:
# 17 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "Please come again.$"
