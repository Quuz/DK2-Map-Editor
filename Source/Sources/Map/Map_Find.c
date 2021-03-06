
//<<>-<>>---------------------------------------------------------------------()
/*
	Routine de recherche
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

extern MAPFIND		MapFind;


// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// い�									  い� //
// い� Bo�te de dialogue						  い� //
// い�									  い� //
// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //

// �算� S�lection des options de recherche �������������������������������

#pragma argsused
void Find_Select(HWND hWnd)
{
	MessageBox(hWnd,"Ok",NULL,MB_OK);
	return;
}


// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// い�									  い� //
// い� Fonctions							  い� //
// い�									  い� //
// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //

// �算� Supprime certaines entr�es dans la liste �������������������������

void Find_UpdateList(void *Address)
{
	MAPFINDENTRY	*Entry;

	for (Entry = (MAPFINDENTRY *)MapFind.Results.next; Entry != NULL;)
		{
		if (Address == Entry->address)
			{
			List_RemEntry((NODE *)Entry);
			GlobalFree(Entry);
			Entry = (MAPFINDENTRY *)MapFind.Results.next;
			continue;
			}
		Entry = (MAPFINDENTRY *)Entry->node.next;
		}

	return;
}

// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// いいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいいい //
// END
