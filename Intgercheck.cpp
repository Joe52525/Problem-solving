#include <iostream>
using namespace std;
void intgercheck(int num)
{
    // int num;
    // cin >> num;
    if (num % 2==0)
    {
        cout << "The given intger is even \n";
    }
    else 
    {
        cout << "The given intger is odd \n";
    }
}
int main()
{
    intgercheck (5);
}