class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0){
            return false;
        }
        int expo;
        for(expo = 0; pow(2, expo)<= n; expo++){
            if(pow(2,expo)==n){
                return true;
            }
        }
        return false;
    }
};