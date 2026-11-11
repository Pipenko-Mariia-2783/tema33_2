#include "SecondsTariff.h"
 

SecondsTariff::SecondsTariff()
{

    price = 1.0f;
}

SecondsTariff::SecondsTariff(std::string name, float price) :Tariff(name)
{
    if (price <= 0) {
        throw PriceException("Invaild price!", price);
    }
    this->price = price;
}

void SecondsTariff::setPrice(float price)
{
    if (price <= 0) {
        throw PriceException("Invaild price!", price);
    }
    this->price = price;
}

float SecondsTariff::getPrice() const
{
    return price;
}

float SecondsTariff::calcCost(int seconds) const
{
    if (seconds <= 0) {
        throw SecondsException("Invaild seconds!", seconds);
    }
    return price * seconds;
}

void SecondsTariff::show() const
{
    cout << "Seconds Tariff\n";
    Tariff::show();
    cout << "Price for seconds: " << price << endl;
}
