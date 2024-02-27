#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void header(string name, double transactions, int id)
{
    cout << "Employee name: " << name << endl;
    cout << "ID Number: " << id << endl;
    cout << "Transactions: " << transactions;
}

void list(int item[7], int count, int quantity)
{
    if (count == 1)
    {
        item[0] += quantity;
    }
    else if (count == 2)
    {
        item[1] += quantity;
    }
    else if (count == 3)
    {
        item[2] += quantity;
    }
    else if (count == 4)
    {
        item[3] += quantity;
    }
    else if (count == 5)
    {
        item[4] += quantity;
    }
    else if (count == 6)
    {
        item[5] += quantity;
    }
    else if (count == 7)
    {
        item[6] += quantity;
    }

    cout << "                           List of Available Vaccines                           " << endl;
    cout << "\n**********************************************************************************" << endl;
    cout << "*\t\t<1> Astrazeneca  : Php: 610\t\t\t <" << item[0] << ">\t\t * " << endl;
    cout << "*\t\t<2> Novavax      : Php: 366\t\t\t <" << item[1] << ">\t\t * " << endl;
    cout << "*\t\t<3> Pfizer       : Php: 2379\t\t\t <" << item[2] << ">\t\t * " << endl;
    cout << "*\t\t<4> Moderna      : Php: 4504\t\t\t <" << item[3] << ">\t\t * " << endl;
    cout << "*\t\t<5> Sinovac      : Php: 3629\t\t\t <" << item[4] << ">\t\t * " << endl;
    cout << "*\t\t<6> Gamaleya     : Php: 1220\t\t\t <" << item[5] << ">\t\t * " << endl;
    cout << "*\t\t<7> Covax        : Php: 854\t\t\t <" << item[6] << ">\t\t * " << endl;
    cout << "*                         Type 8 if you want to chekout                          *" << endl;
    cout << "**********************************************************************************" << endl;

}

int main()
{
    srand(time(NULL));
    string name;
    int transactions = 0;
    int id = (rand() % 9999) + 98760000;
    int item[7] = { 0,0,0,0,0,0 };
    int count = 0;
    int quantity;
    int price = 0;

    cout << "Username: ";
    cin >> name;
    name[0] = toupper(name[0]);
    system("cls");
    cout << "Hello " << name << " the System is booting.";
    cout << "\n\nPlease wait ...";
    Sleep(3000);
    cout << "\n\n";
    system("pause");

    count += 0;
    quantity = 0;
    price += 0;

    while (count != 8)
    {
        if (count == 1)
        {
            price += (610 * quantity);
        }
        else if (count == 2)
        {
            price += (366 * quantity);
        }
        else if (count == 3)
        {
            price += (2379 * quantity);
        }
        else if (count == 4)
        {
            price += (4504 * quantity);
        }
        else if (count == 5)
        {
            price += (3629 * quantity);
        }
        else if (count == 6)
        {
            price += (1220 * quantity);
        }
        else if (count == 7)
        {
            price += (845 * quantity);
        }

        system("cls");
        header(name, transactions, id);
        cout << endl << endl;
        list(item, count, quantity);
        cout << endl;
        cout << "Total Price: Php " << price << endl;
        cout << "Enter the number of your desire Vaccine: ";
        cin >> count;
        if (count == 8)
        {
            break;
        }
        cout << "Enter the Quantity: ";
        cin >> quantity;
    }
}
