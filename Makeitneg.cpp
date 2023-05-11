#include <iostream>
using namespace std;
int makeNegative(int num)
{
  if (num >0)
    return -num;
  else
    return num;
  return 0;
}
int main()
{
    int n;
    cout << "Enetr the number :"<< endl;
    cin >>n;
    cout <<"Make " << n << " negative -----> "<<makeNegative(n);
    return 0;
}