#pragma once
#include "MyString.h"

class Account
{
private:
	int accountID;
	int balance;
	my::string cusName;

public:
	Account(int _ID, int _money, my::string _name);
	//Account(const Account& _copy);
	//Account& operator=(const Account& _copy);

	int GetAccID() const;
	virtual void Deposit(int _money);
	int Withdraw(int _money);
	void ShowAccountInfo() const;
	/*~Account();*/
};

