#ifndef ELF_HPP
#define ELF_HPP

# include <iostream>
# include <fstream>

class Elf
{
	private:
		int			amount; // Nobody can know how much I have unless they ask me :)
	public:
	Elf();
	Elf		&operator=(const Elf &copy);
	void	addamount(int number);
	void	setAmount(int amount);
	int		getAmount();
};

#endif