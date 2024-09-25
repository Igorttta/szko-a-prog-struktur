#include<iostream>

struct bankacount
{
	double balance;
		std::string owner;
		std::string currency;

};
void sccountInformations(bankacount& account)
{
	std::cout << " Informacje o koncie bankowym";
	std::cout << "W³ascicel" << account.owner << "\n";
	std::cout << "saldo" << account.balance << " " << account.currency << "\n";
}
void depositToAccount(bankacount& account, double amount)
{
	account.balance = account.balance + amount;
}
void task3()
{
	bankacount firstacount;
	firstacount.balance = 10000;
	firstacount.currency = "z³";
	firstacount.owner = "Jan Kowalski";

	sccountInformations(firstacount);
	bankacount secoundAcount;
	secoundAcount.balance = 15000;
	secoundAcount.owner + " ewa janina ";
	

	sccountInformations(firstacount);

}