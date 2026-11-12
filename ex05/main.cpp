#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << "DEBUG MESSAGE : ";
	harl.complain("DEBUG");

	std::cout << "INFO MESSAGE : ";
	harl.complain("INFO");

	std::cout << "WARNING MESSAGE : ";
	harl.complain("WARNING");

	std::cout << "ERROR MESSAGE : ";
	harl.complain("ERROR");
	
	std::cout << "UNKNOWN COMPLAIN MESSAGE : ";
	harl.complain("UNKNOWN");

	return 0;
}
