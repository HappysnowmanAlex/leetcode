#include <algorithm>
#include <vector>

class Solution {
public:
  int nest(std::vector<int> &nums, std::vector<int> &set, int i) {
    if (std::find(set.begin(), set.end(), i) != set.end())
      return 1;
    return 1 + nest(nums, set, nums[i]);
  }

  int arrayNesting(std::vector<int> &nums) {
    int max = 0;
    for (int num : nums) {
      std::vector<int> set;
      int count = nest(nums, set, num);
      if (count > max) {
        max = count;
      }
    }
    return max;
  }
};
