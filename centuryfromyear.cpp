#include <iostream>
using namespace std;
void centuryfromyear (int year, int century)
{
    cout <<"Enter the giver yaer : \n";
    cin >> year;
    if(year % 100==0)
    {
        century =year/100;
        cout << year << "---->"<<century;
    }
    else
    {
        century=(year/100)+1;
        cout << year << "---->"<<century;
    }

}
int main()
{
    int y,c ;
    centuryfromyear(y,c);

}
