#pragma once
#include "Account.h"
#include "AccountExcpetion.h"

class NormalAccount : public Account
{
private:
	int rate;
public:
	NormalAccount(int ID, int money, my::string name, int rate);
	//�Ա��� �ؾ��ϴϱ�..
	virtual void Deposit(int money);
};

