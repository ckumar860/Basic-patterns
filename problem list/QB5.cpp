#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter x and y"<<endl ;
    cout<<"X: ";
    cin>>x;
    cout<<"Y: ";
    cin>>y;
    if (x%y==0)
        cout<<"x / y = "<<(x/y);
    else
        cout<<"DIVISION NOT POSSIBLE";
    return 0;
}