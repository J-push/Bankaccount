#pragma once

#include "Account.h"
#include "AccountArray.h"
#include "BankingCommonDecl.h"

// ��ü �迭 �����

template<typename T>
class BoundCheckArray
{
private:
	T* arr;
	int arrlen;
	BoundCheckArray(const BoundCheckArray& arr) {}
	//���� ��õ������ ����
	BoundCheckArray& operator=(const BoundCheckArray& arr){}
	//���� ��õ������ ����

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
			cout << "�ʹ� ����ģ�� " << endl;
			exit(1);
		}
		return arr[_idx];
	}
	T operator[](int _idx) const
	{
		if (_idx < 0 || _idx >= arrlen)
		{
			cout << "�ʹ� ����ģ�� " << endl;
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

