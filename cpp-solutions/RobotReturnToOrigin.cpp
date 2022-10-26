#include <string>

class Solution {
public:
  bool judgeCircle(std::string moves) {
    int y = 0;
    int x = 0;
    for (char move : moves) {
      switch (move) {
      case 'D':
        --y;
        break;
      case 'U':
        ++y;
        break;
      case 'R':
        ++x;
        break;
      case 'L':
        --x;
        break;
      }
    }
    return y == 0 && x == 0;
  }
};
