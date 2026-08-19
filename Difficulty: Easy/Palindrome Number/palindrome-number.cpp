class Solution {
  public:
    bool isPalindrome(int n) {
        n = abs(n);
       
        vector<int> v;
        while(n){
            int num = n % 10;
            v.push_back(num);
            n /= 10; 
        }
        
        int left = 0;
        int right = v.size()-1;
        
        return palindrome(v, left, right);
        
    }
    
    bool palindrome(vector<int> &v, int left, int right){
      
        if(left >= right){
            return true;
        }
        if(v[left] != v[right]){
            return false;
        }
        palindrome(v, left+1, right-1);
    }
};