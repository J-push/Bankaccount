#pragma once
class Account
{
private:
	int accountID;
	int balance;
	char* cusName;

public:
	Account(int _ID, int _money, char* _name);
	Account(Account& _copy);
	int GetAccID() const;
	virtual void Deposit(int _money);
	int Withdraw(int _money);
	virtual void ShowAccountInfo() const;
	~Account();
};

