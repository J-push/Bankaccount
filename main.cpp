#include <iostream>
#include <cstring>
#include "Account.h"
#include "AccountHandler.h"
#include "BankingCommonDecl.h"

int main()
{
    AccountHandler owner;

    while (1)
    {
        owner.Menu();
        int choice = 0;
        cout << "����: ";
        cin >> choice;
        switch (choice)
        {
        case MAKE:
            owner.MakeAccount();
            break;
        case DEPOSIT:
            owner.Deposit();
            break;
        case WITHDRAW:
            owner.Withdraw();
            break;
        case INQUIRE:
            owner.ShowAllAccountInfo();
            break;
        case EXIT:
            owner.exit();
            return 0;
        default:
            cout << "�߸��� ��ȣ�� �Է��ϼ̽��ϴ�" << endl;
        }
    }
    return 0;
}



