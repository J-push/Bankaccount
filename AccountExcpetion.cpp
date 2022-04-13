#include "AccountExcpetion.h"
#include "BankingCommonDecl.h"

OverOutputException::OverOutputException(int value, int require)
	:balance(value) , requireValue(require)
{

}

void OverOutputException::ShowException() const
{
	cout << "잔액에서 " << requireValue - balance << "만큼 부족합니다. 다시 입력해주세요" << endl;
}

LessValueException::LessValueException(int value)
	:exceptValue(value)
{
}

void LessValueException::ShowException() const
{
	cout << "입,출금액 " << exceptValue << "은 잘못된 입력입니다. 다시 입력해주세요" << endl;
}
