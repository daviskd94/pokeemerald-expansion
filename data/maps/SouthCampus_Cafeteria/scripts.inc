SouthCampus_Cafeteria_MapScripts::
	.byte 0


SouthCampus_Cafeteria_Waiter::
# 4 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	faceplayer
# 5 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	msgbox SouthCampus_Cafeteria_Waiter_Text_0
# 6 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	closemessage
	return


SouthCampus_Cafeteria_Waitress::
# 10 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	faceplayer
# 11 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	msgbox SouthCampus_Cafeteria_Waiter_Text_0
# 12 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	closemessage
	return


SouthCampus_Cafeteria_YoungCoupleF::
# 16 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	faceplayer
# 17 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	msgbox SouthCampus_Cafeteria_YoungCoupleF_Text_0
# 18 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	closemessage
# 19 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	applymovement LOCALID_GIRLFRIEND, SouthCampus_Cafeteria_YoungCoupleF_Movement_0
	return


SouthCampus_Cafeteria_YoungCoupleM::
# 23 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	faceplayer
# 24 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	msgbox SouthCampus_Cafeteria_YoungCoupleM_Text_0
# 25 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	closemessage
# 26 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	applymovement LOCALID_BOYFRIEND, SouthCampus_Cafeteria_YoungCoupleM_Movement_0
	return


SouthCampus_Cafeteria_SchoolGirl::
# 30 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	faceplayer
# 31 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	msgbox SouthCampus_Cafeteria_SchoolGirl_Text_0
# 32 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	closemessage
# 33 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	applymovement LOCALID_SCHOOLGIRL, SouthCampus_Cafeteria_YoungCoupleF_Movement_0
	return


SouthCampus_Cafeteria_AromaGirl::
# 37 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	faceplayer
# 38 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	msgbox SouthCampus_Cafeteria_AromaGirl_Text_0
# 39 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	closemessage
# 40 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	applymovement LOCALID_AROMAGIRL, SouthCampus_Cafeteria_YoungCoupleM_Movement_0
	return


SouthCampus_Cafeteria_Guitarist::
# 44 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	faceplayer
# 45 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	msgbox SouthCampus_Cafeteria_Guitarist_Text_0
# 46 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	closemessage
# 47 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	applymovement LOCALID_GUITARIST, SouthCampus_Cafeteria_YoungCoupleF_Movement_0
	return


# 19 "data/maps/SouthCampus_Cafeteria/scripts.pory"
SouthCampus_Cafeteria_YoungCoupleF_Movement_0:
# 19 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	face_right
	step_end

# 26 "data/maps/SouthCampus_Cafeteria/scripts.pory"
SouthCampus_Cafeteria_YoungCoupleM_Movement_0:
# 26 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	face_left
	step_end

SouthCampus_Cafeteria_Waiter_Text_0:
# 5 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	.string "Hello! Please, take a seat and enjoy!$"

SouthCampus_Cafeteria_YoungCoupleF_Text_0:
# 17 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	.string "My boyfriend and I met here at the\n"
	.string "cafeteria our freshman year.\p"
	.string "I don't think he realizes he's put on a\n"
	.string "few pounds…$"

SouthCampus_Cafeteria_YoungCoupleM_Text_0:
# 24 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	.string "Don't tell my girlfriend, but I think she\n"
	.string "may have gained weight from all the\l"
	.string "free food.$"

SouthCampus_Cafeteria_SchoolGirl_Text_0:
# 31 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	.string "I get the Chansey omelette every\n"
	.string "morning!\p"
	.string "Do you think it's giving me HP effort\n"
	.string "values?$"

SouthCampus_Cafeteria_AromaGirl_Text_0:
# 38 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	.string "With the ocean nearby, there's always a\n"
	.string "wide selection of seafood.\p"
	.string "Just last night, I had the Magikarp\n"
	.string "Piccata!$"

SouthCampus_Cafeteria_Guitarist_Text_0:
# 45 "data/maps/SouthCampus_Cafeteria/scripts.pory"
	.string "Sigh…\p"
	.string "My parents dropped me off this morning,\n"
	.string "but I actually flunked out last year.\p"
	.string "How am I going to tell them?$"
