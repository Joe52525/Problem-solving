#include <iostream>
using namespace std;
int SimpleMultiplication(int &num, int &res)
{
     cout << "Enter a giver number : "<< endl;
     cin >> num;
    if (num % 2==0)
    {
      res = num*9;   
    }
    else
    {
        res = num*8;
    }
    cout << "The result is : "<<res; 
    return num,res;
}
int main ()
{    
    int num1, ans;
    SimpleMultiplication(num1,ans);
}