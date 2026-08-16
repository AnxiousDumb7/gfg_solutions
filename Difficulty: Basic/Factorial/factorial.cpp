class Solution {
  public:
    int factorial(int n) {
        // code here
        int f = 1;
        
       
        if(n <= 1){
            return 1;
        }
        else{
            f = n * factorial(n-1);
        }
        return f;
    }
};