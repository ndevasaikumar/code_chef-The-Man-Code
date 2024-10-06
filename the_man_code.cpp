#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    if(n == 1){
	       cout << 1 << " " << 1 << endl;
	         continue;
	    }
	    cout << (n / 2) + (n % 2) << " ";
	    if(n % 3 == 0)
	        cout << n /3 << endl;
	    else
	        cout << (n / 3) + 1 << endl;
	}

}
