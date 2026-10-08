class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int i = 0;
        int ans = -1;
        int n = arr.size();
        while (i < n) {
            int j = i;
            while (j < n && arr[j] == arr[i]) {
                j++;
            }
            int value = arr[i];
            int count = j - i;
            if (value == count) {
                ans = max(ans, value);
            }

            i = j;
        }

        return ans;
    }
};