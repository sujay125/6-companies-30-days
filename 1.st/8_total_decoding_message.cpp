// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    if(str.size()==0 || str[0]=='0'){
		        return 0;
		    }
		    if(str.size()==1){return 1;}
		    int cnt1 =1, cnt2=1;
		    for(int i=1; i<str.size(); i++){
		        int single=str[i]-'0';
		        int dble= (str[i-1]-'0')*10+single;
		        int cnt=0;
		        if(single>0){cnt+=cnt2;}
		        if(dble>=10 and dble<=26){cnt+=cnt1;}
		        cnt1=cnt2%1000000007;
		        cnt2=cnt%1000000007;
		    }
		    return cnt2;
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends