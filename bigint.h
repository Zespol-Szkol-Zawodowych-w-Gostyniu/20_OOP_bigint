#pragma once
#include <string>

class bigint
{
//private:
	std::string number;
	
	int len;
	int binlen;
public:
	//0 - ok
	//1 - b³¹d nieprawid³owe znaki
	//2 - próba odejmowania liczby wiêkszej od mniejszej -> wynik zwracany to -1
	int err;
	std::string binnumber;
public:
	bigint();
	bigint(std::string);
	bigint operator +(const bigint&);
	bigint operator -(const bigint&);
	bigint operator *(const bigint&);
	bigint operator /(const bigint&);
	bigint operator %(const bigint&);
	bool operator <(const bigint&);
	bool operator >(const bigint&);
	void decTobin();
	std::string getNumber();
	void setNumber(std::string);
	int getLen();
	int bingetLen();
};

