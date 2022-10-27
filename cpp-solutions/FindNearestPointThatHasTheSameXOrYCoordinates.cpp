#include <climits>
#include <vector>

class Solution {
public:
  int calcDist(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
  }

  int nearestValidPoint(int x, int y, std::vector<std::vector<int>> &points) {
    int index = -1;
    int minDist = INT_MAX;
    for (int i = 0; i < points.size(); i++) {
      {
        if (x == points[i][0] || y == points[i][1]) {
          const int dist = calcDist(x, y, points[i][0], points[i][1]);
          if (dist < minDist) {
            minDist = dist;
            index = i;
          }
        }
      }
    }

    return index;
  }
};
