class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      double window=0;
      double avg=0;
        for(int i =0;i<k;i++){
            window+=nums[i];
        }
        avg=window/k;
        double ans=avg;
for(int i=k;i<nums.size();i++){
window=window+nums[i];
window=window-nums[i-k];
avg = window/k;
ans = max(avg,ans);
}
return ans;
    }
};