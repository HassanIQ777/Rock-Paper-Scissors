// game.h
#ifndef GAME_H
#define GAME_H

#include "global.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Choices {
    CHOICE_ROCK,
    CHOICE_PAPER,
    CHOICE_SCISSORS,
    NUMBER_OF_CHOICES
};

enum States {
	STATE_WIN,
	STATE_LOSE,
	STATE_DRAW
};

char* choiceToString(int Choices) {
    char* ret; // return

    switch(Choices) {
        case CHOICE_ROCK:
			ret = "Rock";
        	break;

        case CHOICE_PAPER:
			ret = "Paper";
			break;

        case CHOICE_SCISSORS:
			ret = "Scissors";
	        break;
    } // no need for default

    return ret;
}

char* getComputerChoice() {
	return choiceToString(rand() % NUMBER_OF_CHOICES);
}

#endif
