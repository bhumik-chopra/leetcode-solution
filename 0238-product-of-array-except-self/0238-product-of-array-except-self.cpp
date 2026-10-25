class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
              int n =nums.size();
        vector<int> ans(n,1);
 
        int ri =1;
        int lft =1;
        for(int i=0;i<n;i++){
            ans[i]=ri;
            ri = ri *nums[i];
        }
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i]*lft;
            lft = lft *nums[i];
        }
    return ans;
    }
    
};