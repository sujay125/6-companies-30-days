#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 

class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        if(s1.size()>s2.size()){
            swap(s1,s2);
        }
        for(int k=s1.size(); k>=1; k--){
            if(s1.size()%k!=0){continue;}
            if(s2.size()%k!=0){continue;}
            string s=s1.substr(0,k);
            
            int flag=1;
            for(int i=0; i<s1.size(); i+=k){
                if(s1.substr(i,k)!=s){
                    flag=0;
                    break;
                }
            }
            if(flag==0){continue;}
            for(int i=0; i<s2.size(); i+=k){
                if(s2.substr(i,k)!=s){
                    flag=0;
                    break;
                }
            }
            if(flag==0){continue;}
            return s;
        }
        return "";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s1, s2;
    cin>>s1>>s2;
    Solution ob;
    auto ans=ob.gcdOfStrings(s1,s2);
    cout<<ans<<endl;
    
    return 0;
}
