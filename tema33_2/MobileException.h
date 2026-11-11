#pragma once
#include <string>
using std::string;

class MobileException
{
protected:
	string text;
public:
	MobileException(string text);
	virtual ~MobileException() = default;

	virtual string showMessage()const = 0;

};

class NameException :public MobileException {
protected:
	string name;
public:
	NameException(string text, string name);
	string showMessage()const override;
};

class SecondsException :public MobileException {
protected:
	int seconds;
public:
	SecondsException(string text, int seconds);
	string showMessage()const override;
};

class PriceException :public MobileException {
protected:
	float price;
public:
	PriceException(string text, float price);
	string showMessage()const override;
};
