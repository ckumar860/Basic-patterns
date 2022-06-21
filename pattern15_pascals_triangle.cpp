// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
#include <iostream>

int fac(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++)
            printf(" ");
        for(int j = 0; j <= i; j++){
            cout << fac(i)/(fac(j) * fac(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}