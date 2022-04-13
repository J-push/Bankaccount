#include "NormalAccount.h"

NormalAccount::NormalAccount(int ID, int money, my::string name, int rate)
	:Account(ID, money, name), rate(rate)
{

}

void NormalAccount::Deposit(int money)
{
	if (money < 0)
	{
		throw LessValueException(money);
	}
	Account::Deposit(money);	//������ �߰��ϰ�
	Account::Deposit(money * (rate / 100)); // �����߰�
}
