#include <unordered_map>

class Solution
{
public:
    int sumDigits(int n)
    {
        int sum = 0;

        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int countLargestGroup(int n)
    {
        std::unordered_map<int, int> map;

        int max = 0;
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            int digits = sumDigits(i);

            map[digits]++;

            if (map[digits] > max)
            {
                max = map[digits];
                ans = 1;
            }
            else if (map[digits] == max)
            {
                ans++;
            }

        }

        return ans;
    }
};