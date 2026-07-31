class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count =0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+arr[i];
        }
        int avg = sum/k;
        if(avg>=threshold){
         count=1;  
        }
 for(int i=k;i<arr.size();i++){
            sum=sum+arr[i];
            sum=sum-arr[i-k];
int av = sum/k;
            if(av>=threshold){
                 count++;
            }
        }
          return count;
          }
};