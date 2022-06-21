//        *
//      * *
//    * * *
//  * * * *
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter thr value of n:";
    cin>>n;
    for (int i=1;i<=n;i++){
        // for(int j=i;j<n;j++){
        //     cout<<"  ";
        // }
        // for(int j=1;j<=i;j++){
        //     cout<<" *";
        // }
        for (int j =1;j<=n;j++){
            if (j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<" *";
            }
        }
        cout<<endl;
    }
    return 0;
}