#include "HighCreditAccount.h"

HighCreditAccount::HighCreditAccount(int ID, int money, my::string name, int rate, int plusrate)
	:NormalAccount(ID, money, name, rate), plusrate(plusrate)
{

}

void HighCreditAccount::Deposit(int money)
{
	NormalAccount::Deposit(money);
	NormalAccount::Deposit(money * (plusrate / 100));
}
