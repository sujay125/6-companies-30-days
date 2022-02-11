// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        sort(arr, arr+n);
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        int cnt=1;
        for(int i=0; i<=n; i++){
            if(arr[i]==cnt){
                cnt++;
            }
        }
        arr[1]=cnt;
        for(auto &x : m){
            if(x.second>=2){
                arr[0]=x.first;
            }
        }
        return arr;
        // map<int, int>m;
        // for(auto &b : arr){
        //     m[b]++;
        // }
        // for(auto &a: m){
        //     if(a.second>=2){
        //         cout<<a.first<<" ";
        //     }
        // }
        // int s=1;
        // for(int i=1; i<=m.size(); i++){
        //     if(m[i]->first==s){
        //         s++;
        //     }
        //     else{
        //         cout<<m[i].first;
        //         break;
        //     }
        // }
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends