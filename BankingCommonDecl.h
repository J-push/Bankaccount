#pragma once
#include <iostream>
#include <cstring>

using namespace std;

enum select
{
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};

enum Creditlevel
{
	LEVEL_A = 7,
	LEVEL_B = 4,
	LEVEL_C = 2
};

enum AccountSort
{
	NORMAL = 1,
	CREDIT = 2
};