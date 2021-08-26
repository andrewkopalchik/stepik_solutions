#include <iostream>

using namespace std;

int main() {
    
	int V, T;
    
    cin >> V >> T;
    int road = V*T;
    
    while (road>109){
        road=road-109;
    }
    while (road<-109){
        road=road+109;
    }
    if (road<0){
        road=road*-1;
        cout << 109-road;
    }
    else{
        cout << road;
    }


    

    




    }
    
    
  
