#include "Solution2.h"

#include <ostream>
#include <fstream>
#include <sstream>
#include <iostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	std::ifstream account;
	account.open(accountName);
	float balance = 0;
	if (account.is_open())
	{
		for (std::string line; std::getline(account, line);)
		{
			std::istringstream in(line);
			std::string type;
			in >> type;            
			float amount;
			if (type == "WITHDRAW")
			{
				in >> amount;
				balance -= amount;
			}
			if (type == "DEPOSIT")
			{
				in >> amount;
				balance += amount;
			}
		}
		std::cout << balance;
	}
	return balance;
}

#endif
