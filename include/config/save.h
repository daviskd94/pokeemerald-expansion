#ifndef GUARD_CONFIG_SAVE_H
#define GUARD_CONFIG_SAVE_H

// SaveBlock1 configs
#define FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK1    FALSE   // Free up unused Pokédex seen flags (52 bytes).
#define FREE_TRAINER_HILL                   TRUE  // Frees up Trainer Hill data (28 bytes).
#define FREE_MYSTERY_EVENT_BUFFERS          TRUE   // Frees up ramScript (1104 bytes).
#define FREE_MATCH_CALL                     TRUE   // Frees up match call and rematch / VS Seeker data. (104 bytes).
#define FREE_UNION_ROOM_CHAT                TRUE   // Frees up union room chat (212 bytes).
#define FREE_ENIGMA_BERRY                   TRUE   // Frees up E-Reader Enigma Berry data (52 bytes).
#define FREE_LINK_BATTLE_RECORDS            TRUE   // Frees up link battle record data (88 bytes).
#define FREE_MYSTERY_GIFT                   TRUE   // Frees up Mystery Gift data (876 bytes).
                                            // SaveBlock1 total: 2516 bytes
// SaveBlock2 configs
#define FREE_BATTLE_TOWER_E_READER          TRUE   // Frees up Battle Tower E-Reader data (188 bytes).
#define FREE_POKEMON_JUMP                   FALSE   // Frees up Pokémon Jump data (16 bytes).
#define FREE_RECORD_MIXING_HALL_RECORDS     TRUE   // Frees up hall records for record mixing (1032 bytes).
#define FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK2    FALSE   // Free up unused Pokédex seen flags (108 bytes).
                                            // SaveBlock2 total: 1274 bytes

                                            // Grand Total: 3790

#endif // GUARD_CONFIG_SAVE_H
