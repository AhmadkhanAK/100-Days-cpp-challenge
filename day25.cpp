#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      int input;
    cin >> input;
    int prices = 0, bed, bath;
    string room;
    while(input--){
        cin >> room >> bed >> bath;
        if(room=="apartment"){
            prices += 100;
        }
        prices += 50*bed + 100*bath;
    }
    cout << prices;
    
    return 0;
}
