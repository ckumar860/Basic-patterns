#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"enter the no of days:";
    cin>>x;
    int y = x / 365;
    int w = (x%365)/7;
    int d = (x%365)%7;
    cout<<"Years:"<<y<<endl;
    cout<<"Weeks:"<<w<<endl;
    cout<<"Days"<<d<<endl;

    return 0;
}