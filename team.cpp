#include <iostream>
using namespace std;
int main()
{
     int x, y, z, q, res , c = 0;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x >>y >> z;
        res = x + y + z;
        if (res >= 2)
        {
            c++;
        }
        cout << x <<" "<< y <<" "<< z << endl;
    
    }
    cout << c << endl;
}