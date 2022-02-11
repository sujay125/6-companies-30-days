#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int solve(){
    int n, m, k;
    cin>>n>>m>>k;
    if(m<=n-k+1){
        return m+k-1;
    }
    m=m-(n-k+1);
    return (m%n==0)?n:(m%n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    
    return 0;
}