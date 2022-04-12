#include "NormalAccount.h"

NormalAccount::NormalAccount(int _ID, int _money, my::string _name, int _rate)
	:Account(_ID, _money, _name), rate(_rate)
{

}

void NormalAccount::Deposit(int _money)
{
	Account::Deposit(_money);	//������ �߰��ϰ�
	Account::Deposit(_money * (rate / 100)); // �����߰�
}
