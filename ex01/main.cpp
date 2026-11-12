#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie *horde;
	int N;

	if (argc > 2 || argc <= 1)
		N = 3;
	else
		N = atoi(argv[1]);

	for (int i = 0 ; i < N ; i++)
	{
		std::cout << i + 1 << ": ";
		Zombie("Constructed Zombie");
	}

	std::cout << "--------------" << std::endl;

	horde = zombieHorde(N, "Allocated Zombie");
	for (int i = 0; i < N ; i++)
	{
		std::cout << i + 1 << ": ";
		horde[i].announce();
	}

	delete[] horde;
}