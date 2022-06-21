#include <iostream>

using namespace std;

int main()
{
    int cid;
    string name;
    float unit, amount, rate, surcharge;
    cout << "Enter customer name, ID and unit consumed:\n";
    getline(cin, name);
    cin >> cid >> unit;
    if (unit < 200)
    {
        amount = 1.20 * unit;
        rate = 1.20;
    }
    else if (unit >= 200 && unit < 400)
    {
        amount = 1.50 * unit;
        rate = 1.50;
    }
    else if (unit >= 400 && unit < 600)
    {
        amount = 1.80 * unit;
        rate = 1.80;
    }
    else
    {
        amount = 2.00 * unit;
        rate = 2.00;
    }
    cout << "customer IDNO :" << cid << endl;
    cout << "customer Name :" << name << endl;
    cout << "Unit Consumed :" << unit << endl;
    if (amount > 400)
    {
        surcharge = amount * 0.15;
    }
    // cout << "Amount charges @Rs " << rate << " per unit : " << amount << endl;
    // cout << "Surcharge Amount : " << surcharge << endl;
    // cout << "Net Amount Paid By the customer : " << amount + surcharge;
    printf("Amount charges @Rs %.2f per unit : %.2f\n",rate,amount);
    printf("surcharge Amount : %.2f\n",surcharge);
    printf("Net Amount paid by the customer : %.2f",amount + surcharge);
    return 0;
}
