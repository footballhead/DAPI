#pragma once
#include<cstdint>

namespace DAPI
{
	enum struct player_mode {
		PLAYER_MODE_STANDING = 0,
		PLAYER_MODE_WALKING_1 = 1,
		PLAYER_MODE_WALKING_2 = 2,
		PLAYER_MODE_WALKING_3 = 3,
		PLAYER_MODE_ATTACKING_MELEE = 4,
		PLAYER_MODE_ATTACKING_RANGED = 5,
		PLAYER_MODE_BLOCKING = 6,
		PLAYER_MODE_GETTING_HIT = 7,
		PLAYER_MODE_DYING = 8,
		PLAYER_MODE_CASTING_A_SPELL = 9,
		PLAYER_MODE_CHANGING_LEVELS = 10,
		PLAYER_MODE_QUITTING = 11,
	};

	enum struct direction {
		DIRECTION_SOUTH = 0,
		DIRECTION_SOUTH_WEST = 1,
		DIRECTION_WEST = 2,
		DIRECTION_NORTH_WEST = 3,
		DIRECTION_NORTH = 4,
		DIRECTION_NORTH_EAST = 5,
		DIRECTION_EAST = 6,
		DIRECTION_SOUTH_EAST = 7,
		DIRECTION_OMNI = 8, ///< All directions.
	};

	enum struct _cmd_id {
		CMD_STAND = 0,
		CMD_WALKXY = 1,
		CMD_ACK_PLRINFO = 2,
		CMD_ADDSTR = 3,
		CMD_ADDMAG = 4,
		CMD_ADDDEX = 5,
		CMD_ADDVIT = 6,
		CMD_SBSPELL = 7,
		CMD_GETITEM = 8,
		CMD_AGETITEM = 9,
		CMD_PUTITEM = 10,
		CMD_RESPAWNITEM = 11,
		CMD_ATTACKXY = 12,
		CMD_RATTACKXY = 13,
		CMD_SPELLXY = 14,
		CMD_TSPELLXY = 15,
		CMD_OPOBJXY = 16,
		CMD_DISARMXY = 17,
		CMD_ATTACKID = 18,
		CMD_ATTACKPID = 19,
		CMD_RATTACKID = 20,
		CMD_RATTACKPID = 21,
		CMD_SPELLID = 22,
		CMD_SPELLPID = 23,
		CMD_TSPELLID = 24,
		CMD_TSPELLPID = 25,
		CMD_RESURRECT = 26,
		CMD_OPOBJT = 27,
		CMD_KNOCKBACK = 28,
		CMD_TALKXY = 29,
		CMD_NEWLVL = 30,
		CMD_WARP = 31,
		CMD_CHEAT_EXPERIENCE = 32,
		CMD_CHEAT_SPELL_LEVEL = 33,
		CMD_DEBUG = 34,
		CMD_SYNCDATA = 35,
		CMD_MONSTDEATH = 36,
		CMD_MONSTDAMAGE = 37,
		CMD_PLRDEAD = 38,
		CMD_REQUESTGITEM = 39,
		CMD_REQUESTAGITEM = 40,
		CMD_GOTOGETITEM = 41,
		CMD_GOTOAGETITEM = 42,
		CMD_OPENDOOR = 43,
		CMD_CLOSEDOOR = 44,
		CMD_OPERATEOBJ = 45,
		CMD_PLROPOBJ = 46,
		CMD_BREAKOBJ = 47,
		CMD_CHANGEPLRITEMS = 48,
		CMD_DELPLRITEMS = 49,
		CMD_PLRDAMAGE = 50,
		CMD_PLRLEVEL = 51,
		CMD_DROPITEM = 52,
		CMD_PLAYER_JOINLEVEL = 53,
		CMD_SEND_PLRINFO = 54,
		CMD_SATTACKXY = 55,
		CMD_ACTIVATEPORTAL = 56,
		CMD_DEACTIVATEPORTAL = 57,
		CMD_DLEVEL_0 = 58,
		CMD_DLEVEL_1 = 59,
		CMD_DLEVEL_2 = 60,
		CMD_DLEVEL_3 = 61,
		CMD_DLEVEL_4 = 62,
		CMD_DLEVEL_5 = 63,
		CMD_DLEVEL_6 = 64,
		CMD_DLEVEL_7 = 65,
		CMD_DLEVEL_8 = 66,
		CMD_DLEVEL_9 = 67,
		CMD_DLEVEL_10 = 68,
		CMD_DLEVEL_11 = 69,
		CMD_DLEVEL_12 = 70,
		CMD_DLEVEL_13 = 71,
		CMD_DLEVEL_14 = 72,
		CMD_DLEVEL_15 = 73,
		CMD_DLEVEL_16 = 74,
		CMD_DLEVEL_JUNK = 75,
		CMD_DLEVEL_END = 76,
		CMD_HEALOTHER = 77,
		CMD_STRING = 78,
		CMD_SETSTR = 79,
		CMD_SETMAG = 80,
		CMD_SETDEX = 81,
		CMD_SETVIT = 82,
		CMD_RETOWN = 83,
		CMD_SPELLXYD = 84,
		CMD_ITEMEXTRA = 85,
		CMD_SYNCPUTITEM = 86,
		CMD_KILLGOLEM = 87,
		CMD_SYNCQUEST = 88,
		CMD_ENDSHIELD = 89,
		CMD_AWAKEGOLEM = 90,
		CMD_NOVA = 91,
		CMD_SETSHIELD = 92,
		CMD_REMSHIELD = 93,
		FAKE_CMD_SETID = 94,
		FAKE_CMD_DROPID = 95,
		NUM_CMDS = 96,
	};

	enum struct spell_id : std::uint32_t
	{
		SPL_NULL = 0x0,
		SPL_FIREBOLT = 0x1,
		SPL_HEAL = 0x2,
		SPL_LIGHTNING = 0x3,
		SPL_FLASH = 0x4,
		SPL_IDENTIFY = 0x5,
		SPL_FIREWALL = 0x6,
		SPL_TOWN = 0x7,
		SPL_STONE = 0x8,
		SPL_INFRA = 0x9,
		SPL_RNDTELEPORT = 0xA,
		SPL_MANASHIELD = 0xB,
		SPL_FIREBALL = 0xC,
		SPL_GUARDIAN = 0xD,
		SPL_CHAIN = 0xE,
		SPL_WAVE = 0xF,
		SPL_DOOMSERP = 0x10,
		SPL_BLODRIT = 0x11,
		SPL_NOVA = 0x12,
		SPL_INVISIBIL = 0x13,
		SPL_FLAME = 0x14,
		SPL_GOLEM = 0x15,
		SPL_BLODBOIL = 0x16,
		SPL_TELEPORT = 0x17,
		SPL_APOCA = 0x18,
		SPL_ETHEREALIZE = 0x19,
		SPL_REPAIR = 0x1A,
		SPL_RECHARGE = 0x1B,
		SPL_DISARM = 0x1C,
		SPL_ELEMENT = 0x1D,
		SPL_CBOLT = 0x1E,
		SPL_HBOLT = 0x1F,
		SPL_RESURRECT = 0x20,
		SPL_TELEKINESIS = 0x21,
		SPL_HEALOTHER = 0x22,
		SPL_FLARE = 0x23,
		SPL_BONESPIRIT = 0x24,
		SPL_INVALID = 0xFFFFFFFF,
	};

	enum struct spell_type
	{
		RSPLTYPE_SKILL = 0x0,
		RSPLTYPE_SPELL = 0x1,
		RSPLTYPE_SCROLL = 0x2,
		RSPLTYPE_CHARGES = 0x3,
		RSPLTYPE_INVALID = 0x4,
	};

	enum struct _object_id
	{
		OBJ_L1LIGHT = 0x0,
		OBJ_L1LDOOR = 0x1,
		OBJ_L1RDOOR = 0x2,
		OBJ_SKFIRE = 0x3,
		OBJ_LEVER = 0x4,
		OBJ_CHEST1 = 0x5,
		OBJ_CHEST2 = 0x6,
		OBJ_CHEST3 = 0x7,
		OBJ_CANDLE1 = 0x8,
		OBJ_CANDLE2 = 0x9,
		OBJ_CANDLEO = 0xA,
		OBJ_BANNERL = 0xB,
		OBJ_BANNERM = 0xC,
		OBJ_BANNERR = 0xD,
		OBJ_SKPILE = 0xE,
		OBJ_SKSTICK1 = 0xF,
		OBJ_SKSTICK2 = 0x10,
		OBJ_SKSTICK3 = 0x11,
		OBJ_SKSTICK4 = 0x12,
		OBJ_SKSTICK5 = 0x13,
		OBJ_CRUX1 = 0x14,
		OBJ_CRUX2 = 0x15,
		OBJ_CRUX3 = 0x16,
		OBJ_STAND = 0x17,
		OBJ_ANGEL = 0x18,
		OBJ_BOOK2L = 0x19,
		OBJ_BCROSS = 0x1A,
		OBJ_NUDEW2R = 0x1B,
		OBJ_SWITCHSKL = 0x1C,
		OBJ_TNUDEM1 = 0x1D,
		OBJ_TNUDEM2 = 0x1E,
		OBJ_TNUDEM3 = 0x1F,
		OBJ_TNUDEM4 = 0x20,
		OBJ_TNUDEW1 = 0x21,
		OBJ_TNUDEW2 = 0x22,
		OBJ_TNUDEW3 = 0x23,
		OBJ_TORTURE1 = 0x24,
		OBJ_TORTURE2 = 0x25,
		OBJ_TORTURE3 = 0x26,
		OBJ_TORTURE4 = 0x27,
		OBJ_TORTURE5 = 0x28,
		OBJ_BOOK2R = 0x29,
		OBJ_L2LDOOR = 0x2A,
		OBJ_L2RDOOR = 0x2B,
		OBJ_TORCHL = 0x2C,
		OBJ_TORCHR = 0x2D,
		OBJ_TORCHL2 = 0x2E,
		OBJ_TORCHR2 = 0x2F,
		OBJ_SARC = 0x30,
		OBJ_FLAMEHOLE = 0x31,
		OBJ_FLAMELVR = 0x32,
		OBJ_WATER = 0x33,
		OBJ_BOOKLVR = 0x34,
		OBJ_TRAPL = 0x35,
		OBJ_TRAPR = 0x36,
		OBJ_BOOKSHELF = 0x37,
		OBJ_WEAPRACK = 0x38,
		OBJ_BARREL = 0x39,
		OBJ_BARRELEX = 0x3A,
		OBJ_SHRINEL = 0x3B,
		OBJ_SHRINER = 0x3C,
		OBJ_SKELBOOK = 0x3D,
		OBJ_BOOKCASEL = 0x3E,
		OBJ_BOOKCASER = 0x3F,
		OBJ_BOOKSTAND = 0x40,
		OBJ_BOOKCANDLE = 0x41,
		OBJ_BLOODFTN = 0x42,
		OBJ_DECAP = 0x43,
		OBJ_TCHEST1 = 0x44,
		OBJ_TCHEST2 = 0x45,
		OBJ_TCHEST3 = 0x46,
		OBJ_BLINDBOOK = 0x47,
		OBJ_BLOODBOOK = 0x48,
		OBJ_PEDISTAL = 0x49,
		OBJ_L3LDOOR = 0x4A,
		OBJ_L3RDOOR = 0x4B,
		OBJ_PURIFYINGFTN = 0x4C,
		OBJ_ARMORSTAND = 0x4D,
		OBJ_ARMORSTANDN = 0x4E,
		OBJ_GOATSHRINE = 0x4F,
		OBJ_CAULDRON = 0x50,
		OBJ_MURKYFTN = 0x51,
		OBJ_TEARFTN = 0x52,
		OBJ_ALTBOY = 0x53,
		OBJ_MCIRCLE1 = 0x54,
		OBJ_MCIRCLE2 = 0x55,
		OBJ_STORYBOOK = 0x56,
		OBJ_STORYCANDLE = 0x57,
		OBJ_STEELTOME = 0x58,
		OBJ_WARARMOR = 0x59,
		OBJ_WARWEAP = 0x5A,
		OBJ_TBCROSS = 0x5B,
		OBJ_WEAPONRACK = 0x5C,
		OBJ_WEAPONRACKN = 0x5D,
		OBJ_MUSHPATCH = 0x5E,
		OBJ_LAZSTAND = 0x5F,
		OBJ_SLAINHERO = 0x60,
		OBJ_SIGNCHEST = 0x61,
		OBJ_NULL_98 = 0x62,
	};

	enum struct interface_mode
	{
		WM_DIAB = 0x401,
		WM_DIABNEXTLVL = 0x402, // WM_USER+2
		WM_DIABPREVLVL = 0x403,
		WM_DIABRTNLVL = 0x404,
		WM_DIABSETLVL = 0x405,
		WM_DIABWARPLVL = 0x406,
		WM_DIABTOWNWARP = 0x407,
		WM_DIABTWARPUP = 0x408,
		WM_DIABRETOWN = 0x409,
		WM_DIABNEWGAME = 0x40A,
		WM_DIABLOADGAME = 0x40B
	};

	enum struct item_type : std::uint32_t
	{
		ITYPE_MISC = 0x0,
		ITYPE_SWORD = 0x1,
		ITYPE_AXE = 0x2,
		ITYPE_BOW = 0x3,
		ITYPE_MACE = 0x4,
		ITYPE_SHIELD = 0x5,
		ITYPE_LARMOR = 0x6,
		ITYPE_HELM = 0x7,
		ITYPE_MARMOR = 0x8,
		ITYPE_HARMOR = 0x9,
		ITYPE_STAFF = 0xA,
		ITYPE_GOLD = 0xB,
		ITYPE_RING = 0xC,
		ITYPE_AMULET = 0xD,
		ITYPE_0E = 0xE,
		ITYPE_NONE = 0xFFFFFFFF,
	};

	enum struct item_misc_id : std::uint32_t
	{
		IMISC_NONE = 0x0,
		IMISC_USEFIRST = 0x1,
		IMISC_FULLHEAL = 0x2,
		IMISC_HEAL = 0x3,
		IMISC_OLDHEAL = 0x4,
		IMISC_DEADHEAL = 0x5,
		IMISC_MANA = 0x6,
		IMISC_FULLMANA = 0x7,
		IMISC_POTEXP = 0x8, /* add experience */
		IMISC_POTFORG = 0x9, /* remove experience */
		IMISC_ELIXSTR = 0xA,
		IMISC_ELIXMAG = 0xB,
		IMISC_ELIXDEX = 0xC,
		IMISC_ELIXVIT = 0xD,
		IMISC_ELIXWEAK = 0xE, /* double check with alpha */
		IMISC_ELIXDIS = 0xF,
		IMISC_ELIXCLUM = 0x10,
		IMISC_ELIXSICK = 0x11,
		IMISC_REJUV = 0x12,
		IMISC_FULLREJUV = 0x13,
		IMISC_USELAST = 0x14,
		IMISC_SCROLL = 0x15,
		IMISC_SCROLLT = 0x16,
		IMISC_STAFF = 0x17,
		IMISC_BOOK = 0x18,
		IMISC_RING = 0x19,
		IMISC_AMULET = 0x1A,
		IMISC_UNIQUE = 0x1B,
		IMISC_HEAL_1C = 0x1C,
		IMISC_OILFIRST = 0x1D,
		IMISC_OILOF = 0x1E, /* oils are beta or hellfire only */
		IMISC_OILACC = 0x1F,
		IMISC_OILMAST = 0x20,
		IMISC_OILSHARP = 0x21,
		IMISC_OILDEATH = 0x22,
		IMISC_OILSKILL = 0x23,
		IMISC_OILBSMTH = 0x24,
		IMISC_OILFORT = 0x25,
		IMISC_OILPERM = 0x26,
		IMISC_OILHARD = 0x27,
		IMISC_OILIMP = 0x28,
		IMISC_OILLAST = 0x29,
		IMISC_MAPOFDOOM = 0x2A,
		IMISC_EAR = 0x2B,
		IMISC_SPECELIX = 0x2C,
		IMISC_INVALID = 0xFFFFFFFF,
	} ;

	enum struct equip_slot
	{
		HEAD = 0,
		RIGHTRING = 1,
		LEFTRING = 2,
		AMULET = 3,
		RIGHTHAND = 4,
		LEFTHAND = 5,
		BODY = 6,
		INV1 = 7,
		INV2 = 8,
		INV3 = 9,
		INV4 = 10,
		INV5 = 11,
		INV6 = 12,
		INV7 = 13,
		INV8 = 14,
		INV9 = 15,
		INV10 = 16,
		INV11 = 17,
		INV12 = 18,
		INV13 = 19,
		INV14 = 20,
		INV15 = 21,
		INV16 = 22,
		INV17 = 23,
		INV18 = 24,
		INV19 = 25,
		INV20 = 26,
		INV21 = 27,
		INV22 = 28,
		INV23 = 29,
		INV24 = 30,
		INV25 = 31,
		INV26 = 32,
		INV27 = 33,
		INV28 = 34,
		INV29 = 35,
		INV30 = 36,
		INV31 = 37,
		INV32 = 38,
		INV33 = 39,
		INV34 = 40,
		INV35 = 41,
		INV36 = 42,
		INV37 = 43,
		INV38 = 44,
		INV39 = 45,
		INV40 = 46,
		BELT1 = 47,
		BELT2 = 48,
		BELT3 = 49,
		BELT4 = 50,
		BELT5 = 51,
		BELT6 = 52,
		BELT7 = 53,
		BELT8 = 54
	};

	enum struct  _ui_classes
	{
		UI_WARRIOR = 0x0,
		UI_ROGUE = 0x1,
		UI_SORCERER = 0x2,
		UI_NUM_CLASSES = 0x3,
	};

	enum struct cursor_id
	{
		CURSOR_NONE = 0x0,
		CURSOR_HAND = 0x1,
		CURSOR_IDENTIFY = 0x2,
		CURSOR_REPAIR = 0x3,
		CURSOR_RECHARGE = 0x4,
		CURSOR_DISARM = 0x5,
		CURSOR_OIL = 0x6,
		CURSOR_TELEKINESIS = 0x7,
		CURSOR_RESURRECT = 0x8,
		CURSOR_TELEPORT = 0x9,
		CURSOR_HEALOTHER = 0xA,
		CURSOR_HOURGLASS = 0xB,
		CURSOR_FIRSTITEM = 0xC,
	};

	enum struct _monster_id
	{
		NONE = -1,
		MT_NZOMBIE = 0x0,
		MT_BZOMBIE = 0x1,
		MT_GZOMBIE = 0x2,
		MT_YZOMBIE = 0x3,
		MT_RFALLSP = 0x4,
		MT_DFALLSP = 0x5,
		MT_YFALLSP = 0x6,
		MT_BFALLSP = 0x7,
		MT_WSKELAX = 0x8,
		MT_TSKELAX = 0x9,
		MT_RSKELAX = 0xA,
		MT_XSKELAX = 0xB,
		MT_RFALLSD = 0xC,
		MT_DFALLSD = 0xD,
		MT_YFALLSD = 0xE,
		MT_BFALLSD = 0xF,
		MT_NSCAV = 0x10,
		MT_BSCAV = 0x11,
		MT_WSCAV = 0x12,
		MT_YSCAV = 0x13,
		MT_WSKELBW = 0x14,
		MT_TSKELBW = 0x15,
		MT_RSKELBW = 0x16,
		MT_XSKELBW = 0x17,
		MT_WSKELSD = 0x18,
		MT_TSKELSD = 0x19,
		MT_RSKELSD = 0x1A,
		MT_XSKELSD = 0x1B,
		MT_INVILORD = 0x1C,
		MT_SNEAK = 0x1D,
		MT_STALKER = 0x1E,
		MT_UNSEEN = 0x1F,
		MT_ILLWEAV = 0x20,
		MT_LRDSAYTR = 0x21,
		MT_NGOATMC = 0x22,
		MT_BGOATMC = 0x23,
		MT_RGOATMC = 0x24,
		MT_GGOATMC = 0x25,
		MT_FIEND = 0x26,
		MT_BLINK = 0x27,
		MT_GLOOM = 0x28,
		MT_FAMILIAR = 0x29,
		MT_NGOATBW = 0x2A,
		MT_BGOATBW = 0x2B,
		MT_RGOATBW = 0x2C,
		MT_GGOATBW = 0x2D,
		MT_NACID = 0x2E,
		MT_RACID = 0x2F,
		MT_BACID = 0x30,
		MT_XACID = 0x31,
		MT_SKING = 0x32,
		MT_CLEAVER = 0x33,
		MT_FAT = 0x34,
		MT_MUDMAN = 0x35,
		MT_TOAD = 0x36,
		MT_FLAYED = 0x37,
		MT_WYRM = 0x38,
		MT_CAVSLUG = 0x39,
		MT_DVLWYRM = 0x3A,
		MT_DEVOUR = 0x3B,
		MT_NMAGMA = 0x3C,
		MT_YMAGMA = 0x3D,
		MT_BMAGMA = 0x3E,
		MT_WMAGMA = 0x3F,
		MT_HORNED = 0x40,
		MT_MUDRUN = 0x41,
		MT_FROSTC = 0x42,
		MT_OBLORD = 0x43,
		MT_BONEDMN = 0x44,
		MT_REDDTH = 0x45,
		MT_LTCHDMN = 0x46,
		MT_UDEDBLRG = 0x47,
		MT_INCIN = 0x48,
		MT_FLAMLRD = 0x49,
		MT_DOOMFIRE = 0x4A,
		MT_HELLBURN = 0x4B,
		MT_STORM = 0x4C,
		MT_RSTORM = 0x4D,
		MT_STORML = 0x4E,
		MT_MAEL = 0x4F,
		MT_BIGFALL = 0x50,
		MT_WINGED = 0x51,
		MT_GARGOYLE = 0x52,
		MT_BLOODCLW = 0x53,
		MT_DEATHW = 0x54,
		MT_MEGA = 0x55,
		MT_GUARD = 0x56,
		MT_VTEXLRD = 0x57,
		MT_BALROG = 0x58,
		MT_NSNAKE = 0x59,
		MT_RSNAKE = 0x5A,
		MT_BSNAKE = 0x5B,
		MT_GSNAKE = 0x5C,
		MT_NBLACK = 0x5D,
		MT_RTBLACK = 0x5E,
		MT_BTBLACK = 0x5F,
		MT_RBLACK = 0x60,
		MT_UNRAV = 0x61,
		MT_HOLOWONE = 0x62,
		MT_PAINMSTR = 0x63,
		MT_REALWEAV = 0x64,
		MT_SUCCUBUS = 0x65,
		MT_SNOWWICH = 0x66,
		MT_HLSPWN = 0x67,
		MT_SOLBRNR = 0x68,
		MT_COUNSLR = 0x69,
		MT_MAGISTR = 0x6A,
		MT_CABALIST = 0x6B,
		MT_ADVOCATE = 0x6C,
		MT_GOLEM = 0x6D,
		MT_DIABLO = 0x6E,
		MT_DARKMAGE = 0x6F
	};

	enum struct item_class {
		FULLMANA = 0x0,
		WHITESCROLL = 0x1,
		BROWNSCROLL = 0x2,
		BLUESCROLL = 0x3,
		SMALLGOLD = 0x4,
		MEDIUMGOLD = 0x5,
		LARGEGOLD = 0x6,
		THICKGOLDRING = 0x7,
		THEBLEEDER = 0x8,
		BRAMBLE = 0x9,
		RINGOFTRUTH = 0xA,
		RINGOFREGHA = 0xB,
		RING = 0xC,
		RINGOFENGAGEMENT = 0xD,
		CONSTRICTINGRING = 0xE,
		SPECTRALELIXIR = 0xF,
		RAINBOWELIXIR = 0x10,
		GOLDENELIXIR = 0x11,
		EMPYREANBAND = 0x12,
		EARWSTEELEARRING = 0x13,
		EAR = 0x14,
		EARWGOLDEARRING = 0x15,
		ORANGESPHERE = 0x16,
		HELLRAISERBOX = 0x17,
		GOLDPYRAMID = 0x18,
		BLOODSTONE = 0x19,
		REDSPHERE = 0x1A,
		BLUECUBE = 0x1B,
		ORANGEPYRAMID = 0x1C,
		THINBLACKVIAL = 0x1D,
		LARGEBLACKVIAL = 0x1E,
		ELIXIROFVITALITY = 0x1F,
		HEAL = 0x20,
		FULLREJUV = 0x21,
		ELIXIROFMAGIC = 0x22,
		FULLHEAL = 0x23,
		ELIXIROFDEXTERITY = 0x24,
		REJUV = 0x25,
		ELIXIROFSTRENGTH = 0x26,
		MANA = 0x27,
		BRAIN = 0x28,
		CLAW = 0x29,
		TOOTH = 0x2A,
		LOAFOFBREAD = 0x2B,
		OPTICAMULET = 0x2C,
		AMULET = 0x2D,
		BLACKPENDANT = 0x2E,
		BUGBROOCH = 0x2F,
		ANKHNECKLACE = 0x30,
		POUCH = 0x31,
		WIZARDSPIKE = 0x32,
		DAGGER = 0x33,
		BOTTLEOFBREW = 0x34,
		BLACKRAZOR = 0x35,
		THICKDAGGER = 0x36,
		KNUCKLEKNIFE = 0x37,
		BLADE = 0x38,
		BASTARDSWORD = 0x39,
		EXECUTIONERSBLADE = 0x3A,
		MACE = 0x3B,
		LONGSWORD = 0x3C,
		BROADSWORD = 0x3D,
		FALCHION = 0x3E,
		MORNINGSTAR = 0x3F,
		SHORTSWORD = 0x40,
		CLAYMORE = 0x41,
		CLUB = 0x42,
		SABRE = 0x43,
		GRYPHONSCLAW = 0x44,
		BONECLUB = 0x45,
		SPIKEDCLUB = 0x46,
		BOARDWNAIL = 0x47,
		SCIMITAR = 0x48,
		ANGELSWORD = 0x49,
		RUSTEDGREYSWORD = 0x4A,
		FULLHELM = 0x4B,
		MAGICROCK = 0x4C,
		HELMOFSPIRITS = 0x4D,
		SKULLCROWN = 0x4E,
		ROYALCIRCLET = 0x4F,
		FOOLSCREST = 0x50,
		HARLEQUINCREST = 0x51,
		HELM = 0x52,
		BUCKLER = 0x53,
		HORNEDHELM = 0x54,
		VEILOFSTEEL = 0x55,
		BLACKBOOK = 0x56,
		REDBOOK = 0x57,
		BLUEBOOK = 0x58,
		BLACKMUSHROOM = 0x59,
		SKULLCAP = 0x5A,
		CAP = 0x5B,
		TORNFLESHOFSOULS = 0x5C,
		THINKINGCAP = 0x5D,
		REDTUNIC = 0x5E,
		CROWN = 0x5F,
		MAPOFTHESTARS = 0x60,
		FUNGALTOMB = 0x61,
		GREATHELM = 0x62,
		OVERLORDSHELM = 0x63,
		LIGHTNINGSHIELD = 0x64,
		BATTLEAXE = 0x65,
		HUNTERSBOWLONGBOW = 0x66,
		PLATEMAILFIELDPLATE = 0x67,
		STONECLEAVER = 0x68,
		SMALLSHIELD = 0x69,
		CLEAVER = 0x6A,
		STUDDEDLEATHERARMOR = 0x6B,
		DEADLYHUNTEREAGLEHORN = 0x6C,
		SHORTSTAFFQUARTERSTAFF = 0x6D,
		TWOHANDEDSWORD = 0x6E,
		CHAINMAIL = 0x6F,
		SMALLAXE = 0x70,
		KITESHIELD = 0x71,
		SCALEMAIL = 0x72,
		LARGETHICKSHIELD = 0x73,
		SPLITSKULLSHIELD = 0x74,
		DRAGONSBREACH = 0x75,
		SHORTBOW = 0x76,
		LONGBATTLEWARBOW = 0x77,
		FISHBOW = 0x78,
		WARHAMMER = 0x79,
		MAULTHECRANIUMBASHER = 0x7A,
		LONGSTAFF = 0x7B,
		WARSTAFF = 0x7C,
		SHAMANSSTAFF = 0x7D,
		TAVERNSIGN = 0x7E,
		HARDLEATHERARMOR = 0x7F,
		RAGS = 0x80,
		QUILTEDARMOR = 0x81,
		THREESPIKEDBALLSNCHAINFLAIL = 0x82,
		FLAIL = 0x83,
		TOWERSHIELD = 0x84,
		COMPOSITEBOW = 0x85,
		GREATSWORD = 0x86,
		LEATHERARMOR = 0x87,
		SPLINTMAIL = 0x88,
		ROBE = 0x89,
		RAINBOWCLOAKWISDOMSWRAPNIGHTSCAEP = 0x8A,
		LEATHERSHIRT = 0x8B,
		ANVILOFFURY = 0x8C,
		BROADAXE = 0x8D,
		LARGEAXE = 0x8E,
		GREATAXE = 0x8F,
		AXE = 0x90,
		GREYCLEAVER = 0x91,
		BLACKOAKSHIELDHOLYDEFENDER = 0x92,
		LARGESHIELD = 0x93,
		GOTHICSHIELD = 0x94,
		CLOAK = 0x95,
		CAPE = 0x96,
		FULLPLATEMAIL = 0x97,
		GOTHICPLATE = 0x98,
		BREASTPLATE = 0x99,
		RINGMAIL = 0x9A,
		STAFFOFLAZARUS = 0x9B,
		RUBYAXE = 0x9C,
		ARKAINESVALOR = 0x9D,
		THENEEDLER = 0x9E,
		NAJSLIGHTPLATE = 0x9F,
		THEGRIZZLY = 0xA0,
		THEGRANDFATHER = 0xA1,
		THEPROTECTOR = 0xA2,
		MESSERSCHMIDTSREAVER = 0xA3,
		WINDFORCE = 0xA4,
		SHORTWARBOW = 0xA5,
		COMPOSITESTAFF = 0xA6,
		SHORTBATTLEBOW = 0xA7,
		GOLD = 0xA8,
		NONE = 0XFF
	};

	enum struct talk_id
	{
		STORE_NONE = 0x0,
		STORE_SMITH = 0x1,
		STORE_SBUY = 0x2,
		STORE_SSELL = 0x3,
		STORE_SREPAIR = 0x4,
		STORE_WITCH = 0x5,
		STORE_WBUY = 0x6,
		STORE_WSELL = 0x7,
		STORE_WRECHARGE = 0x8,
		STORE_NOMONEY = 0x9,
		STORE_NOROOM = 0xA,
		STORE_CONFIRM = 0xB,
		STORE_BOY = 0xC,
		STORE_BBOY = 0xD,
		STORE_HEALER = 0xE,
		STORE_STORY = 0xF,
		STORE_HBUY = 0x10,
		STORE_SIDENTIFY = 0x11,
		STORE_SPBUY = 0x12,
		STORE_GOSSIP = 0x13,
		STORE_IDSHOW = 0x14,
		STORE_TAVERN = 0x15,
		STORE_DRUNK = 0x16,
		STORE_BARMAID = 0x17,
	};

	enum struct quest_id
	{
		QTYPE_MAGICROCK = 0x0,
		QTYPE_BLACKMUSHROOM = 0x1,
		QTYPE_GARBHAD = 0x2,
		QTYPE_ZHAR = 0x3,
		QTYPE_LACHDANAN = 0x4,
		QTYPE_MOD = 0x5,
		QTYPE_BUTCHER = 0x6,
		QTYPE_BOL = 0x7,
		QTYPE_HALLSOFBLIND = 0x8,
		QTYPE_ARKAINVALOR = 0x9,
		QTYPE_ANVILOFFURY = 0xA,
		QTYPE_WARLRDOFBLOOD = 0xB,
		QTYPE_KINGLEORIC = 0xC,
		QTYPE_POISONEDWATER = 0xD,
		QTYPE_CHAMBEROFBONE = 0xE,
		QTYPE_VB = 0xF,
		QTYPE_INVALID = 0xFFFFFFFF,
	};

	enum _talker_id
	{
		TOWN_SMITH = 0x0,
		TOWN_HEALER = 0x1,
		TOWN_DEADGUY = 0x2,
		TOWN_TAVERN = 0x3,
		TOWN_STORY = 0x4,
		TOWN_DRUNK = 0x5,
		TOWN_WITCH = 0x6,
		TOWN_BMAID = 0x7,
		TOWN_PEGBOY = 0x8,
		TOWN_COW = 0x9,
		TOWN_PRIEST = 0xA,
		TOWN_INVALID = -0x1
	};

	enum struct MON_MODE
	{
		MM_STAND = 0,
		MM_WALK = 1,
		MM_WALK2 = 2,
		MM_WALK3 = 3,
		MM_ATTACK = 4,
		MM_GOTHIT = 5,
		MM_DEATH = 6,
		MM_SATTACK = 7,
		MM_FADEIN = 8,
		MM_FADEOUT = 9,
		MM_RATTACK = 10,
		MM_SPSTAND = 11,
		MM_RSPATTACK = 12,
		MM_DELAY = 13,
		MM_CHARGE = 14,
		MM_STONE = 15,
		MM_HEAL = 16,
		MM_TALK = 17,
		MM_INVALID = -0X1
	};

	enum struct shrine_type {
		MYSTERIOUS = 0x0,
		HIDDEN = 0x1,
		GLOOMY = 0x2,
		WEIRD = 0x3,
		MAGICAL = 0x4,
		STONE = 0x5,
		RELIGIOUS = 0x6,
		ENCHANTED = 0x7,
		THAUMATURGIC = 0x8,
		FASCINATING = 0x9,
		CRYPTIC = 0xA,
		MAGICAL2 = 0xB,
		ELDRITCH = 0xC,
		EERIE = 0xD,
		DIVINE = 0xE,
		HOLY = 0xF,
		SACRED = 0x10,
		SPIRITUAL = 0x11,
		SPOOKY = 0x12,
		ABANDONED = 0x13,
		CREEPY = 0x14,
		QUIET = 0x15,
		SECLUDED = 0x16,
		ORANTE = 0x17,
		GLIMMERING = 0x18,
		TAINTED = 0x19,
		NONE = -0x1
	};
}

