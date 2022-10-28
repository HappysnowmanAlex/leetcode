#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

class Solution {
public:
  int numUniqueEmails(std::vector<std::string> &emails) {
    std::unordered_set<std::string> set;

    for (std::string &email : emails) {
      std::string sanitizedEmail;
      for (char ch : email) {
        if (ch == '+' || ch == '@')
          break;
        if (ch == '.')
          continue;
        sanitizedEmail += ch;
      }
      sanitizedEmail += email.substr(email.find('@'));
      set.insert(sanitizedEmail);
    }

    return set.size();
  }
};
