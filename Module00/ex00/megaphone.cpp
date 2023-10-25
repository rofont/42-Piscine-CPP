#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main (int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		cout << "salut la compagnie" << endl;
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	return 0;
}