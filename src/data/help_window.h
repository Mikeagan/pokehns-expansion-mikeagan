// Add entries here
// These entries are example entries which you can replace, but they exist to get you started.
// Remember to modify include/constants/help_window.h to include identifiers so they can be used in event scripts.
const struct HelpWindow gHelpWindowInfo[] =
{
    [HELP_DEMO_WINDOW] =
    {
        .header = COMPOUND_STRING("Information: Help Windows"),
        .desc = COMPOUND_STRING("This is a help window. You can put\n"
                                "lots of text on the screen that\n"
                                "players won't read!\n\nIsn't that great!"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 4, 5},
    },
    [HELP_GAMESTART_WINDOW] =
    {
        .header = COMPOUND_STRING("Information: More Options"),
        .desc = COMPOUND_STRING("The clock can be changed from any\n"
                                "POKéMON CENTER with no penalty.\n"
                                "Make sure to check your BAG's KEY ITEMS\n"
                                "and your OPTIONS MENU for even more\n"
                                "ways to customize your experience.\n"
                                "Enjoy!"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_TRADE_WINDOW] =
    {
        .header = COMPOUND_STRING("WARNING: COMPATIBILITY"),
        .desc = COMPOUND_STRING("Attempting to link incorrectly may result\n"
                                "in permanent damage to your save file.\n"
                                "Only link with another player if:\n"
                                "You are both playing Heart & Soul.\n"
                                "You are both on the same version.\n"
                                "You both have the same challenge settings.\n"
                                "You are NOT using any randomizer settings."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 4, 5},
    },
    [HELP_TELEPORTER_WINDOW] =
    {
        .header = COMPOUND_STRING("OPTIONAL BONUS CONTENT: TELEPORTER"),
        .desc = COMPOUND_STRING("The TELEPORTER can PERMANENTLY change\n"
                                "POKéMON into their GALARIAN forms.\n"
                                "GALARIAN forms are NOT required\n"
                                "for story progression or\n"
                                "NATIONAL POKéDEX completion.\n"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_SINJOH_WINDOW] =
    {
        .header = COMPOUND_STRING("OPTIONAL BONUS CONTENT: SINJOH"),
        .desc = COMPOUND_STRING("This NPC grants access to optional\n"
                                "bonus content: SINJOH.\n"
                                "It is NOT required for story\n"
                                "or NATIONAL POKéDEX completion.\n"
                                "\n"
                                "It's just a bonus. If you want it."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_ALOLA_WINDOW] =
    {
        .header = COMPOUND_STRING("OPTIONAL BONUS CONTENT: ISLES"),
        .desc = COMPOUND_STRING("This NPC grants access to optional\n"
                                "bonus content: ISLES.\n"
                                "It is NOT required for story\n"
                                "or NATIONAL POKéDEX completion.\n"
                                "\n"
                                "It's just a bonus. If you want it."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE1_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON ABILITIES"),
        .desc = COMPOUND_STRING("PICHU's ability is STATIC.\n"
                                "CLEFFA's ability is CUTE CHARM.\n"
                                "IGGLYBUFF's ability is CUTE CHARM.\n"
                                "TYROGUE's ability is GUTS.\n"
                                "SMOOCHUM's ability is OBLIVIOUS.\n"
                                "ELEKID's ability is STATIC.\n"
                                "MAGBY's ability is FLAME BODY.\p"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
	[HELP_DAYCARE1_WINDOW2] =
    {
        .header = COMPOUND_STRING("BABY POKéMON ABILITIES"),
        .desc = COMPOUND_STRING("CHIKORITA's ability is OVERGROW.\n"
								"CYNDAQUIL's ability is BLAZE.\n"
								"TOTODILE's ability is TORRENT.\n"
								"EEVEE's ability is RUN_AWAY.\n"
								"MANTYKE's ability is SWIFT SWIM.\n"
								"BONSLY's ability is STURDY.\n"
								"HAPPINY's ability is NATURAL CURE.\n"
								"MIME_JR's ability is SOUNDPROOF.\n"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE2_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON TYPES"),
        .desc = COMPOUND_STRING("PICHU is ELECTRIC type.\n"
                                "CLEFFA is NORMAL type.\n"
                                "IGGLYBUFF is NORMAL type.\n"
                                "TYROGUE is FIGHTING type.\n"
                                "SMOOCHUM is ICE type.\n"
                                "ELEKID is ELECTRIC type.\n"
                                "MAGBY is FIRE type.\p"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
	[HELP_DAYCARE2_WINDOW2] =
    {
        .header = COMPOUND_STRING("BABY POKéMON TYPES"),
        .desc = COMPOUND_STRING("CHIKORITA's is GRASS type.\n"
								"CYNDAQUIL's is FIRE type.\n"
								"TOTODILE's is WATER type.\n"
								"EEVEE's is NORMAL type.\n"
								"MANTYKE's is WATER type.\n"
								"BONSLY's is ROCK type.\n"
								"HAPPINY's is NORMAL type.\n"
								"MIME_JR's is PSYCHIC type.\n"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE3_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON CRIES"),
        .desc = COMPOUND_STRING("PICHU says WAAAH.\n"
                                "CLEFFA says EEK.\n"
                                "IGGLYBUFF says LALALA.\n"
                                "TYROGUE says HIYAH.\n"
                                "SMOOCHUM says EHEHE.\n"
                                "ELEKID says OI, OI, OI.\n"
                                "MAGBY says TCH.\p"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
	[HELP_DAYCARE3_WINDOW2] =
    {
        .header = COMPOUND_STRING("BABY POKéMON CRIES"),
        .desc = COMPOUND_STRING("CHIKORITA says TCH.\n"
								"CYNDAQUIL says GRAAAH.\n"
								"TOTODILE says GWAH.\n"
								"EEVEE says EEK.\n"
								"MANTYKE says WAAAH.\n"
								"BONSLY says URGH.\n"
								"HAPPINY says SIGH.\n"
								"MIME_JR says HMM.\n"
								
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE4_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON ACTIONS"),
        .desc = COMPOUND_STRING("PICHU likes to PLAY all day.\n"
                                "CLEFFA LOOKS at the moon.\n"
                                "IGGLYBUFF puts them to SLEEP.\n"
                                "TYROGUE TRAINS constantly.\n"
                                "SMOOCHUM likes to SHOW off.\n"
                                "ELEKID STORES up charge.\n"
                                "MAGBY often ANGERS.\p"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
	[HELP_DAYCARE4_WINDOW2] =
    {
        .header = COMPOUND_STRING("BABY POKéMON ACTIONS"),
        .desc = COMPOUND_STRING("CHIKORITA likes to PLEASE.\n"
								"CYNDAQUIL TRAINS hard.\n"
								"TOTODILE ANGERS easily.\n"
								"EEVEE likes CHANGE.\n"
								"MANTYKE SINK low in water.\n"
								"BONSLY likes to PRETEND.\n"
								"HAPPINY has your TRUST.\n"
								"MIME_JR always WORRY.\n"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_POKEBLOCK_WINDOW] =
    {
        .header = COMPOUND_STRING("FEEDERS: REGULAR POKéBLOCKS"),
        .desc = COMPOUND_STRING("POKéBLOCK colors attract perfect IVs:\n"
                                "RED: HP,ATK,SPE   BLU: HP,SPA,SPE\n"
                                "PNK: ATK,SPA,SPE  GRN: HP,DEF,SPD\n"
                                "YEL: HP,ATK,DEF   PUR: ATK,DEF,SPD\n"
                                "IND: HP,SPA,SPD   BRN: DEF,SPE,SPD\n"
                                "LBL: SPA,SPE,SPD  OLV: ATK,DEF,SPE\n"
                                "GRY: HP,ATK,SPA\n"
                                "Every POKéBLOCK attracts HIDDEN ABILITY."

                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_GOLD_POKEBLOCK_WINDOW] =
    {
        .header = COMPOUND_STRING("FEEDERS: GOLD POKéBLOCKS"),
        .desc = COMPOUND_STRING("GOLD POKéBLOCKS attract POKéMON with\n"
                                "5 perfect IVs. Flavor determines which\n"
                                "IV is not perfect.\n"
                                "SPICY: no SP.ATK    DRY:    no ATTACK\n"
                                "SWEET: no SP.DEF   BITTER: no SPEED\n"
                                "SOUR:  no HP\n"
                                "Every POKéBLOCK attracts HIDDEN ABILITY."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    // Add more entries
};
