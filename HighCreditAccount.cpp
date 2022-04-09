#include "HighCreditAccount.h"

HighCreditAccount::HighCreditAccount(int _ID, int _money, char* _name, int _rate, int _plusrate)
	:NormalAccount(_ID, _money, _name, _rate), plusrate(_plusrate)
{

}

void HighCreditAccount::Deposit(int money)
{
	NormalAccount::Deposit(money);
	NormalAccount::Deposit(money * (plusrate / 100));
}
