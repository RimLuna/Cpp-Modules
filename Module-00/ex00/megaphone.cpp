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
			string str(av[i]);
			for (size_t j = 0; j < str.length(); j++)
				cout << (char)toupper(str[j]);
		}
		cout << endl;
	}
}