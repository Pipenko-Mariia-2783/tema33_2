#include "MobileProvider.h"

int main()
{
    MobileProvider Kyivstar("Kyivstar");
    Tariff* p = nullptr;

    string name;
    float price;
    int seconds;
    int menu = 0;
    int id = 0;
    do {
        cout << "==================================\n";
        cout << "1 show all tariffs: " << endl;
        cout << "2 add a new minutes tariff: " << endl;
        cout << "3 add a new seconds tariff: " << endl;
        cout << "4 calc price of tariff: " << endl;
        cout << "0 Exit: " << endl;
        cin >> menu;
        switch (menu) {
        case 1:Kyivstar.showList();
            break;
        case 2:cout << "Input name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Input price for 1 minute: ";
            cin >> price;
            p = new MinutesTariff(name, price);
            Kyivstar.addTariff(p);
            break;
        case 3:cout << "Input name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Input price for 1 second: ";
            cin >> price;
            p = new SecondsTariff(name, price);
            Kyivstar.addTariff(p);
            break;
        case 4:
            cout << "Input number of tariff: ";
            cin >> id;

        }
    } while (menu != 0);
}