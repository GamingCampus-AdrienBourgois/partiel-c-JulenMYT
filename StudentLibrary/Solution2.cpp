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
	std::string line;
	float balance = 0;
	float amount;

	if (account.is_open())
	{
		while(account >> line >> amount)
		{          
			if (line == "WITHDRAW")
			{
				balance -= amount;
			}
			if (line == "DEPOSIT")
			{
				balance += amount;
			}
		}
	}
	return balance;
}

#endif
