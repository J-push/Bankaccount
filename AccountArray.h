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
	BoundCheckArray(int len = 100)
		:arrlen(len)
	{
		arr = new T[len];
	}
	T& operator[](int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "�ʹ� ����ģ�� " << endl;
			exit(1);
		}
		return arr[idx];
	}
	T operator[](int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "�ʹ� ����ģ�� " << endl;
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

