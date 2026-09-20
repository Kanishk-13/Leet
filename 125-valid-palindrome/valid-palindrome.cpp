class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(
            remove_if(s.begin(), s.end(), [](char c) {
                return !isalnum(c);
            }),
            s.end()
        );
        for(char &c : s) c = tolower(c);
        int n = s.length();
        string str = s;
        for(int i = 0; i<s.length()/2; i++){
            swap(s[i], s[n-i-1]);
        }
        return str == s;
    }
};