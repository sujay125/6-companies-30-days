// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        stack<int> st;
        int num=1;
        for(int i=0; i<S.size(); i++){
            if(S[i]=='D'){
                st.push(num);
                num++;
            }
            else{
                st.push(num);
                num++;
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
            }
        }
        st.push(num);
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends