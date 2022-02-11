#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int count=0, sh=INT_MAX;
        for(auto &b : nums){
            count+=b;
        }
        if(count<target){
            return 0;
        }
        int n=nums.size(), sum=0,left=0, right=0;
        while(right<n){
            sum+=nums[right];
            if(sum>=target){
                while(sum>=target){
                    sum-=nums[left];
                    left++;
                }
                sh=min(sh, right-left+2);
            }
            right++;
        }
        return sh;
    }
};


 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int target; cin>>target;
    target-=1;
    vector<int>n(target);
    for(int i=0; i<target; i++){
        cin>>n[i];
    }
    Solution ob;
    auto ans=ob.minSubArrayLen(target, n);
    cout<<ans;
    
    return 0;
}