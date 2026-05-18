class Solution {
    void solve(int n, int &sum){
        //base case
        if(n==0)
        return;
        int rem = n%10; //last digit
        sum += rem;
        solve(n/10,sum);
    }
  public:
    int sumOfDigits(int n) {
        int sum = 0;
        solve(n,sum);
        return sum;
       
    }
};
