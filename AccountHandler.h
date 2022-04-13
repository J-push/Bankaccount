#pragma once
#include "Account.h"
#include "AccountArray.h"
#include "BankingCommonDecl.h"

class AccountHandler
{
private:
	BoundCheckArray<Account*> accArr;
	int accountNum;

public:
	AccountHandler();
	void Menu() const;
    void MakeAccount();
	void MakeNormalAccount();
	void MakeCreditAccount();
	void DeleteAccount();
	void Deposit();
	void Withdraw();
	void ShowAllAccountInfo();
	void exit();
	~AccountHandler();
};