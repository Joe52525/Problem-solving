#include <iostream>
using namespace std;
bool Divisbilty(int x,int y,int n)
{
    cout <<"Enter the given 3 numbers: \n";
    cin >> n >>x>>y;
    if (n%x==0&&n%y==0)
    {
    
        // return true;
        cout << "Number: "<< n<< "X : "<<x<< "Y: "<<y <<"true becuase"<< n <<"is divisble by :"<< x<< "and "<<y <<"\n";
    }
    else
    {
        // return false;
           cout << "Number: "<< n<< "X : "<<x<< "Y: "<<y <<"false becuase"<< n <<"is not divisble by :"<< x<< "and "<<y <<"\n";
    }
     return x,y,n;
 }
   

int main()
{
    int name,xx,yy;
    cout << Divisbilty(name,xx,yy);
    
}