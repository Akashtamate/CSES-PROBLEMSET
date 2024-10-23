#include <iostream> 
using namespace std;

typedef long long int ll;

int main() {

	ll n;
	cin >> n;
	ll totalSum = (	n * (n + 1))/2;
	ll inputSum = 0;
	
	for(ll i = 0; i < n - 1; i ++) {
		ll ele;
		cin >> ele;
		inputSum += ele;
	}
	
	cout << totalSum - inputSum;
	return 0; 
}

