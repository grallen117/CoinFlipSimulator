/*
By Robby Allen
8/27/2020
Coin Flip Simulator. Flips coin for an AMOUNT
of times and then reports how many were heads,
how many were tails.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	//amount of heads, tails, and AMOUNT is how many times to flip.
	int heads = 0;
	int tails = 0;
	static int AMOUNT = 50000;
	//make sure there is different seed for random function each time
	srand(time(0));
	for (int i = 0; i < AMOUNT; i++) {
		if (rand() % 2 == 0) {
			heads++;
		}
		else {
			tails++;
		}
	}
	printf("Heads was rolled %d times.\n", heads);
	printf("Tails was rolled %d times.\n", tails);


}