/**********************************************************************************************************************

Pros: Lower auxiliary space, only 𝑂(1)

Cons: The solution is less intuitive, as the logic is embedded within conditional checks, making it harder to follow. 
Additionally, it splits and outputs sets directly, so it’s not as flexible if the sets need further processing.

************************************************************************************************************************/

#include <iostream>
using namespace std;
typedef long long int ll;

ll compareSum(const ll& n);
void printSetOne(const ll& n);
void printSetTwo(const ll& n);


ll compareSum(const ll& n) {
	ll num = n;
	ll sum1 = 0;
	ll sum2 = 0;
	ll flag = 1;
	
	while(num > 0) {
		
		if(flag & 1ll) {
			sum1 += num;
			sum2 += num - 1ll;
			flag ++;
		}
		
		else {
			sum1 += num - 1ll;
			sum2 += num;
			flag ++;
		}
		
		num -= 2ll;
	}
	
	if(sum1 == sum2) {
		cout << "YES" << "\n";
		return 1;
	}
	
	else {
		cout << "NO";
		return 0;
	}
	 
}

void printSetOne(const ll& n) {
	
	ll oddEvenFlag = 1ll;
	
	ll num = n;
			
	while(num > 0) {
		
		if(oddEvenFlag & 1ll) {
			cout << num << " ";
			oddEvenFlag ++;
		}
		
		else {
			cout << num - 1 << " ";
			oddEvenFlag ++ ;
		}
		
		num -= 2ll;
		
		if((num == 1ll) && (n & 1ll))
			break;
	}
}

void printSetTwo(const ll& n) {
	
	ll oddEvenFlag = 1ll;
	
	ll num = n;
			
	while(num > 0) {
		
		if(oddEvenFlag & 1ll) {
			cout << num - 1 << " ";
			oddEvenFlag ++;
		}
		
		else {
			cout << num << " ";
			oddEvenFlag ++ ;
		}
		
		num -= 2;
	}
}

int main() {
	
	ll n;
	cin >> n;
	
	if(n == 1 || n == 2) {
		cout << "NO";
		return 0;
	}
	
	ll sumRes = compareSum(n);
	
	if(sumRes) {
		
		if(!(n & 1ll)) 
			cout << n/2ll << "\n";
		else
			cout << ((n - 1ll) / 2ll) << "\n";
		
		printSetOne(n);
		
		if(!(n & 2ll)) 
			cout << "\n" << n/2ll << "\n";
		else
			cout << "\n" << ((n + 1ll) / 2ll) << "\n";	
			
		printSetTwo(n);
	}
	
	return 0;
	
}



/*

/***********************************************************************************************************************
Pros: Clear, simple logic for constructing the sets, making the solution easy to read, understand, and modify if needed.
Cons: Requires 𝑂(𝑛) space for storing the sets.

************************************************************************************************************************



#include <iostream>
#include <vector>
using namespace std;

typedef long long int ll;

int main() {
    ll n;
    cin >> n;

    ll total_sum = n * (n + 1) / 2;
    
    // If the total sum is odd, print "NO" because equal partitioning isn't possible.
    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    
    // Target sum for each subset
    ll half_sum = total_sum / 2;
    vector<ll> set1, set2;
    
    // Create the sets by iterating from n downwards and adding numbers to reach half_sum
    for (ll i = n; i >= 1; i--) {
        if (half_sum >= i) {
            set1.push_back(i);
            half_sum -= i;
        } else {
            set2.push_back(i);
        }
    }
    
    // Output set1
    cout << set1.size() << endl;
    for (ll num : set1) {
        cout << num << " ";
    }
    cout << endl;
    
    // Output set2
    cout << set2.size() << endl;
    for (ll num : set2) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

*/

