#include <iostream>
#define M 1000000007
using namespace std;
typedef long long int ll;

int main() {
    ll exp;
    cin >> exp;
    ll base = 2ll;
    ll res = 1ll;

    if (exp == 0) {
        cout << 1;
        return 0;
    }

    while (exp > 0) {
        if (exp & 1ll) {
            res = (res * base) % M; 
        }
        base = (base * base) % M;    
        exp >>= 1ll;
    }

    cout << res % M;
    return 0;
}



/*

********************
Recursive approach
********************


#include <iostream>
using namespace std;
typedef long long int ll;
#define M 1000000007
ll power(ll a, ll n);


ll power(ll a, ll n) {
    if (n == 0)
        return 1;  
    if (n == 1)
        return a % M;  
    
    ll halfPower = power(a, n / 2) % M;  
    
    if (!(n & 1))  
        return (halfPower * halfPower) % M;
    else  
        return (a * (halfPower * halfPower) % M) % M;
}

int main() {
	ll n;
	cin >> n;
	ll a = 2;
	cout << power(a, n) << '\n';
}

*/