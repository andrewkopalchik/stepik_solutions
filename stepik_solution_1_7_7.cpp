#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> array(n);
    for (int i=0;i<n;i++){
       cin >> array[i];
    }

    sort(array.begin(),array.end());

    for (int i=0;i<n;i++){
        if (array[i]>0){
            cout << array[i];
            return 0;
        }
    }



    for (int i=0;i<array.size();i++){
        cout << array[i];
    }    
}