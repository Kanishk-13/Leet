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
        int left = 0;
        int right = n-1;
        // for(int i = 0; i<s.length()/2; i++){
        //     swap(s[i], s[n-i-1]);
        // }
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
        // return string == s;
    }
};