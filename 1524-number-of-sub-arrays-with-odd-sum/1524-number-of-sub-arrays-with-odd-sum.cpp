class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int sum =0;
        int even=1;
        int odd = 0;
        long long ans=0;
    for(int i =0;i<arr.size();i++){
          sum+=arr[i];
          if(sum%2==0){
ans+=odd;
even++;
          }else{
            odd++;
             ans+=even; }

    }
    return ans%1000000007;}

};