Fieldstone_Cavern_MapScripts::
# 2 "data/maps/Fieldstone_Cavern/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Fieldstone_Cavern_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Fieldstone_Cavern_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


FieldstoneCavern_EventScript_PokemonBreederCeleste::
# 8 "data/maps/Fieldstone_Cavern/scripts.pory"
	trainerbattle_single TRAINER_CELESTE, Celeste_Intro, Celeste_Outro
# 9 "data/maps/Fieldstone_Cavern/scripts.pory"
	setspeaker SP_NAME_CELESTE
# 10 "data/maps/Fieldstone_Cavern/scripts.pory"
	msgbox FieldstoneCavern_EventScript_PokemonBreederCeleste_Text_0
# 11 "data/maps/Fieldstone_Cavern/scripts.pory"
	closemessage
	end


FieldstoneCavern_EventScript_PokemonBreederGabe::
# 24 "data/maps/Fieldstone_Cavern/scripts.pory"
	trainerbattle_single TRAINER_GABE, Gabe_Intro, Gabe_Outro
# 25 "data/maps/Fieldstone_Cavern/scripts.pory"
	setspeaker SP_NAME_GABE
# 26 "data/maps/Fieldstone_Cavern/scripts.pory"
	msgbox FieldstoneCavern_EventScript_PokemonBreederGabe_Text_0
# 27 "data/maps/Fieldstone_Cavern/scripts.pory"
	closemessage
	end


FieldstoneCavern_EventScript_Bertie::
# 40 "data/maps/Fieldstone_Cavern/scripts.pory"
	trainerbattle_single TRAINER_BERTIE, Bertie_Intro, Bertie_Outro
# 41 "data/maps/Fieldstone_Cavern/scripts.pory"
	setspeaker SP_NAME_BERTIE
# 42 "data/maps/Fieldstone_Cavern/scripts.pory"
	msgbox FieldstoneCavern_EventScript_Bertie_Text_0
# 43 "data/maps/Fieldstone_Cavern/scripts.pory"
	closemessage
	end


FieldstoneCavern_EventScript_Colton::
# 56 "data/maps/Fieldstone_Cavern/scripts.pory"
	trainerbattle_single TRAINER_COLTON, Colton_Intro, Colton_Outro
# 57 "data/maps/Fieldstone_Cavern/scripts.pory"
	setspeaker SP_NAME_COLTON
# 58 "data/maps/Fieldstone_Cavern/scripts.pory"
	msgbox FieldstoneCavern_EventScript_Colton_Text_0
# 59 "data/maps/Fieldstone_Cavern/scripts.pory"
	closemessage
	end


FieldstoneCavern_EventScript_Buck::
# 72 "data/maps/Fieldstone_Cavern/scripts.pory"
	trainerbattle_single TRAINER_BUCK, Buck_Intro, Buck_Outro
# 73 "data/maps/Fieldstone_Cavern/scripts.pory"
	setspeaker SP_NAME_BUCK
# 74 "data/maps/Fieldstone_Cavern/scripts.pory"
	msgbox FieldstoneCavern_EventScript_Buck_Text_0
# 75 "data/maps/Fieldstone_Cavern/scripts.pory"
	closemessage
	end


FieldstoneCavern_EventScript_PokemonBreederCeleste_Text_0:
# 10 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "My brother is somewhere deeper in the\n"
	.string "cave.\p"
	.string "He will probably want to battle you too.$"

FieldstoneCavern_EventScript_PokemonBreederGabe_Text_0:
# 26 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "You battled my sister earlier?\n"
	.string "What did she say about me?\p"
	.string "Nothing good I'm certain…$"

FieldstoneCavern_EventScript_Bertie_Text_0:
# 42 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Congratulations on your win!\n"
	.string "I hope we can battle again!$"

FieldstoneCavern_EventScript_Colton_Text_0:
# 58 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Thanks for the battle.\n"
	.string "We should do it again sometime!$"

FieldstoneCavern_EventScript_Buck_Text_0:
# 74 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Go ahead and take the Escape Rope.\n"
	.string "You earned it!$"

Celeste_Intro::
# 15 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "It's so boring in this cave.\pWill you battle me to pass the time?$"

Celeste_Outro::
# 19 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Aww.\nThat didn't take as long as I hoped.$"

Gabe_Intro::
# 31 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Pip, pip, cheerio, and all that!\pWould you do me the honour\nof a battle?$"

Gabe_Outro::
# 35 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "My goodness, it seems I was\nthoroughly thashed!$"

Bertie_Intro::
# 47 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Hi! Wanna battle?\nLet's make it a good one!$"

Bertie_Outro::
# 51 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Wow!\nThat was amazing!$"

Colton_Intro::
# 63 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Ahh!\nDon't sneak up on me like that!\p…Oh, a battle?\nSure, I guess that's okay.$"

Colton_Outro::
# 67 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "I need to study more…$"

Buck_Intro::
# 79 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Hey there!\nAre you looking for the rope too?\pYou'll have to battle me for it!$"

Buck_Outro::
# 83 "data/maps/Fieldstone_Cavern/scripts.pory"
	.string "Hey!\nYou're pretty good!$"
