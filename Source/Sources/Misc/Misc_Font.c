
//<<>-<>>---------------------------------------------------------------------()
/*
	Routines de gestion des caract鋨es.
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


// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //
// 中�									  中� //
// 中� SOUS-ROUTINES DIVERSES						  中� //
// 中�									  中� //
// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //

// 姣遙 Obtention des informations concernant des caract鋨es 垂垂垂垂垂垂�

int Misc_GetFontInfo(HWND hWnd, FONTINFO *Font)
{
	HDC		hDC;
	HFONT		hOldFont;
	TEXTMETRIC	FontInfo;
	int		Result = 0;

	hDC = GetDC(hWnd);
	if (hDC)
		{
		hOldFont = SelectObject(hDC,Font->hFont);
		if (hOldFont)
			{
			GetTextMetrics(hDC,&FontInfo);
			Font->FontHeight = FontInfo.tmExternalLeading+FontInfo.tmHeight;
			Font->FontMaxWidth = FontInfo.tmMaxCharWidth;
			Font->FontAveWidth = FontInfo.tmAveCharWidth;
			SelectObject(hDC,hOldFont);
			Result = 1;
			}
		ReleaseDC(hWnd,hDC);
		}
	return(Result);
}

// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //
// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中中 //
// END
