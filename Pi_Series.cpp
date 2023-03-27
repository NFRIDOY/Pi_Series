#include<bits/stdc++.h>
using namespace std;
int n;

bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

int main()
{
    long long int i,j,limit=pow(10,4),four = 4;
    double pi0=4.0,pi1=0.0,pi2=0.0;

    cout << "Limit(n) = " << limit << endl;

    //for(i=1,j=3;i<=limit;i=i+4,j=j+4)
    for(i=1;i<=limit;i=i+4)
    {
        // Plus
        pi1 = pi1 + (4.0/i);
        //pi2 = pi2 - (4.0/j);
        if(check_prime(i))
            cout << "#" << i << " " << pi1 << "@";
    }
    cout << endl << endl << "Half of Series(+) = " << pi1 << endl << endl;
    //printf("%lf \n", pi1);
    for(j=3;j<=limit;j=j+4)
    {
        // Minus
        pi2 = pi2 - (4.0/j);
        //if(j/check_prime(j)==0)
        cout << pi2 << " ";
    }
    cout << endl << endl << "Half of Series(-) = " << pi2 << endl << endl;
    cout << endl << "PI = " << pi1+pi2 << endl;
    //printf("%lf \n", pi2);

    return 0;
}
