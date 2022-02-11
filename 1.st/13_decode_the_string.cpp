// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    string decodestring(string &s, int &i){
        string ans;
        while(i<s.size() and s[i]!=']'){
            if(isdigit(s[i])){
                int k=0;
                while(i<s.size() and isdigit(s[i])){
                    k=k*10+s[i++]-'0';
                }
                i++;
                string r=decodestring(s,i);
                while(k-->0){
                    ans+=r;
                }
                i++;
            }else{
                ans+=s[i++];
            }
        }
        return ans;
    }
public:
    string decodedString(string s){
        int i=0;
        return decodestring(s, i);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends