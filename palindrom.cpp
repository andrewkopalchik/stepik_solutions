#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string n;
    
    cin >> n;
    if (n.size()<4){

    }
    if(n.size()==4)
    {
        if((n[0]==n[3])&&(n[1]==n[2]))
            cout << 1 << endl;
        else
            cout << (n[0]*n[3]);
    }

    return 0;
}