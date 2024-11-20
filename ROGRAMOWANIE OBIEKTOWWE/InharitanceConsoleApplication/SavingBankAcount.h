#include "BAnkAcount.h"


class SavingBankAcount : public BankAccount
{

private:
	double interestRate;
public:
	SavingBankAcount()
	{
		interestRate = 0.05;
	}

	SavingBankAcount(double b, std::string o, std::string c, double ir)
		:BankAccount(b, o, c)
	{
		interestRate = ir;
	}
	void CalculateInterestRate()
	{
		balance = balance + balance + interestRate;
	}

}