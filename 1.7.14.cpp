#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> vec (n);
    for (int i=0;i<n;i++){
        cin >> vec[i];
    }

    int counter = 0;

    vector <int> out;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (vec[i]==vec[j]){
                counter++;
            }
        }
        if(counter==1){
                        out.push_back(vec[i]);
        }
        counter = 0;
    }
    for (int i=0;i<out.size();i++){
        cout << out[i] << ' ';
    }
        
        
    }
