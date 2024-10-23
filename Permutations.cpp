#include <iostream> 
using namespace std;
typedef long long int ll; 

int main() {

	ll n;
	cin >> n;
	
	if(n == 2 || n == 3) {
		cout << "NO SOLUTION";
		return 0;
	}
	
	for(ll i = 1; i <= n; i ++) {
		if(!(i & 1)) 
			cout << i << " ";
	}
		
	for(ll j = 1; j <= n; j ++) {
		if(i & 1)
			cout << j << " ";
	}
}