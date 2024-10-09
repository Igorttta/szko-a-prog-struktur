#include <iostream>

class BankAccount
{
public:
	double balance; // saldo
	std::string owner; //w³aœciciel
	std::string currency; //waluta

	void AccountInformation();
	
	void DepositToAccount(double amount);
	

	bool WidthdrawalFromAccount(double amount);
	

	void TransferBetweenAcounts(BankAccount& targetAccount, double amount);
	
};

int main()
{
	BankAccount firstAccount;
	firstAccount.balance = 10000;
	firstAccount.currency = "z³";
	firstAccount.owner = "Jan Kowalski";

	firstAccount.AccountInformation();
	//accountInformation(firstAccount);

	BankAccount secondAccount;
	secondAccount.balance = 15000;
	secondAccount.currency = "z³";
	secondAccount.owner = "Ewa Nowak";

	secondAccount.AccountInformation();

	firstAccount.DepositToAccount(-14.50);
	firstAccount.AccountInformation();

	firstAccount.WidthdrawalFromAccount(14.50);
	firstAccount.AccountInformation();

	secondAccount.TransferBetweenAcounts(firstAccount, 1000);
	firstAccount.AccountInformation();
	secondAccount.AccountInformation();
}