/* This file should not contain more than what is needed to initialize
 * and set up a basic game loop.
 */

#include <stdio.h>

#include "game.h"
#include "units.h"

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		puts(argv[1]);
	}

	unit * head;
	unit * tail;
	// Hardcoding an initial setup. This will change once an actual level
	// system is implemented.
	head = create_unit(DIODE, FIRE, 200, NULL);
	tail = head->next;

	while(game_loop(head, tail));

	// Do some cleanup before we leave. Can't have the OS steal all the
	// fun, after all, right?
//	destroy_all_units(head);

	return 0;
}
