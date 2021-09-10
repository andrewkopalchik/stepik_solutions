#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;
 
    // Pick all elements one by one
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
 
        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    return res;
}
 


int main(){
    int n;
    cin >> n;
    vector <int> array(n);
    for (int i=0;i<n;i++){
       cin >> array[i];
    }

    sort(array.begin(),array.end());
    
    int res = 1;
 
    // Pick all elements one by one
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (array[i] == array[j])
                break;
 
        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    cout << res;
}
    
