//            1    
//          1 2 1  
//        1 2 3 2 1
//      1 2 3 4 3 2 1
//    1 2 3 4 5 4 3 2 1

#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n;

    int i = 1;
    while(i<= n){
        int spaces = n-i;
        while(spaces--){
            cout << "  ";
        }

        int j = 1;
        while(j <= i){
            cout << " " << j;
            j++;
        }

        j = i-1;
        while(j >= 1){
            cout << " " << j;
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}