#include "Solution3.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() {}

std::vector<std::string> Solution3::GetSortedWords() const
{
	int taille = words.size();
	if (taille == 0)
	{
		return words;
	}
	std::vector<std::string> sortedWords;
	std::string currentWord = words[0];
	for (int i = 0; i < taille; i++)
	{
		for (int j = 0; j < taille; j++)
		{
			if (words[j] < currentWord)
			{
				currentWord = words[j];
			}
		}
		sortedWords.push_back(currentWord);
	}
	return sortedWords;
}

#endif
