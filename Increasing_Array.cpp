#include <iostream> 
using namespace std;
typedef long long int ll;

int main() {
	
	ll n;
	cin >> n;
	
	vector<ll> arr(n);
	
	for(auto& val : arr) {
		cin >> val;
	}
	
	ll moves = 0;
	for(int i = 1; i < n; i ++) {
		if(arr[i] < arr[i - 1ll]) {
			moves += arr[i - 1ll] - arr[i];
			arr[i] = arr[i - 1ll];
		}
	}
	cout << moves;
	
	return 0;
}