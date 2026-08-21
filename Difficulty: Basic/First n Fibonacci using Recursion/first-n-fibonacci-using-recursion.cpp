class Solution {
  public:
  
  
    int fibo(int n){
        if(n == 0)
            return 0;
            
        if(n == 1)
            return 1;
            
        return fibo(n-1) + fibo(n-2);
        
    }
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            ans.push_back(fibo(i));
        }
        
        return ans;
    }
    
    
};