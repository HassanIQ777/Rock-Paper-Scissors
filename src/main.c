/* Rock-Paper-Scissors by HassanIQ777 & حط اسمك*/
#include "game.h"

int main(/*int argc, char* argv[]*/) // not needed (yet)
{
	srand(time(NULL)); // random seed

	char* computer_choice = getComputerChoice();
	printf("%s", computer_choice);
}
