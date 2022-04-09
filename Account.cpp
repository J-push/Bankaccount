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

int Account::Withdraw(int _money) // ��ݾ� ��ȯ!
{
	if (balance < _money)
		return 0;

	balance -= _money;
	return _money;
}

void Account::ShowAccountInfo() const
{
	cout << "����ID: " << accountID << endl;
	cout << "�� ��: " << cusName << endl;
	cout << "�� ��: " << balance << endl;
}

Account::~Account()
{
	delete[]cusName;
}
