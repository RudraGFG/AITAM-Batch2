class Solution {
  public:
    int f(int n){
        // base case
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        // recursive case
        int a = f(n-1), b = f(n-2);
        
        return a + b;
    }
    int nthFibonacci(int n) {
        int ans = f(n);
        
        return ans;
    }
};
