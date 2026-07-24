class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        
        int n = arr.size();
        int left = 0;
        deque<int> dq;
        vector<int> ans;
        
        
        for(int right = 0; right < n; right++){
        
            if(arr[right] < 0) dq.push_back(arr[right]);
            
            //check window size
            if(right - left + 1 == k){
                
                if(!dq.empty()){
                    ans.push_back(dq.front());
                }
                else{
                    ans.push_back(0);
                }
                
                //shift window
                if(arr[left] < 0 && !dq.empty()){
                    dq.pop_front();
                }
                left++;
            }
            
        }
        return ans;
    }
};