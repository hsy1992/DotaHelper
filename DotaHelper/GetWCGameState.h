#ifndef _GETWCGAMESTATE_H_
#define _GETWCGAMESTATE_H_

#define GAME_STATE_OFFSET 0xACE638

enum EWCGameState
{
	BNET_LOADING_CUSTOM_GAME	= 14,
	SP_LOADING_CUSTOM_GAME		= 14,
	LAN_LOADING_SAVEGAME		= 23,
	LAN_LOADING_CUSTOM_GAME		= 23,
	BNET_LOADIND_REGULAR_GAME	= 26,
	LAN_LOADING_REGULAR_GAME	= 26,
	SP_LOADING_REGULAR_GAME		= 26,
	WC_MAIN_MENU				= 38,
	SP_MAIN_MENU				= 47,
	LAN_MAIN_MENU				= 63,
	LAN_CHOOSE_MAP				= 64,
	WC_SCORE_SCREEN				= 65,
	BNET_HOST_LOBBY				= 85,
	LAN_HOST_LOBBY				= 85,
	SP_CHOOSE_MAP				= 93,
	BNET_LOGON_SCREEN			= 107,
	WC_OPTION_MENU				= 119,
	BNET_MAIN_SCREEN			= 197,
	BNET_CHAT_SCREEN			= 197,
	BNET_JOIN_LOBBY				= 229,
	LAN_JOIN_LOBBY				= 229,
	BNET_CHOOSE_MAP				= 267,
	BNET_CUSTOM_GAMES_LIST		= 269,
	BNET_AT_SCREEN				= 291,
	SP_INGAME					= 388,
	SP_WATCHING_REPLAY_2		= 395,
	SP_INGAME_SAVED				= 400,
	BNET_INGAME					= 404,
	LAN_INGAME					= 404,
	SP_INGAME_2					= 410,
	BNET_INGAME_SAVED			= 416,
	LAN_INGAME_SAVED			= 416,
	SP_AFTER_MODE				= 438,
	SP_WATCHING_REPLAY			= 445,
	BNET_AFTER_MODE				= 454,
	LAN_AFTER_MODE				= 454,
	BNET_VIEWING_PROFILE		= 460,
	BNET_VIEWING_PROFILE_2		= 464,
	BNET_INGAME_3				= 476,
	LAN_INGAME_2				= 500,
	BNET_INGAME_2				= 508
};

DWORD GetWCGameState(DWORD gameBase);
bool IsIngame(DWORD gameBase);

#endif