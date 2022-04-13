#pragma once

#include "Account.h"
#include "AccountArray.h"
#include "BankingCommonDecl.h"

// 객체 배열 만들기

template<typename T>
class BoundCheckArray
{
private:
	T* arr;
	int arrlen;
	BoundCheckArray(const BoundCheckArray& arr) {}
	//대입 원천적으로 막음
	BoundCheckArray& operator=(const BoundCheckArray& arr){}
	//복사 원천적으로 막음

public:
	BoundCheckArray(int len = 100)
		:arrlen(len)
	{
		arr = new T[len];
	}
	T& operator[](int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "너무 지나친데 " << endl;
			exit(1);
		}
		return arr[idx];
	}
	T operator[](int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "너무 지나친데 " << endl;
			exit(1);
		}
		return arr[idx];
	}

	int GetArrLen() const
	{
		return arrlen;
	}

	~BoundCheckArray()
	{
		delete[]arr;
	}
};

