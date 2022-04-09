#pragma once
#include "Account.h"
#include "AccountArray.h"
#include "BankingCommonDecl.h"
#include "AccountArray.h"

class AccountHandler
{
private:
	BoundCheckAccountPtrArray* accArr[100] = {0, };
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