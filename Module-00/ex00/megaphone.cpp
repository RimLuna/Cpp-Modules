#include <iostream>
#include <string>
#include <locale>

using namespace std;

int		main(int ac, char **av)
{
	if (ac < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			string msg(av[i]);
			for (size_t j = 0; j < msg.length(); j++)
				cout << (char)toupper(msg[j]);
		}
		cout << endl;
	}
}