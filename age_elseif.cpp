#include <iostream>

int main()
{
	int earl;
	int tyler;

	std::cout << "Earl, how old are you? \n";
	std::cin >> earl;
	std::cout << "Tyler, how old are you? \n";
	std::cin >> tyler;
	
	if ( earl < tyler && ( 100 >= earl && 100 >= tyler ) )
	{
		std::cout << " I guess tyler is the eldest. " << std::endl;
	}
	else if ( earl > tyler && ( 100 >= earl && 100 >= tyler ) )
	{
		std::cout << " I take care of myself better, that's all. " << std::endl;
	}
	else ! ( earl <= tyler || tyler >= earl && ( 100 >= earl && 100 >= tyler ) );
	{
		std::cout << " You think we can prolong life just a little further? lol " << std::endl;
	}

}

// Ask the user for two users' ages, and indicate who is older; behave differently if both are over
// 100.

