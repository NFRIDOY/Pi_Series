#include<bits/stdc++.h>
using namespace std;

isOdd(int odd)
{

    if(odd/2 != 0)
    {
        return odd;
    }
    return 1;
}

int main()
{
    int i,j,limit=100,four = 4;
    double pi0=4,pi1=0,pi2=0;

    for(i=1;i<=limit;i=i+4)
    {
        // Plus
        pi1 = pi1 + (4/i);
    }
    //cout >> pi1 >> endl;
    printf("%lf \n", pi1);
    for(j=3;j<=limit;j=j+4)
    {
        // Minus
        pi2 = pi2 - (4/j);
    }
    //cout >> pi2 >> endl;
    printf("%lf \n", pi2);

    return 0;
}
