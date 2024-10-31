#include <iostream>
using namespace std;
typedef long long int ll;

void coinPiles(ll a, ll b) {
    ll sum = a + b;
    if (sum % 3 == 0 && min(a, b) * 2 >= max(a, b)) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        coinPiles(a, b);
    }
    return 0;
}
