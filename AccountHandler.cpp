#include "AccountHandler.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include "AccountArray.h"
#include <iostream>

using namespace std;

AccountHandler::AccountHandler()
    :accountNum(0)
{
}

void AccountHandler::Menu() const
{
    cout << "-----Menu-----" << endl;
    cout << "1.���°���" << endl;
    cout << "2.�Ա�" << endl;
    cout << "3.���" << endl;
    cout << "4.�������� ��ü ���" << endl;
    cout << "5.���α׷� ����" << endl;
}

void AccountHandler::MakeAccount()
{
    int choose = 0;

    cout << "[������������]" << endl;
    cout << "1. ���뿹�ݰ���" << endl;
    cout << "2. �ſ�ŷڰ���" << endl;
    cout << "����: ";
    cin >> choose;

    if (choose == NORMAL)
    {
        MakeNormalAccount();
    }
    else
        MakeCreditAccount();
}

void AccountHandler::MakeNormalAccount()
{
    int id = 0;
    char name[30] = { 0, };
    int money = 0;
    int rate = 0;

    cout << "[���뿹�ݰ��� ����]" << endl;
    cout << "����ID: ";
    cin >> id;
    cout << "�̸�: ";
    cin >> name;
    cout << "�Աݾ�: ";
    cin >> money;
    cout << "������: ";
    cin >> rate;
    cout << endl;

    accArr[accountNum++] = new NormalAccount(id, money, name, rate);
}

void AccountHandler::MakeCreditAccount()
{
    int id = 0;
    char name[30] = { 0, };
    int money = 0;
    int rate = 0;
    int creditLevel = 0;

    cout << "[�ſ�ŷڰ��� ����]" << endl;
    cout << "����ID: ";
    cin >> id;
    cout << "�̸�: ";
    cin >> name;
    cout << "�Աݾ�: ";
    cin >> money;
    cout << "������: ";
    cin >> rate;
    cout << "�ſ���(1toA, 2toB, 3toC)";
    cin >> creditLevel;
    cout << endl;

    switch (creditLevel)
    {
    case 1:
        accArr[accountNum++] = new HighCreditAccount(id, money, name, rate, LEVEL_A);
    case 2:
        accArr[accountNum++] = new HighCreditAccount(id, money, name, rate, LEVEL_B);
    case 3:
        accArr[accountNum++] = new HighCreditAccount(id, money, name, rate, LEVEL_C);
    }
}

void AccountHandler::Deposit()
{
    int money = 0;
    int id = 0;

    cout << "[�� ��]" << endl;
    cout << "����ID : ";
    cin >> id;
    cout << "�Աݾ� : ";
    cin >> money;

    for (int i = 0; i < accountNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            accArr[i]->Deposit(money);
            cout << "�ԱݿϷ�" << endl;
            return;
        }
    }
    cout << "��ȿ���� ���� ID �Դϴ�." << endl;
}

void AccountHandler::Withdraw()
{
    int money = 0;
    int id = 0;
    cout << "[�� ��]" << endl;
    cout << "����ID: ";
    cin >> id;
    cout << "��ݾ�: ";
    cin >> money;

    for (int i = 0; i < accountNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            if (accArr[i]->Withdraw(money) == 0)
            {
                cout << "�ܾ��� �����մϴ�" << endl;
                return;
            }
            cout << "��ݿϷ�" << endl;
            return;
        }
    }
    cout << "���� ���¹�ȣ�Դϴ�" << endl;
}



void AccountHandler::ShowAllAccountInfo()
{
    for (int i = 0; i < accountNum; ++i)
    {
        if (accArr[i] != NULL)
        {
            accArr[i]->ShowAccountInfo();
            cout << endl;
        }
    }
}


void AccountHandler::exit()
{
    for (int i = 0; i < accountNum; i++)
        delete accArr[i];
    return ;
}

AccountHandler::~AccountHandler()
{
    for (int i = 0; i < accountNum; i++)
    {
        delete accArr[i];
    }
}