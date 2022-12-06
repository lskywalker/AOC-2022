#include "Elf.hpp"

Elf::Elf() : amount(0) {}

Elf		&Elf::operator=(const Elf &copy)
{
	amount = copy.amount;
	return (*this);
}

int		Elf::getAmount()
{
	return (this->amount);
}

void	Elf::setAmount(int amount)
{
	this->amount = amount;
}

void	Elf::addamount(int number)
{
	this->amount += number;
}