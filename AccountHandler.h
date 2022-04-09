#pragma once
#include "Account.h"

class AccountHandler
{
private:
	Account* accArr[100] = {0, };
	int accountNum;

public:
	AccountHandler();
	virtual void Menu() const;
	virtual void MakeAccount();
	virtual void MakeNormalAccount();
	virtual void MakeCreditAccount();
	virtual void Deposit();
	virtual void Withdraw();
	virtual void ShowAllAccountInfo();
	void exit();
	~AccountHandler();
};

enum Creditlevel
{
	LEVEL_A = 7,
	LEVEL_B = 4,
	LEVEL_C = 2
};

enum AccountSort
{
	NORMAL = 1,
	CREDIT = 2
};