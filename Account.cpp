#include "Account.h"
#include <cstring>
#include <iostream>

using namespace std;

Account::Account(int _ID, int _money, char* _name)
	: accountID(_ID), balance(_money)
{
	cusName = new char[strlen(_name) + 1];
	strcpy_s(cusName, strlen(_name) + 1, _name);
}

Account::Account(const Account& _copy)
	: accountID(_copy.accountID), balance(_copy.balance)
{
	cusName = new char[strlen(_copy.cusName) + 1];
	strcpy_s(cusName, strlen(_copy.cusName) + 1, _copy.cusName);
}

Account& Account::operator=(const Account& _copy)
{
	accountID = _copy.accountID;
	balance = _copy.balance;

	delete[]cusName;
	cusName = new char[strlen(_copy.cusName) + 1];
	strcpy_s(cusName, strlen(_copy.cusName) + 1, _copy.cusName);
	return *this;
}

int Account::GetAccID() const
{
	return accountID;
}

void Account::Deposit(int _money)
{
	balance += _money;
}

int Account::Withdraw(int _money) // 출금액 반환!
{
	if (balance < _money)
		return 0;

	balance -= _money;
	return _money;
}

void Account::ShowAccountInfo() const
{
	cout << "계좌ID: " << accountID << endl;
	cout << "이 름: " << cusName << endl;
	cout << "잔 액: " << balance << endl;
}

Account::~Account()
{
	delete[]cusName;
}
