#include "AccountExcpetion.h"
#include "BankingCommonDecl.h"

OverOutputException::OverOutputException(int value, int require)
	:balance(value) , requireValue(require)
{

}

void OverOutputException::ShowException() const
{
	cout << "�ܾ׿��� " << requireValue - balance << "��ŭ �����մϴ�. �ٽ� �Է����ּ���" << endl;
}

LessValueException::LessValueException(int value)
	:exceptValue(value)
{
}

void LessValueException::ShowException() const
{
	cout << "��,��ݾ� " << exceptValue << "�� �߸��� �Է��Դϴ�. �ٽ� �Է����ּ���" << endl;
}
