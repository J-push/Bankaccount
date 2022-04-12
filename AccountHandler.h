#pragma once
#include "Account.h"
#include "AccountArray.h"
#include "BankingCommonDecl.h"

class AccountHandler
{
private:
	BoundCheckAccountPtrArray accArr;
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