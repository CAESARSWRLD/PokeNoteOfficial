#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Player
{
private:

	std::ifstream file;

public:

	
	Player(std::ifstream& file)
	{
		std::string line;
		while (std::getline(file, line))
		{

		}
		
	}
	
	
};

