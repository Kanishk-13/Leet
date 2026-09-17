class Solution {
    int recursion(int n){
        if(n<= 1) return n;
        return recursion(n-1) + recursion(n-2);
    }
public:
    int fib(int n) {
        return recursion(n);
    }
};