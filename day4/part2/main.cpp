#include <iostream>
#include <fstream>

using namespace std;

bool	inRange(unsigned low, unsigned high, unsigned x)
{
	return (low <= x && x <= high);
}

bool	checker(string elf1, string elf2)
{
	int		low1;
	int		high1;
	int		low2;
	int		high2;

	low1 = stoi(elf1.substr(0, elf1.find('-')));
	high1 = stoi(elf1.substr(elf1.find('-') + 1, elf1.length() - elf1.find('-')));
	low2 = stoi(elf2.substr(0, elf2.find('-')));
	high2 = stoi(elf2.substr(elf2.find('-') + 1, elf2.length() - elf2.find('-')));
	
	if (inRange(low1, high1, low2) || inRange(low1, high1, high2))
		return true;
	if (inRange(low2, high2, low1) || inRange(low2, high2, high1))
		return true;
	return false;
}

int		main(void)
{
	ifstream	file("input.txt");
	string		str;
	int			count = 0;
	int			pos;

	while(!file.eof())
	{
		file >> str;
		pos = str.find(',');
		if (checker(str.substr(0, pos), str.substr(pos + 1, str.length() - pos)) == true)
			count++;
	}
	cout << count << endl;
	return (0);
}