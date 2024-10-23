#inclde <iostream> 
using namespcae std; 
typdef long long int ll; 

int main() {
	
	string DNASeq;
	cin >> DNASeq;
	ll currentCount = 1; 
	ll finalConunt = 1; 
	ll n = string.size();
	
	if(n == 1)
		cout << 1; 
	
	for(ll i = 1; i < n; i ++) {
		if(DNASeq[i] == DNASeq[i - 1]) {
			currentCount ++;
			maxCount = max(currentCount, maxCount);
		}
		
		else {
			currentCount = 1; 
		}
	}
	
	cout << maxCount;
	
	return 0; 
}