#pragma once
#include "MyString.h"

class Account
{
private:
	int accountID;
	int balance;
	my::string cusName;

public:
	Account(int ID, int money, my::string name);
	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccountInfo() const;
};

