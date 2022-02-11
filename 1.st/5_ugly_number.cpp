// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    set <long long > s;
	    long long int item;
	    s.insert (1);
	    while(n--){
	        auto it= s.begin();
	        item=*it;
	        s.erase(it);
	        s.insert(item*2);
	        s.insert(item*3);
	        s.insert(item*5);
	    }
	    return item;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends