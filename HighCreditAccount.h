#pragma once

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
	int plusrate;

public:
	HighCreditAccount(int _ID, int _money, my::string _name, int _rate, int _plusrate);
	virtual void Deposit(int _money);
};

