#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    float s=0;
    for(int i=1;i<=n;i++){
        s = s + 1/pow(i,i);
    }
    cout<<"sum of the series is: "<<s;
    return 0;
}