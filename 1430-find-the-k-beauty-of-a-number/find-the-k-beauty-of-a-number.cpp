class Solution {
public:
    int divisorSubstrings(int n, int k) {
        string win="";
        string num=to_string(n);
        int x=num.size();
        int cnt=0;
        for(int i=0;i<k;i++){
            win+=num[i];
        }
        if(n%stoi(win)==0) cnt++;
        for(int i=k;i<x;i++){
            win=win.substr(1,win.length()-1);
            win+=num[i];
            if(stoi(win)==0) continue;
            if(n%stoi(win)==0) cnt++;
        }
        return cnt;
        
    }
};