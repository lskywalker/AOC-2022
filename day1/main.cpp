#include "Elf.hpp"

int		getsize(int size)
{
	std::ifstream	file("input.txt");
	std::string		str;

	while(getline(file, str))
	{
		if (str.length() == 0)
			size++;
	}
	return (size);
}

int		main(void)
{
	std::ifstream				file("input.txt");
	std::string					str;
	int							size = getsize(1);
	Elf							elfs[size];
	int							i = 0;

	elfs[i] = Elf();
	while(getline(file, str))
	{
		if (str.length() == 0)
		{
			i++;
			elfs[i] = Elf();
		}
		else
			elfs[i].addamount(stoi(str));
	}
	int theelf;
	int	total = 0;
	for(int a = 0; a < 3; a++)
	{
		theelf = 0;
		for(int j = 1; j < i; j++)
		{
			if (elfs[j].getAmount() > elfs[theelf].getAmount())
				theelf = j;
		}
		total += elfs[theelf].getAmount();
		elfs[theelf].setAmount(0);
	}
	std::cout << "[" << total << "]" << std::endl;
}
