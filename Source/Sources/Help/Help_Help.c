
//<<>-<>>---------------------------------------------------------------------()
/*
	Aide.
									      */
//()-------------------------------------------------------------------<<>-<>>//

// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// い�									  い� //
// い� Donn�es								  い� //
// い�									  い� //
// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //

#include "..\Includes\Editor.h"
#include "..\Includes\Prototypes.h"
#include "..\Includes\Structures.h"
#include "..\Includes\Texts.h"

extern HINSTANCE	hInstance;


// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// い�									  い� //
// い� Visualisation de l'aide au format HTML				  い� //
// い�									  い� //
// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //

void Help_Content()
{
	HINSTANCE	 ShellModule;
	HANDLE		 FileHandle;
	char		*HelpFile;
	char		*HelpTmp;

	HelpFile = GlobalAlloc(GPTR,MAX_PATH+1);
	if (!HelpFile) return;

	//
	// Help file is in the editor's drawer
	//

	GetModuleFileName(hInstance,HelpFile,MAX_PATH);
	HelpTmp = strrchr(HelpFile,'\\');
	if (HelpTmp) *HelpTmp = 0;
	strcat(HelpFile,"\\Editor.chm");

	FileHandle = CreateFile(HelpFile,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,0,NULL);
	if (FileHandle != INVALID_HANDLE_VALUE)
		{
		CloseHandle(FileHandle);
		goto Call_Help;
		}

	//
	// Help file is in the Help's drawer
	//

	GetModuleFileName(hInstance,HelpFile,MAX_PATH);
	HelpTmp = strrchr(HelpFile,'\\');
	if (HelpTmp) *HelpTmp = 0;
	strcat(HelpFile,"\\Help\\Editor.chm");

	//
	// Call help
	//
Call_Help:
	ShellModule = ShellExecute(NULL,"open",HelpFile,NULL,NULL,SW_SHOWMAXIMIZED);
	if (ShellModule <= (HINSTANCE)32)
		{
		SetLastError((DWORD)ShellModule);
		Misc_PrintError(NULL,szHelpErr,NULL,MB_ICONHAND);
		}

	GlobalFree(HelpFile);
	return;
}

// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// END
