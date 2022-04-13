#pragma once
//1번 예외사항
class OverOutputException
{
private:
	int balance;
	int requireValue;
public:
	OverOutputException(int value, int require);
	void ShowException() const;
	// 메세지 출력
};

//2번 예외사항
class LessValueException
{
private:
	int exceptValue;
public:
	LessValueException(int value);
	void ShowException() const;
};


