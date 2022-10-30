#include <map>
#include <vector>

class Solution {
public:
  std::vector<int> findDiagonalOrder(std::vector<std::vector<int>> &nums) {
    std::map<int, std::vector<int>> mp;

    for (int i = 0; i < nums.size(); ++i) {
      for (int j = 0; j < nums[i].size(); ++j) {
        mp[i + j].insert(mp[i + j].begin(), nums[i][j]);
      }
    }

    std::vector<int> res;

    for (auto it : mp) {
      for (int num : it.second) {
        res.push_back(num);
      }
    }

    return res;
  }
};
