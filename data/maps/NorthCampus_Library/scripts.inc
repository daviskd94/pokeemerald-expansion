NorthCampus_Library_MapScripts::
	.byte 0


NorthCampus_Library_Book1::
# 4 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book1_Text_0
# 5 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book2::
# 9 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book2_Text_0
# 10 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book3::
# 14 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book3_Text_0
# 15 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book4::
# 19 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book4_Text_0
# 20 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book5::
# 24 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book5_Text_0
# 25 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book6::
# 29 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book6_Text_0
# 30 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book7::
# 34 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book7_Text_0
# 35 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book8::
# 39 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book8_Text_0
# 40 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book9::
# 44 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book9_Text_0
# 45 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book10::
# 49 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book10_Text_0
# 50 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book11::
# 54 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book11_Text_0
# 55 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book12::
# 59 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book12_Text_0
# 60 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book13::
# 64 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book13_Text_0
# 65 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book14::
# 69 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book14_Text_0
# 70 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book15::
# 74 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book15_Text_0
# 75 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book16::
# 79 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Book16_Text_0
# 80 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Librarian::
# 84 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Librarian_Text_0
# 85 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_NPC1::
# 89 "data/maps/NorthCampus_Library/scripts.pory"
	faceplayer
# 90 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_NPC1_Text_0
# 91 "data/maps/NorthCampus_Library/scripts.pory"
	release
# 92 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_NPC2::
# 96 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_NPC2_Text_0
# 97 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_NPC3::
# 101 "data/maps/NorthCampus_Library/scripts.pory"
	lock
# 102 "data/maps/NorthCampus_Library/scripts.pory"
	faceplayer
# 103 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_NPC3_Text_0, MSGBOX_YESNO
# 104 "data/maps/NorthCampus_Library/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NorthCampus_Library_NPC3_2
# 107 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_NPC3_Text_2
NorthCampus_Library_NPC3_1:
# 109 "data/maps/NorthCampus_Library/scripts.pory"
	release
# 110 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return

NorthCampus_Library_NPC3_2:
# 105 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_NPC3_Text_1
	goto NorthCampus_Library_NPC3_1


NorthCampus_Library_NPC4::
# 114 "data/maps/NorthCampus_Library/scripts.pory"
	lock
# 115 "data/maps/NorthCampus_Library/scripts.pory"
	faceplayer
# 116 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_NPC4_Text_0
# 117 "data/maps/NorthCampus_Library/scripts.pory"
	release
# 118 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_NPC5::
# 122 "data/maps/NorthCampus_Library/scripts.pory"
	lock
# 123 "data/maps/NorthCampus_Library/scripts.pory"
	faceplayer
# 124 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_NPC5_Text_0
# 125 "data/maps/NorthCampus_Library/scripts.pory"
	release
# 126 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_ProfessorHanzneestoz::
# 130 "data/maps/NorthCampus_Library/scripts.pory"
	lock
# 131 "data/maps/NorthCampus_Library/scripts.pory"
	faceplayer
# 132 "data/maps/NorthCampus_Library/scripts.pory"
	setspeaker SP_NAME_HANZNEESTOZ
# 133 "data/maps/NorthCampus_Library/scripts.pory"
	goto_if_set FLAG_POST_PROFESSOR_HANZNEESTOZ, NorthCampus_Library_ProfessorHanzneestoz_2
# 144 "data/maps/NorthCampus_Library/scripts.pory"
	checkitem ITEM_ESCAPE_ROPE
# 145 "data/maps/NorthCampus_Library/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NorthCampus_Library_ProfessorHanzneestoz_4
# 167 "data/maps/NorthCampus_Library/scripts.pory"
	goto_if_set FLAG_FIELDSTONE_CAVERN_ENTER, NorthCampus_Library_ProfessorHanzneestoz_5
# 179 "data/maps/NorthCampus_Library/scripts.pory"
	setspeaker SP_NAME_HANZNEESTOZ
# 180 "data/maps/NorthCampus_Library/scripts.pory"
	checkplayergender
# 181 "data/maps/NorthCampus_Library/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq NorthCampus_Library_ProfessorHanzneestoz_22
# 184 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_9
NorthCampus_Library_ProfessorHanzneestoz_21:
# 186 "data/maps/NorthCampus_Library/scripts.pory"
	setflag FLAG_FIELDSTONE_CAVERN_ENTER
# 187 "data/maps/NorthCampus_Library/scripts.pory"
	release
# 188 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return

NorthCampus_Library_ProfessorHanzneestoz_2:
# 134 "data/maps/NorthCampus_Library/scripts.pory"
	checkplayergender
# 135 "data/maps/NorthCampus_Library/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq NorthCampus_Library_ProfessorHanzneestoz_10
# 138 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_1
NorthCampus_Library_ProfessorHanzneestoz_9:
# 140 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
# 141 "data/maps/NorthCampus_Library/scripts.pory"
	release
	end

NorthCampus_Library_ProfessorHanzneestoz_4:
# 146 "data/maps/NorthCampus_Library/scripts.pory"
	checkplayergender
# 147 "data/maps/NorthCampus_Library/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq NorthCampus_Library_ProfessorHanzneestoz_14
# 150 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_3
NorthCampus_Library_ProfessorHanzneestoz_13:
# 152 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
# 153 "data/maps/NorthCampus_Library/scripts.pory"
	call NorthCampus_Library_Intercom
# 154 "data/maps/NorthCampus_Library/scripts.pory"
	setspeaker SP_NAME_HANZNEESTOZ
# 155 "data/maps/NorthCampus_Library/scripts.pory"
	checkplayergender
# 156 "data/maps/NorthCampus_Library/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq NorthCampus_Library_ProfessorHanzneestoz_26
# 159 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_5
NorthCampus_Library_ProfessorHanzneestoz_25:
# 161 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
# 162 "data/maps/NorthCampus_Library/scripts.pory"
	setflag FLAG_POST_PROFESSOR_HANZNEESTOZ
# 163 "data/maps/NorthCampus_Library/scripts.pory"
	setvar VAR_NORTH_CAMPUS_STATE, 6
# 164 "data/maps/NorthCampus_Library/scripts.pory"
	release
	end

NorthCampus_Library_ProfessorHanzneestoz_5:
# 168 "data/maps/NorthCampus_Library/scripts.pory"
	checkplayergender
# 169 "data/maps/NorthCampus_Library/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq NorthCampus_Library_ProfessorHanzneestoz_18
# 172 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_7
NorthCampus_Library_ProfessorHanzneestoz_17:
# 174 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
# 175 "data/maps/NorthCampus_Library/scripts.pory"
	release
	end

NorthCampus_Library_ProfessorHanzneestoz_10:
# 136 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_0
	goto NorthCampus_Library_ProfessorHanzneestoz_9

NorthCampus_Library_ProfessorHanzneestoz_14:
# 148 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_2
	goto NorthCampus_Library_ProfessorHanzneestoz_13

NorthCampus_Library_ProfessorHanzneestoz_18:
# 170 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_6
	goto NorthCampus_Library_ProfessorHanzneestoz_17

NorthCampus_Library_ProfessorHanzneestoz_22:
# 182 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_8
	goto NorthCampus_Library_ProfessorHanzneestoz_21

NorthCampus_Library_ProfessorHanzneestoz_26:
# 157 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_ProfessorHanzneestoz_Text_4
	goto NorthCampus_Library_ProfessorHanzneestoz_25


NorthCampus_Library_Intercom::
# 193 "data/maps/NorthCampus_Library/scripts.pory"
	playse SE_DING_DONG
# 194 "data/maps/NorthCampus_Library/scripts.pory"
	waitse
# 195 "data/maps/NorthCampus_Library/scripts.pory"
	setspeaker SP_NAME_INTERCOM
# 196 "data/maps/NorthCampus_Library/scripts.pory"
	msgbox NorthCampus_Library_Intercom_Text_0
# 197 "data/maps/NorthCampus_Library/scripts.pory"
	closemessage
	return


NorthCampus_Library_Book1_Text_0:
# 4 "data/maps/NorthCampus_Library/scripts.pory"
	.string "‘The History of Tractor University:\p"
	.string "Founded in 1910, Tractor University has\n"
	.string "a long and proud tradition of academic\l"
	.string "excellence, research, and farm handling.’$"

NorthCampus_Library_Book2_Text_0:
# 9 "data/maps/NorthCampus_Library/scripts.pory"
	.string "The Fault in our Tractors$"

NorthCampus_Library_Book3_Text_0:
# 14 "data/maps/NorthCampus_Library/scripts.pory"
	.string "A Tale of Two Tractors$"

NorthCampus_Library_Book4_Text_0:
# 19 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Charlotte's Tractor$"

NorthCampus_Library_Book5_Text_0:
# 24 "data/maps/NorthCampus_Library/scripts.pory"
	.string "The Tractor in the Rye$"

NorthCampus_Library_Book6_Text_0:
# 29 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Gone with the Exhaust$"

NorthCampus_Library_Book7_Text_0:
# 34 "data/maps/NorthCampus_Library/scripts.pory"
	.string "The Diary of John Deere$"

NorthCampus_Library_Book8_Text_0:
# 39 "data/maps/NorthCampus_Library/scripts.pory"
	.string "And Then There Were Tractors$"

NorthCampus_Library_Book9_Text_0:
# 44 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Dream of the Red Tractor$"

NorthCampus_Library_Book10_Text_0:
# 49 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Much Ado About Tractors$"

NorthCampus_Library_Book11_Text_0:
# 54 "data/maps/NorthCampus_Library/scripts.pory"
	.string "A Song of Oil and Gears$"

NorthCampus_Library_Book12_Text_0:
# 59 "data/maps/NorthCampus_Library/scripts.pory"
	.string "So Long and Thanks for all the Tractors$"

NorthCampus_Library_Book13_Text_0:
# 64 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Tractors for Idiots$"

NorthCampus_Library_Book14_Text_0:
# 69 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Saying Your Tractors Backwards$"

NorthCampus_Library_Book15_Text_0:
# 74 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Eat, Pray, Farm$"

NorthCampus_Library_Book16_Text_0:
# 79 "data/maps/NorthCampus_Library/scripts.pory"
	.string "The Girl on the Tractor$"

NorthCampus_Library_Librarian_Text_0:
# 84 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Welcome to Mahindra Library!\p"
	.string "Feel free to browse our extensive\n"
	.string "collection of books while you study.$"

NorthCampus_Library_NPC1_Text_0:
# 90 "data/maps/NorthCampus_Library/scripts.pory"
	.string "I love studying here at\n"
	.string "Mahindra Library.\p"
	.string "It's so quiet and peaceful!$"

NorthCampus_Library_NPC2_Text_0:
# 96 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Uh oh…\n"
	.string "I think they don't have my textbook…$"

NorthCampus_Library_NPC3_Text_0:
# 103 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Would you like to hear about\nthe book I'm reading?$"

NorthCampus_Library_NPC3_Text_1:
# 105 "data/maps/NorthCampus_Library/scripts.pory"
	.string "It's called 'Twilight Tractors'.\p"
	.string "It's about these two tractors who fall\n"
	.string "in love…\p"
	.string "Except, one of them is a vampire\n"
	.string "tractor who wants to drink the other's\l"
	.string "oil!\p"
	.string "They spend all this time trying to\n"
	.string "figure out how to make their\l"
	.string "relationship work.\p"
	.string "There's also all these other evil\n"
	.string "vampire tractors who want to keep them\l"
	.string "apart.\p"
	.string "All they want is to plow fields together\n"
	.string "forever!\p"
	.string "Also, the vampire tractor is afraid to\n"
	.string "turn the other tractor into a vampire\l"
	.string "because she might regret becoming a\l"
	.string "super-powered undead tractor who wil\l"
	.string "never rust.\p"
	.string "At the end, she nearly dies giving birth\n"
	.string "to his baby tractor, and he has to turn\l"
	.string "into into a vampire tractor to save her\l"
	.string "life…\p"
	.string "It's really quite the love story!$"

NorthCampus_Library_NPC3_Text_2:
# 107 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Oh, okay. Maybe next time!$"

NorthCampus_Library_NPC4_Text_0:
# 116 "data/maps/NorthCampus_Library/scripts.pory"
	.string "I've finished Chapter 1 of\n"
	.string "Tractors for Idiots.\p"
	.string "It's really helping me understand how\n"
	.string "to operate my tractor better!$"

NorthCampus_Library_NPC5_Text_0:
# 124 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Did you know that the first gasoline\n"
	.string "tractor was invented in 1892 by John\l"
	.string "Froelich?\p"
	.string "Previously, they were steam powered\n"
	.string "but were prone to exploding!\p"
	.string "Tractors became so revolutionary that\n"
	.string "just a couple decades later, we have a\l"
	.string "school named after them!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_0:
# 136 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Ah, Herr {PLAYER}!\p"
	.string "I trust your explorations are going\n"
	.string "vell, ja?\p"
	.string "Remember, science is all about curiosity\n"
	.string "und discovery!\p"
	.string "Vunderbar!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_1:
# 138 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Ah, Frau {PLAYER}!\p"
	.string "I trust your explorations are going\n"
	.string "vell, ja?\p"
	.string "Remember, science is all about curiosity\n"
	.string "und discovery!\p"
	.string "Vunderbar!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_2:
# 148 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Ah, Herr {PLAYER}!\p"
	.string "I see you found the {COLOR GREEN}Escape Rope!\p"
	.string "{COLOR DARK_GRAY}Vunderbar!\n"
	.string "Excellent work!\p"
	.string "That rope ist very essential for cave\n"
	.string "exploration und research.\p"
	.string "That ist yours to keep now!\n"
	.string "Use it visely!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_3:
# 150 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Ah, Frau {PLAYER}!\p"
	.string "I see you found the {COLOR GREEN}Escape Rope!\p"
	.string "{COLOR DARK_GRAY}Vunderbar!\n"
	.string "Excellent work!\p"
	.string "That rope ist very essential for cave\n"
	.string "exploration und research.\p"
	.string "That ist yours to keep now!\n"
	.string "Use it visely!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_4:
# 157 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Now, off you go, Herr {PLAYER}!\p"
	.string "I vill see you around, ja?\n"
	.string "Good luck on your journey!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_5:
# 159 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Now, off you go, Frau {PLAYER}!\p"
	.string "I vill see you around, ja?\n"
	.string "Good luck on your journey!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_6:
# 170 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Herr {PLAYER}, have you found ze item\n"
	.string "I asked for?\p"
	.string "Nein!?\p"
	.string "You must go to Fieldstone Cavern und\n"
	.string "retrieve it, vith haste!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_7:
# 172 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Frau {PLAYER}, have you found ze item\n"
	.string "I asked for?\p"
	.string "Nein!?\p"
	.string "You must go to Fieldstone Cavern und\n"
	.string "retrieve it, vith haste!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_8:
# 182 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Ahh, guten tag, Herr {PLAYER}!\p"
	.string "You are here for the review, ja?\p"
	.string "Vunderbar!\p"
	.string "Now, as you know, I am Professor\n"
	.string "Hanzneestoz.\p"
	.string "I am specialist in subterranenan\n"
	.string "studies, expert in fossil research, and\l"
	.string "part-time enthusiast of yelling\l"
	.string "'AH-HAH!' vhen I make a discovery!\p"
	.string "Zis ist completely normal scientific\n"
	.string "behavior, ja?\p"
	.string "Now, today's review ist simple.\p"
	.string "You vill be exploring der little cave to\n"
	.string "the vest of Main Hall.\p"
	.string "Inside, you vill retrieve an item I have\n"
	.string "hidden!\p"
	.string "Now, be very, very careful, Herr\n"
	.string "{PLAYER}, as falling into holes ist\l"
	.string "NOT on ze syllabus!\p"
	.string "Ve had an incident last year zat\n"
	.string "resulted in a student losing his\l"
	.string "eyebrows!\p"
	.string "Your mission ist to retrieve ze item and\n"
	.string "show me here in ze Library!\p"
	.string "Got it?\n"
	.string "Vunderbar!\p"
	.string "Now, off you go!$"

NorthCampus_Library_ProfessorHanzneestoz_Text_9:
# 184 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Ahh, guten tag, Frau {PLAYER}!\p"
	.string "You are here for the review, ja?\p"
	.string "Vunderbar!\p"
	.string "Now, as you know, I am Professor\n"
	.string "Hanzneestoz.\p"
	.string "I am specialist in subterranenan\n"
	.string "studies, expert in fossil research, and\l"
	.string "part-time enthusiast of yelling\l"
	.string "'AH-HAH!' vhen I make a discovery!\p"
	.string "Zis ist completely normal scientific\n"
	.string "behavior, ja?\p"
	.string "Now, today's review ist simple.\p"
	.string "You vill be exploring der little cave to\n"
	.string "the vest of Main Hall.\p"
	.string "Inside, you vill retrieve an item I have\n"
	.string "hidden!\p"
	.string "Now, be very, very careful, Frau\n"
	.string "{PLAYER}, as falling into holes ist\l"
	.string "NOT on ze syllabus!\p"
	.string "Ve had an incident last year zat\n"
	.string "resulted in a student losing his\l"
	.string "eyebrows!\p"
	.string "Your mission ist to retrieve ze item and\n"
	.string "show me here in ze Library!\p"
	.string "Got it?\n"
	.string "Vunderbar!\p"
	.string "Now, off you go!$"

NorthCampus_Library_Intercom_Text_0:
# 196 "data/maps/NorthCampus_Library/scripts.pory"
	.string "Attention seniors.\p"
	.string "Please report back to Main Hall to\n"
	.string "complete your review.$"
