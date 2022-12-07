#include <vector>

class Solution {
public:
  int countLatticePoints(std::vector<std::vector<int>> &circles) {
    int count = 0;
    for (int x = 1; x <= 100; x++) {
      for (int y = 1; y <= 100; y++) {
        for (auto &circle : circles) {
          int px = circle[0], py = circle[1], r = circle[2];
          if ((x - px) * (x - px) + (y - py) * (y - py) <= r * r) {
            count++;
            break;
          }
        }
      }
    }
    return count;
  }
};
