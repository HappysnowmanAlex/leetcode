#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    int totalSteps(std::vector<int> nums)
    {
        int count = 0;

        while (!std::is_sorted(nums.begin(), nums.end()))
        {
            count++;
        }

        return count;
    }
};

void main()
{
    std::cout << Solution().totalSteps({ 10, 1, 2, 3, 4, 5, 6, 1, 2, 3 });
}