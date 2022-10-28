// The rand7() API is already defined for you.
// @return a random integer in the range 1 to 7
int rand7();

class Solution {
public:
  int rand10() {
    int rand = rand7() + rand7() + rand7() + rand7() + rand7() + rand7() +
               rand7() + rand7() + rand7() + rand7();
    return rand / 10;
  }
};
