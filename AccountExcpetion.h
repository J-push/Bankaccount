#pragma once
//1�� ���ܻ���
class OverOutputException
{
private:
	int balance;
	int requireValue;
public:
	OverOutputException(int value, int require);
	void ShowException() const;
	// �޼��� ���
};

//2�� ���ܻ���
class LessValueException
{
private:
	int exceptValue;
public:
	LessValueException(int value);
	void ShowException() const;
};


