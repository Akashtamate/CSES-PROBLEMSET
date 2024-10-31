#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;

int main() {
	
	string inpStr;
	cin >> inpStr;
	
	if(inpStr.length() == 1 || inpStr.length() == 2) {
		cout << inpStr;
		return 0;
	}
	
	vector<int> alphCont(26, 0);
	
	for(char c : inpStr) {
		alphCont[c - 'A'] ++;
	}
	
	int oddCharCount = 0;
	for(int i = 0; i < 26; i ++) {
		if(alphCont[i] & 1)
			oddCharCount ++;
		if(oddCharCount > 1) {
			cout << "NO SOLUTION";
			return 0;
		}	
	}
	
	int l = 0;
	int r = inpStr.length() - 1;
	int n = inpStr.length();
	string palindromeStr(n, ' ');
	for(int i = 0; i < 26; i ++){
		if(alphCont[i] > 0 && (!(alphCont[i] & 1))) {
			for(int j = 0; j < alphCont[i]/2; j ++) {
				palindromeStr[l] = char('A' + i);
				palindromeStr[r] = char('A' + i);
				l ++;
				r --;
			}
		}
	}
	
	for(int i = 0; i < 26; i ++) {
		if(oddCharCount == 1 && (alphCont[i] & 1)) {
			for(int k = l ; k <= r; k ++) {
				palindromeStr[k] = char('A' + i);
			}
		}
	}
	
	cout << palindromeStr;
}