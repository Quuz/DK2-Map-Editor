
//<<>-<>>---------------------------------------------------------------------()
/*
	Routines de d嶵uggage.
									      */
//()-------------------------------------------------------------------<<>-<>>//

// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //
// 中�									  中� //
// 中� Donn嶪s								  中� //
// 中�									  中� //
// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //

#include "..\Includes\Editor.h"
#include "..\Includes\Prototypes.h"
#include "..\Includes\Structures.h"
#include "..\Includes\Texts.h"

extern DEBUGVERSIONS	MapVersions;


// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //
// 中�									  中� //
// 中� Fonctions							  中� //
// 中�									  中� //
// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //

// 姣遙 R嶯nitialise les versions 垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂姣

void Debug_ResetVersions(BOOL ResetMapVersion)
{
	if (ResetMapVersion)
		MapVersions.MapVersion	= DKMAPVERSION;

	MapVersions.StatsVersion	= DKSTSVERSION;
	MapVersions.ThingsVersion	= DKTGSVERSION;
	MapVersions.MapInfoVersion	= DKINFVERSION;
	MapVersions.PlayersVersion	= DKPLYVERSION;
	MapVersions.RectExVersion	= DKRECVERSION;
	MapVersions.BandsVersion	= DKMTHVERSION;
	MapVersions.TriggersVersion	= DKTRGVERSION;
	MapVersions.GlobalVersion	= DKGBLVERSION;
	return;
}


// 姣遙 R嶯nitialise les versions 垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂垂姣

void Debug_ShowVersions(HWND hWnd)
{
	MESSAGEBOXSTRUCT	 Request;
	char			*Text;

	Text = GlobalAlloc(GPTR,strlen(szDebugVersions)+sizeof(DEBUGVERSIONS)*10);
	if (!Text) return;

	wsprintf(Text,szDebugVersions,	 MapVersions.StatsVersion,
					(MapVersions.StatsVersion	!= DKSTSVERSION)?szDebugOld:szDebugNew,
					 MapVersions.MapVersion,
					(MapVersions.MapVersion		!= DKMAPVERSION)?szDebugOld:szDebugNew,
					 MapVersions.ThingsVersion,
					(MapVersions.ThingsVersion	!= DKTGSVERSION)?szDebugOld:szDebugNew,
					 MapVersions.MapInfoVersion,
					(MapVersions.MapInfoVersion	!= DKINFVERSION)?szDebugOld:szDebugNew,
					 MapVersions.PlayersVersion,
					(MapVersions.PlayersVersion	!= DKPLYVERSION)?szDebugOld:szDebugNew,
					 MapVersions.RectExVersion,
					(MapVersions.RectExVersion	!= DKRECVERSION)?szDebugOld:szDebugNew,
					 MapVersions.BandsVersion,
					(MapVersions.BandsVersion	!= DKMTHVERSION)?szDebugOld:szDebugNew,
					 MapVersions.TriggersVersion,
					(MapVersions.TriggersVersion	!= DKTRGVERSION)?szDebugOld:szDebugNew,
					 MapVersions.GlobalVersion,
					(MapVersions.GlobalVersion	!= DKGBLVERSION)?szDebugOld:szDebugNew);

	ZeroMemory(&Request,sizeof(MESSAGEBOXSTRUCT));
	Request.gadgets		= szMessageBoxExtOk;
	Request.windowtext	= Text;
	Request.windowtitle	= (char *)-1;
	Request.flags		= MBF_NOBEEP;
	Request.defaultgadget	= 1;
	Request.defaulticon	= MB_ICONINFORMATION;
	Request.windowpos	= MBP_FOLLOWMOUSE;
	Misc_MessageBoxExtArgs(hWnd,&Request);

	GlobalFree(Text);
	return;
}

// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //
// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //
// END
