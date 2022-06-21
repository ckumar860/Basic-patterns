// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n-i+1){
            cout << " " << j;
            j++;
        }
        
        int star = 2*(i-1);
        while(star){
            cout << " " << "*";
            star--;
        }

        j = n-i+1;
        while(j){
            cout << " " << j;
            j--;
        }

        i++;
        cout << endl;
    }
    return 0;
}