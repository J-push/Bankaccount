//#include "AccountArray.h"
//#include "BankingCommonDecl.h"
//
//template<typename T>
//BoundCheckAccountPtrArray<T>::BoundCheckAccountPtrArray(int _len)
//	:arrlen(_len)
//{
//	arr = new T[_len];
//}
//
//template<typename T>
//T& BoundCheckAccountPtrArray<T>::operator[](int _idx)
//{
//	if (_idx < 0 || _idx >= arrlen)
//	{
//		cout << "�ʹ� ����ģ�� " << endl;
//		exit(1);
//	}
//	return arr[_idx];
//}
//
//template<typename T>
//T BoundCheckAccountPtrArray<T>::operator[](int _idx) const
//{
//	if (_idx < 0 || _idx >= arrlen)
//	{
//		cout << "�ʹ� ����ģ�� " << endl;
//		exit(1);
//	}
//	return arr[_idx];
//}
//
//template<typename T>
//int BoundCheckAccountPtrArray<T>::GetArrLen() const
//{
//	return arrlen;
//}
//
//template<typename T>
//BoundCheckAccountPtrArray<T>::~BoundCheckAccountPtrArray()
//{
//	delete[]arr;
//}
