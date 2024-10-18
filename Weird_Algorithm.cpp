#include <iostream>
using namespace std;
 
typedef long long int ll;  
 
int main() {
    ll n;
    cin >> n;
 
    while (true) {
        cout << n;  
 
        if (n == 1) break;  
 
        cout << " ";  
 
        if (n % 2 == 0) {
            n /= 2ll;  
        }
        else {
            n = 3ll * n + 1;  
        }
    }
 
    return 0;
}
