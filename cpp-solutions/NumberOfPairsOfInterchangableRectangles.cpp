#include <iostream>
#include <map>
#include <numeric>
#include <vector>

class Solution {
public:
  long long
  interchangeableRectangles(std::vector<std::vector<int>> &rectangles) {
    long long result = 0;
    std::map<std::pair<int, int>, int> mp;

    for (auto &rect : rectangles) {
      int gcd = std::__gcd(rect[0], rect[1]);
      std::pair<int, int> key = {rect[0] / gcd, rect[1] / gcd};
      if (mp.find(key) != mp.end())
        result += mp[key];
      mp[key]++;
    }

    return result;
  }
};
