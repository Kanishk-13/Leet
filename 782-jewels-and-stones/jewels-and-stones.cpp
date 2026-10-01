class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> s;
        for(char x : jewels) s.insert(x);
        int count = 0;
        for(char x : stones){
            if(s.find(x) != s.end()) count++;
        }
        return count;
    }
};