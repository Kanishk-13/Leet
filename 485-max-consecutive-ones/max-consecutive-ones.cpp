
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int start = 0, end = 0;
        int zeros = 0;

        while (end < n) {
            if (nums[end] == 0) {
                zeros++;
            }

            while (zeros > 0) {
                if (nums[start] == 0) {
                    zeros--;
                }
                start++;
            }

            maxi = max(maxi, end - start + 1);
            end++;
        }

        return maxi;
    }
};
