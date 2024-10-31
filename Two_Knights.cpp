#include <iostream> 
using namespace std;
typedef long long int ll;

int main() {
	
	ll n;
	cin >> n;
	
	ll k = 1ll;
	while(k <= n) {
		
		ll totalWays = ( (k * k) * ((k * k) - 1ll) ) / 2ll;
		ll attackingWays = 4ll * (k - 1) * (k - 2);
		ll nonAttackingWays = totalWays - attackingWays;
		cout << nonAttackingWays << "\n";
		k ++ ;
		
	}
	
	return 0;
}