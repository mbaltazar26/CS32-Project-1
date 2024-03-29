#include "Robot.h"
#include "Arena.h"
#include "Before.h"
#include "Game.h"
#include "globals.h"
#include "Player.h"

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std; 

///////////////////////////////////////////////////////////////////////////
//  main()
///////////////////////////////////////////////////////////////////////////

int main()
{
	// Initialize the random number generator.  (You don't need to
	// understand how this works.)
	srand(static_cast<unsigned int>(time(0)));

	// Create a game
	// Use this instead to create a mini-game:   Game g(3, 3, 2);
	Game g(15, 18, 80);

	// Play the game
	g.play();
}
