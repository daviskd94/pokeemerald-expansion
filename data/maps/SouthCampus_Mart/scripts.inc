SouthCampus_Mart_MapScripts::
	.byte 0


SouthCampus_Mart_Clerk::
# 10 "data/maps/SouthCampus_Mart/scripts.pory"
	lock
# 11 "data/maps/SouthCampus_Mart/scripts.pory"
	faceplayer
# 12 "data/maps/SouthCampus_Mart/scripts.pory"
	speakername Clerk
# 13 "data/maps/SouthCampus_Mart/scripts.pory"
	msgbox SouthCampus_Mart_Clerk_Text_0
# 14 "data/maps/SouthCampus_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/SouthCampus_Mart/scripts.pory"
	pokemart MyMartItems
# 16 "data/maps/SouthCampus_Mart/scripts.pory"
	msgbox SouthCampus_Mart_Clerk_Text_1
# 17 "data/maps/SouthCampus_Mart/scripts.pory"
	release
	end


	.align 2
# 21 "data/maps/SouthCampus_Mart/scripts.pory"
MyMartItems:
# 22 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_POTION
# 23 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 24 "data/maps/SouthCampus_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

SouthCampus_Mart_Clerk_Text_0:
# 13 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "Welcome!\nHow may I serve you?$"

SouthCampus_Mart_Clerk_Text_1:
# 16 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "Please come again.$"

Clerk::
# 6 "data/maps/SouthCampus_Mart/scripts.pory"
	.string "Mart Clerk$"
