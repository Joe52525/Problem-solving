#include <iostream>
using namespace std;
int main()
{
    long long x ,y ;
    cin >> x >> y;
    for (int i=0; i<y;i++)
    {
        if (x%10==0)
        {
            x=x/10;
        }
        else
        {
            x=x-1;
        }
    }
    cout << x;

}