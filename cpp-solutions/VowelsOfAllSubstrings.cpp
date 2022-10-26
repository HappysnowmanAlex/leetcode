#include <string>

class Solution
{
public:
    long long countVowels(std::string word)
    {
        long long res = 0;

        
        size_t n = word.size();
        const std::string vowels = "aeiou";

        for (size_t i = 0; i < n; i++)
            if (vowels.find(word[i]) != std::string::npos)
                res += (i + 1) * (n - i);

        return res;
    }
};