#include <vector>

class Solution
{  
public:
    int ans = 0;
    int emptyCells = 1; // initialized to 1 cause starting cell

    void dfs(std::vector<std::vector<int>>& grid, int x, int y, int visited)
    {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == -1) return;

        if (grid[x][y] == 2)
        {
            if (emptyCells == visited) ans++;
            return;
        }

        grid[x][y] = -1;

        dfs(grid, x + 1, y, visited + 1);
        dfs(grid, x - 1, y, visited + 1);
        dfs(grid, x, y + 1, visited + 1);
        dfs(grid, x, y - 1, visited + 1);

        grid[x][y] = 0;
    }

    int uniquePathsIII(std::vector<std::vector<int>>& grid)
    {
        int startX, startY;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    startX = i;
                    startY = j;
                }
                else if (grid[i][j] == 0)
                {
                    emptyCells++;
                }
            }
        }
    }
};