#pragma once

#include "Account.h"
// 객체 배열 만들기

typedef Account* ACCOUNT_PTR;

class BoundCheckAccountPtrArray
{
private:
	ACCOUNT_PTR* arr;
	int arrlen;
	BoundCheckAccountPtrArray(const BoundCheckAccountPtrArray& arr);
	BoundCheckAccountPtrArray& operator=(const BoundCheckAccountPtrArray& arr){}

public:
	BoundCheckAccountPtrArray(int _len = 100);
	ACCOUNT_PTR& operator[](int _idx);
	ACCOUNT_PTR operator[](int _idx) const;
	int GetArrLen() const;
	~BoundCheckAccountPtrArray();
};

