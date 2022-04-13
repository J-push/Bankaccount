#pragma once

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
	int plusrate;

public:
	HighCreditAccount(int ID, int money, my::string name, int rate, int plusrate);
	virtual void Deposit(int money);
};

