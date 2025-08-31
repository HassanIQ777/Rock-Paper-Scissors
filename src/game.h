#include <stdio.h>
#include <stdlib.h>

enum States {
    ROCK,
    PAPER,
    SCISSORS
};

char* stateToString(int State){
    char* ret; // return

    switch(State) {
        case ROCK:
			ret = "Rock";
        	break;

        case PAPER:
			ret = "Paper";
			break;

        case SCISSORS:
			ret = "Scissors";
	        break;
    } // no need for default

    return ret;
}
