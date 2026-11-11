#include "Tariff.h"

Tariff::Tariff()
{
    name = "none";

}

Tariff::Tariff(std::string name)
{
    if (name == " ") {
        throw NameException("Too short name!", "Empty");
    }
    if (name.length() < 3) {
        throw NameException("Too short name!",name);
    }
    if (name == "xxx") {
        throw NameException("Invaild name!", name);
    }
    this->name = name;
}

void Tariff::setName(std::string name)
{
    if (name == " ") {
        throw NameException("Too short name!", "Empty");
    }
    if (name.length() < 3) {
        throw NameException("Too short name!", name);
    }
    if (name == "xxx") {
        throw NameException("Invaild name!", name);
    }
    this->name = name;
}

std::string Tariff::getName() const
{
    return name;
}


void Tariff::show() const
{
    cout << "Name tariff: " << name << endl;
}
