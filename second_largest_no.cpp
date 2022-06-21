#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b){
        if(b>c){
            cout<<"second largest number is "<<b;
        }
        else{
            cout<<"second largest number is "<<c;
        }
    }
    else{
        if(a>c){
            cout<<"second largest number is "<<a;
        }
        else{
            cout<<"second largest number is "<<c;
        }
    }
    return 0;
}