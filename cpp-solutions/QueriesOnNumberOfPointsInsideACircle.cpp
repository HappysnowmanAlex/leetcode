#include <vector>
#include <iostream>
#include <algorithm>

class Solution
{
public:
    std::vector<int> countPoints(std::vector<std::vector<int>> points, std::vector<std::vector<int>> queries)
    {
        std::vector<int> res;

        for (auto query : queries)
        {
            int count = 0;
            for (auto point : points)
            {
                if (sqrt(pow(query[0] - point[0], 2) + pow(query[1] - point[1], 2)) <= query[2])
                {
                    count++;
                }
            }
            res.push_back(count);
        }

        return res;
    }
};