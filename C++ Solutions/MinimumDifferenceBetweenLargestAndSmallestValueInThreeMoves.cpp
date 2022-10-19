#include <vector>
#include <algorithm>

class Solution
{
public:
    int minDifference(std::vector<int> &nums)
    {
        int n = nums.size();
        if (n < 5)
            return 0;

        std::partial_sort(nums.begin(), nums.begin() + 4, nums.end());
        std::partial_sort(nums.rbegin(), nums.rbegin() + 4, nums.rend(), std::greater<int>());

        int min_diff = INT_MAX;
        for (int i = 0, j = n - 4; i < 4; ++i, ++j)
            min_diff = std::min(min_diff, nums[j] - nums[i]);

        return min_diff;
    }
};