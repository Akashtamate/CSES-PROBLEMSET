#include <iostream> 
using namespace std;
typedef long long int; 
ll numberSpiral(ll& x, ll& y);

ll numberSpiral(ll& x, ll& y) {
	
	if(x == y) {
		return ((x * x) - (x - 1));
	}
	
	else if(x > y) {
		ll diagEle = ((x * x) - (x - 1));
		
		if(!(x & 1)) 
			return (diagEle + (x - y));
		
		else
			return (diagEle - (x - y));
	}
	
	else {
		ll diagEle = ((y * y) - (y - 1));
		
		if(!(y & 1))
			return (diagEle - (y - x));
			
		else
			return (diagEle + (y - x));
	}
}

int main() {
	int t; 
	ll x; 
	ll y; 
	cin >> t;
	for(int i = 0; i < t; i ++) {
		cin >> x;
		cin >> y;
		ll ans = numberSpiral(x, y);
		cout << ans << "\n";
	}
	return 0;
}