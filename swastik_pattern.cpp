// *     * * * *
// *     *
// *     *
// * * * * * * *
//       *     *
//       *     * 
// * * * *     * 
     
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i =0 ;i < 2*n-1; i++)
    {
        for(int j = 0; j < 2*n-1; j++){
            if(i==n-1||j==n-1)
                printf("* ");
            else if((j==2*n-2 && i>=n-1) || (i==2*n-2 && j<=n-1))
                printf("* ");
            else if((i<=n-1 && j==0) || (j>=n-1 && i==0))
                printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}