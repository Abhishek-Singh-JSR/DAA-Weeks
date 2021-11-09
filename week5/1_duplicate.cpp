#include <bits/stdc++.h>
using namespace std;


	void solve() {
	    int n;
	    cin >> n;
	    char array[n];
	    int count[26] = {0};
	    for (int i = 0; i < n; i++) {
	        cin >> array[i];
	        count[array[i] - 'a']++;
	    }
	    char ch;
	    int count_ch = 1;
	    for (int i = 0; i < 26; i++) {
	        if (count[i] > count_ch) {
	            ch = (char)(i + 'a');
	            count_ch = count[i];
	        }
	    }
	    if (count_ch == 1) {
	        cout << "\nNo duplicates present\n";
	    } else {
	        cout << ch << " " << count_ch;
	    }
	}


	int main() {
	    int t;
	    cin >> t;
	    while (t--) {
	        solve();
	    }
	    return 0;
	}
