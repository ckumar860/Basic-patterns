#include <iostream>

using namespace std;

int main()
{
    int s_amount;
    float comm;
    cout<<"Sale Amount: RS ";
    cin>>s_amount;
    if (s_amount<500)
        comm=35;
    else if (s_amount>=500 && s_amount<=2000)
        comm=s_amount*0.1;
    else if (s_amount>2000 && s_amount<=5000)
        comm=s_amount*0.15;
    else
        comm=s_amount*0.2;
    cout<<"commission: RS "<<comm;

    return 0;
}