//Nathan Ferry
//9/03/23
//Tictactoe

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
#include <string.h>
#include<conio.h>

/*Some Pointers :
A way to get the players to take turns
Use a loop with player 1 having a go on every odd number and player 2 on every even number.
The modulus operator (%) might be useful.

A 3x3 grid in which to store the turns of the two players.
Use a char array, because when a player selects a place to put their marker,
we want to store their marker either as an X or as an O.
A way of displaying the grid.
Draw the grid using horizontaland vertical lines using the printf() function.

Some way of specifiying where to place the mark on the gridand checking to see if it’s a valid go.
We need a way of specifying where on the grid we want to place our O or X.The row and column location
or possibly a number between 1 and 9 as there are 9 spaces ?
When we ask for input we need to check that the value entered
complies with what we want.If its less than 1 / 0, 0 or greater than 9 / 3, 3, we can’t use the value so we need to ask for a different number.
Also we’ll need to check if the space hasn’t already been taken.

A method of finding out if one of the players has won.
We can check each row, each columnand the two diagonals to see whether
they contain all the same character.Doing it this way means that we are
doing more checks than is necessary, but it’s a lot easier!*/

int main() {

	int turn = 1;

	//Choosing who's go it is
	if (turn % 2 > 0) {
		printf("Player, please have a go");
		scanf_s("%i", &);
		turn++;
	}
	else {
		printf("Computer's go.");
		turn++;
	}

	//Tictactoe dislpay //printf("\t_|_|_\n\t_|_|_\n\t | |");
	return 0;
}