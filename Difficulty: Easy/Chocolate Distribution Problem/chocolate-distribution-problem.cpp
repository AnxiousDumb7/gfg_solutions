class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();
        int diff = 0;
        int min_diff = 0;
        
        sort(a.begin(), a.end());
        
        //first difference
        min_diff = a[m - 1] - a[0];
        
        for(int i = 0; i <= n - m; i++){
            diff = a[i + m - 1] - a[i];
            min_diff = min(min_diff, diff);
        }
        return min_diff;
    }
};