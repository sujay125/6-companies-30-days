// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0, j=0;
        long long int count=0, sum=1;
        if(n==1){
            if(a[0]<k){
                return 1;
            }
            else {return 0;}
        }
        while(j<n){
            sum*=a[j];
            while(sum>=k and i<=j){
                sum/=a[i];
                i++;
            }
            count+=j-i+1;
            j++;
        }
        return count;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends