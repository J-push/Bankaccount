#pragma once
#include "Account.h"

class NormalAccount : public Account
{
private:
	int rate;
public:
	NormalAccount(int _ID, int _money, my::string _name, int _rate);
	//입금을 해야하니까..
	virtual void Deposit(int _money);
};

