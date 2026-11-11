#include "MobileProvider.h"

int main()
{
    MobileProvider Kyivstar("Kyivstar");
    Tariff* p = nullptr;
    p = new SecondsTariff("Student", 0.01);
    Kyivstar.addTariff(p);
    p = new MinutesTariff("Day", 0.5);
    Kyivstar.addTariff(p);
    Kyivstar.showList();
}