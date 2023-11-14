#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={10,20,30};
    vector<int> :: iterator it = vec.begin();
    auto ite = vec.begin()+1;
    cout <<"THe first element is : "<< *it << "\n";
    cout <<"THE SECOND ELEMENT IS : "<< *ite <<"\n";
    // vec.erase(vec.begin() ,vec.begin()+2);
    // cout << "The first element after deletion is : "<< *it<< "\n";
    advance(it ,2);
    cout <<"THe first element is : "<< *it << "\n"; 
    advance(it ,-2);
    cout <<"THe first element is : "<< *it << "\n"; 
    // Ranged loops
    for (int val : vec)
    {
        cout << val << " ";
    }
    return 0;

}