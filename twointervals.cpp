#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,x,y;
    cin >> a >> b >>c >>d;
    if ((c < a && d < a)||(c >b&& d>b))
    {
        cout << "-1"<<endl;
    }
    else
    {
        if (c>a)
        {
           x=c;
        }
        else
        {
            x=a;
        }
        if (d>b)
        {
            y=b;
        }
        else
        {
            y=d;
        }
     cout << x << " "<< y ;

    }
}