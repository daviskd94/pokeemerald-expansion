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


SouthCampus_Mart_NPC1::
# 23 "data/maps/SouthCampus_Mart/scripts.pory"
	lock
# 24 "data/maps/SouthCampus_Mart/scripts.pory"
	faceplayer
# 25 "data/maps/SouthCampus_Mart/scripts.pory"
	msgbox SouthCampus_Mart_NPC1_Text_0
# 26 "data/maps/SouthCampus_Mart/scripts.pory"
	closemessage
# 27 "data/maps/SouthCampus_Mart/scripts.pory"
	release
	end


	.align 2
# 31 "data/maps/SouthCampus_Mart/scripts.pory"
MyMartItems:
# 32 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POTION
# 33 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 34 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 35 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 38 "data/maps/SouthCampus_Mart/scripts.pory"
MyMartItems2:
# 39 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 40 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POTION
# 41 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 42 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 43 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

SouthCampus_Mart_Clerk_Text_0:
# 10 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "Welcome!\nHow may I serve you?$"

SouthCampus_Mart_Clerk_Text_1:
# 17 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "Please come again.$"

SouthCampus_Mart_NPC1_Text_0:
# 25 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "So many useful items for sale!$"
