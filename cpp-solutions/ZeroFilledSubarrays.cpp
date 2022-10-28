#include <vector>

class Solution {
public:
  long long zeroFilledSubarray(std::vector<int> &nums) {
    long long ans = 0, c = 0;
    for (auto n : nums) {
      if (n == 0)
        ans += ++c;
      else
        c = 0;
    }
    return ans;
  }
};
