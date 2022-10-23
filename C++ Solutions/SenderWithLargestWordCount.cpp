#include <vector>
#include <string>
#include <unordered_map>

class Solution
{
public:
    std::string largestWordCount(std::vector<std::string> &messages, std::vector<std::string> &senders)
    {
        std::unordered_map<std::string, int> count;

        std::string sender;
        int max = 0;

        for (int i = 0; i < messages.size(); i++)
        {
            int words = std::count(messages[i].begin(), messages[i].end(), ' ') + 1;
            int total = count[senders[i]] += words;
            if (total > max || (total == max && senders[i] > sender))
            {
                sender = senders[i];
                max = total;
            }
        }

        return sender;
    }
};