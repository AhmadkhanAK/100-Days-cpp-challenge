#include <iostream>
#include <string>
using namespace std;

int main() {
   string a, b;
   
    
    cin >> a >> b;
    char temp = a[0];
    
    cout << a.size() << ' ' << b.size() << '\n';
    
    cout << a + b << '\n';

    a[0] = b[0];
    b[0] = temp;
    
    cout << a << ' ' << b;
    
    return 0;
}
