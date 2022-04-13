#include "Account.h"
#include "BankingCommonDecl.h"
#include "AccountExcpetion.h"

Account::Account(int ID, int money, my::string name)
	: accountID(ID), balance(money),cusName(name)
{
}

//Account::Account(const Account& _copy)
//	: accountID(_copy.accountID), balance(_copy.balance)
//{
//	cusName = new char[strlen(_copy.cusName) + 1];
//	strcpy_s(cusName, strlen(_copy.cusName) + 1, _copy.cusName);
//}

//Account& Account::operator=(const Account& _copy)
//{
//	accountID = _copy.accountID;
//	balance = _copy.balance;
//
//	delete[]cusName;
//	cusName = new char[strlen(_copy.cusName) + 1];
//	strcpy_s(cusName, strlen(_copy.cusName) + 1, _copy.cusName);
//	return *this;
//}

int Account::GetAccID() const
{
	return accountID;
}

void Account::Deposit(int money)
{
	if (money < 0)
	{
		throw LessValueException(money);
	}
	balance += money;
}

int Account::Withdraw(int money) // ��ݾ� ��ȯ!
{
	if (money < 0)
	{
		throw LessValueException(money);
	}
	if (balance < money)
	{
		throw OverOutputException(balance, money);
	}
	balance -= money;
	return money;
}

void Account::ShowAccountInfo() const
{
	cout << "����ID: " << accountID << endl;
	cout << "�� ��: " << cusName << endl;
	cout << "�� ��: " << balance << endl;
}

//Account::~Account()
//{
//	delete[]cusName;
//}
