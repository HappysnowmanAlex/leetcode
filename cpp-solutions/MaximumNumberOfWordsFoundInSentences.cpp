#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  int mostWordsFound(vector<string> &sentences) {
    int res;

    for (string &s : sentences) {
      int spaces = count(s.begin(), s.end(), ' ') + 1;
      res = max(res, spaces);
    }

    return res;
  }
};
