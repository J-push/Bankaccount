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
	BoundCheckArray(int _len = 100)
		:arrlen(_len)
	{
		arr = new T[_len];
	}
	T& operator[](int _idx)
	{
		if (_idx < 0 || _idx >= arrlen)
		{
			cout << "너무 지나친데 " << endl;
			exit(1);
		}
		return arr[_idx];
	}
	T operator[](int _idx) const
	{
		if (_idx < 0 || _idx >= arrlen)
		{
			cout << "너무 지나친데 " << endl;
			exit(1);
		}
		return arr[_idx];
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

