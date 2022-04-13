#pragma once
#include "Account.h"
#include "AccountExcpetion.h"

class NormalAccount : public Account
{
private:
	int rate;
public:
	NormalAccount(int ID, int money, my::string name, int rate);
	//입금을 해야하니까..
	virtual void Deposit(int money);
};

