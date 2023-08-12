#include <iostream>
#include <string>
using namespace std;
string reversed( string str)
{
    string rev = " " ;
    for (int i=str.size()-1;i>=0;i--)
    {
        rev+=str[i]; 
    }
    return rev;
}
int main()
{
    
    cout <<"the revetsed string :"<< reversed("word")<<"\n";
}