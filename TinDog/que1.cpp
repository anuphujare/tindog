#include <iostream>
using namespace std;
#include <string>
#include <string.h>
#include <vector>
#include<limits.h>

int output(int a, int b, int c)
{
    int x = abs(a-b);
    if(a>=b)
    {
        if(c<=a && c>=b)
        {
            return x;
        }
    }
    else{
        if(c>=a && c<=b)
        {
            return x;
        }

    }

    if(abs(c-a) <= abs(c-b))
    {
        return x+abs(c-a);
    }
    else
    {
        return x+abs(c-b);
    }

}


float angleClock(int h, int m, int s) {
    int n;
    int k;

      int drivers[n];
      int battery[k];
      int p;
    int min = INT_MAX;

     // sort(drivers, drivers+n);
     // sort(battery, battery+n);
        

   }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       // cout<<solve()<<endl;
    }
    return 0;
}
