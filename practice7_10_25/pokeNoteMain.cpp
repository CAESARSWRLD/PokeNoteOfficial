/*
POKENOTE
Me and my friends are enjoying playing poker this Summer. So, I figured I would work on a little side project.
This program is called PokeNote. It allows the user to log their opponenets actions to make better decisions while playing poker against them in the future.
The ideal use for this would be to log a player's actions over time, then consult the database when playing against them in the current hand. 
It's certainly most encouraged for online poker because it's not very friendly to build a dataset to exploit your friends.

This note taking program is most useful for players with an exploitative play style, rather than a balanced playstyle. 
This can be somewhat usefult for hardcore GTO players, however, the hyper-exploitative players will probably benefit from using this quite a bit more.

Another project I'm working on currently is an online poker app. I know, it's a lot of poker stuff. 
Currently, most of my friends play a lot of poker. 
For that reason, I'm sure I will have some users once these projects are done.

PokeNote, will most likely stay as a terminal program.
*/

#include "player.hpp"

int main(void)
{
	int menuChoice = 0;
	std::cout << "Welcome to PokeNote\nLog any behavior from your opponents to create a data base that you can use to exploit your opponenents.\n\nOptions:" << std::endl;
	std::cout << "(1) View data\n(2) Log new data" << std::endl;
	std::cin >> menuChoice;

	switch (menuChoice)
	{
		case 1:
		{
			
			break;
		}
		case 2:
		{
			
			break;
		}
		default:
		{

		}
	}




	return 0;
}