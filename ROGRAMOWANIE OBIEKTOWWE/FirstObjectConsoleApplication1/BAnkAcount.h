#pragma once
#include <iostream>

class BankAccount
{
	private
public:
	double balance; // saldo
	std::string owner; //w³aœciciel
	std::string currency; //waluta

	void AccountInformation()
	{
		std::cout << "Informacja o koncie bankowym.\n";
		std::cout << "W³aœciciel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << "\n";
	}

	void DepositToAccount(double amount)
	{
		amount = abs(amount);
		balance = balance + amount;
	}

	bool WidthdrawalFromAccount(double amount)
	{
		amount = abs(amount);
		if (balance - amount >= 0)
		{
			balance = balance - amount;
			return true;
		}
		return false;
	}

	void TransferBetweenAcounts(BankAccount& targetAccount, double amount)
	{
		if (WidthdrawalFromAccount(amount) == true)
			targetAccount.DepositToAccount(amount);
	}
};