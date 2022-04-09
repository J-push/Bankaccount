#include "AccountArray.h"
#include "BankingCommonDecl.h"

BoundCheckAccountPtrArray::BoundCheckAccountPtrArray(int _len)
	:arrlen(_len)
{
	arr = new ACCOUNT_PTR[_len];
}

ACCOUNT_PTR& BoundCheckAccountPtrArray::operator[](int _idx)
{
	if (_idx < 0 || _idx >= arrlen)
	{
		cout << "�ʹ� ����ģ�� " << endl;
		exit(1);
	}
	return arr[_idx];
}

ACCOUNT_PTR BoundCheckAccountPtrArray::operator[](int _idx) const
{
	if (_idx < 0 || _idx >= arrlen)
	{
		cout << "�ʹ� ����ģ�� " << endl;
		exit(1);
	}
	return arr[_idx];
}

int BoundCheckAccountPtrArray::GetArrLen() const
{
	return arrlen;
}

BoundCheckAccountPtrArray::~BoundCheckAccountPtrArray()
{
	delete[]arr;
}
