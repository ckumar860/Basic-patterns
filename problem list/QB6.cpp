#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    float x;
    cout << "Enter the value of x: ";
    cin >> x;
    if (x != 0)
    {
        cout << "value of sin(1/x): " << setprecision(4) << sin(1 / x);
    }
    else
    {
        cout << "value of sin(1/x): NOT POSSIBLE";
    }
    return 0;
}