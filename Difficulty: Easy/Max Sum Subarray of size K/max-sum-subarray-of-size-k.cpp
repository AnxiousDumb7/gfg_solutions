class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        
        int max_sum = 0;
        int curr_sum = 0;
        int left = 0;
        
        for(int i = left; i <= k-1; i++){
            curr_sum += arr[i];
        }
        
        max_sum = curr_sum;
        for(int right = k; right < arr.size(); right++){
            curr_sum += arr[right] - arr[right - k];
            //curr_sum -= arr[right - k];
            
            max_sum = max(curr_sum, max_sum);
        }
        return max_sum;
    }
};