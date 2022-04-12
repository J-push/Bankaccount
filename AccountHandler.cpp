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
    cout << "1.계좌개설" << endl;
    cout << "2.입금" << endl;
    cout << "3.출금" << endl;
    cout << "4.계좌정보 전체 출력" << endl;
    cout << "5.프로그램 종료" << endl;
}

void AccountHandler::MakeAccount()
{
    int choose = 0;

    cout << "[계좌종류선택]" << endl;
    cout << "1. 보통예금계좌" << endl;
    cout << "2. 신용신뢰계좌" << endl;
    cout << "선택: ";
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

    cout << "[보통예금계좌 개설]" << endl;
    cout << "계좌ID: ";
    cin >> id;
    cout << "이름: ";
    cin >> name;
    cout << "입금액: ";
    cin >> money;
    cout << "이자율: ";
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

    cout << "[신용신뢰계좌 개설]" << endl;
    cout << "계좌ID: ";
    cin >> id;
    cout << "이름: ";
    cin >> name;
    cout << "입금액: ";
    cin >> money;
    cout << "이자율: ";
    cin >> rate;
    cout << "신용등급(1toA, 2toB, 3toC)";
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

    cout << "[입 금]" << endl;
    cout << "계좌ID : ";
    cin >> id;
    cout << "입금액 : ";
    cin >> money;

    for (int i = 0; i < accountNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            accArr[i]->Deposit(money);
            cout << "입금완료" << endl;
            return;
        }
    }
    cout << "유효하지 않은 ID 입니다." << endl;
}

void AccountHandler::Withdraw()
{
    int money = 0;
    int id = 0;
    cout << "[출 금]" << endl;
    cout << "계좌ID: ";
    cin >> id;
    cout << "출금액: ";
    cin >> money;

    for (int i = 0; i < accountNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            if (accArr[i]->Withdraw(money) == 0)
            {
                cout << "잔액이 부족합니다" << endl;
                return;
            }
            cout << "출금완료" << endl;
            return;
        }
    }
    cout << "없는 계좌번호입니다" << endl;
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