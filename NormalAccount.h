#pragma once
#include "Account.h"

class NormalAccount : public Account
{
private:
	int rate;
public:
	NormalAccount(int _ID, int _money, char* _name, int _rate);
	//�Ա��� �ؾ��ϴϱ�..
	virtual void Deposit(int _money);
};

