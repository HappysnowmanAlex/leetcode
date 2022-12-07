#include <vector>

using namespace std;

class Solution {
public:
  int diagonalSum(vector<vector<int>> &mat) {
    int sum = 0, rows = mat.size(), cols = mat[0].size();
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (i == j)
          sum += mat[i][j];
      }
    }
    return sum;
  }
};
