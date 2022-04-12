#include "HighCreditAccount.h"

HighCreditAccount::HighCreditAccount(int _ID, int _money, my::string _name, int _rate, int _plusrate)
	:NormalAccount(_ID, _money, _name, _rate), plusrate(_plusrate)
{

}

void HighCreditAccount::Deposit(int _money)
{
	NormalAccount::Deposit(_money);
	NormalAccount::Deposit(_money * (plusrate / 100));
}
