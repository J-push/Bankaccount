#pragma once

class Account
{
private:
	int accountID;
	int balance;
	char* cusName;

public:
	Account(int _ID, int _money, char* _name);
	Account(const Account& _copy);
	Account& operator=(const Account& _copy);

	int GetAccID() const;
	virtual void Deposit(int _money);
	int Withdraw(int _money);
	void ShowAccountInfo() const;
	~Account();
};

