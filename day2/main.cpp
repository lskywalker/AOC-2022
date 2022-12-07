#include <iostream>
#include <fstream>

int		fight(std::string elf, std::string me)
{
	if (elf == me)
		return (3);
	if ((elf == "Rock" && me == "Paper") ||
		(elf == "Paper" && me == "Scissors") ||
		(elf == "Scissors" && me == "Rock"))
		return (6);
	if ((elf == "Rock" && me == "Scissors") ||
		(elf == "Paper" && me == "Rock") ||
		(elf == "Scissors" && me == "Paper"))
		return (0);
	return (-100000000);
}

int		fight2(std::string elf, std::string score)
{
	if ((elf == "Scissors" && score == "WIN") || (elf == "Paper" && score == "LOSS") || (elf == "Rock" && score == "DRAW"))
		return (1);
	else if ((elf == "Rock" && score == "WIN") || (elf == "Scissors" && score == "LOSS") || (elf == "Paper" && score == "DRAW"))
		return (2);
	else if ((elf == "Paper" && score == "WIN") || (elf == "Rock" && score == "LOSS") || (elf == "Scissors" && score == "DRAW"))
		return (3);
	return (-100000000);
}

int		main(void)
{
	std::ifstream	file("input.txt");
	std::string		str;
	int				points = 0;
	std::string		weapon;

	while(getline(file, str))
	{
		if (str[0] == 'A')
			weapon = "Rock";
		else if(str[0] == 'B')
			weapon = "Paper";
		else if(str[0] == 'C')
			weapon = "Scissors";
		if (str[2] == 'X')
			points += fight2(weapon, "LOSS");
		else if(str[2] == 'Y')
			points += fight2(weapon, "DRAW") + 3;
		else if(str[2] == 'Z')
			points += fight2(weapon, "WIN") + 6;
	}
	std::cout << "Points: " << points << std::endl;
	return (0);
}
