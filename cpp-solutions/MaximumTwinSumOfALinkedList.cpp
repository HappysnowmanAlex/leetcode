#include <algorithm>
#include <cstddef>
#include <vector>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  int pairSum(ListNode *head) {
    int n = size(head);
    int count = 0;
    std::vector<int> sums(n / 2, 0);

    ListNode *ptr = head;

    while (ptr != NULL) {
      sums[count] += ptr->val;
      count == n / 2 ? --count : ++count;
      ptr = ptr->next;
    }

    return *std::max_element(sums.begin(), sums.end());
  }

  int size(ListNode *head) {
    int size = 0;
    ListNode *ptr = head;

    while (ptr != NULL) {
      ++size;
      ptr = ptr->next;
    }

    return size;
  }
};
