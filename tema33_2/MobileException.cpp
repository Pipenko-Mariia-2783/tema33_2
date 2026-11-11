#include "MobileException.h"

MobileException::MobileException(string text)
{
	this->text = text;
}

NameException::NameException(string text, string name)
	:MobileException(text)
{
	this->name = name;
}

string NameException::showMessage() const
{
	return "Name Exception: " + text + "! Name: " + name;
}

SecondsException::SecondsException(string text, int seconds)
	:MobileException(text)
{
	this->seconds = seconds;
}

string SecondsException::showMessage() const
{
	return  "Seconds Exception: " + text + "! Seconds: " + std::to_string(seconds);
}

PriceException::PriceException(string text, float price)
	:MobileException(text)
{
	this->price = price;
}

string PriceException::showMessage() const
{
	return "Price Exception: " + text + "! Price: " + std::to_string(price);
}
