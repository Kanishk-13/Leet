class Solution {
    bool recursion(int i, string &s){
        
        if(i>=s.size()/2) return true;
        if(s[i] != s[s.size()-i-1]) return false;
        return recursion(i+1, s);
    }
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        return recursion(0, s);
    }
};