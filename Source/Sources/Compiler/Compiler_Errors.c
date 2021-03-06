
//<<>-<>>---------------------------------------------------------------------()
/*
	Routines de gestion des erreurs.
									      */
//()-------------------------------------------------------------------<<>-<>>//

// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// い�									  い� //
// い� Donn�es								  い� //
// い�									  い� //
// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //

#include "..\..\Includes\Editor.h"
#include "..\..\Includes\Prototypes.h"
#include "..\..\Includes\Structures.h"
#include "..\..\Includes\Texts.h"

extern char		CompilerError[256];
extern DWORD		CompilerErrorCode;


// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// い�									  い� //
// い� Fonctions							  い� //
// い�									  い� //
// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //

// �算� Stockage de la derni�re erreur rencontr�e ������������������������

//--- D�finition de l'erreur ---

void Compiler_SetLastError(DWORD ErrorCode)
{
	CompilerErrorCode = ErrorCode;

	if (CompilerErrorCode == COMPILERR_WINDOWS)
		FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM,NULL,GetLastError(),LOCALE_USER_DEFAULT,CompilerError,256,NULL);

	return;
}

//--- Retourne le dernier code d'erreur ---

DWORD Compiler_GetLastError()
{
	return(CompilerErrorCode);
}


// �算� Copie un texte d'erreur dans un buffer ���������������������������

void Compiler_ErrorCodeToText(char *Dest)
{
	char	*ErrorText = NULL;
	int	 i;

	if (!CompilerErrorCode)
		{
		strcpy(Dest,szCompilerNoErr);
		return;
		}

	for (i = 0; Compiler[i].ErrorCode != 0; i++)
		if (Compiler[i].ErrorCode == CompilerErrorCode)
			{
			ErrorText = Compiler[i].ErrorText;
			break;
			}

	if (!ErrorText) ErrorText = szCompilerUnknownErr;

	strcpy(Dest,ErrorText);
	return;
}


// �算� Retourne le pointeur sur le texte correspondant � l'erreur �������

char* Compiler_GetErrorCodeText()
{
	int	 i;

	if (!CompilerErrorCode)
		return(szCompilerNoErr);

	for (i = 0; Compiler[i].ErrorCode != 0; i++)
		if (Compiler[i].ErrorCode == CompilerErrorCode)
			return(Compiler[i].ErrorText);

	return(szCompilerUnknownErr);
}

// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// END
