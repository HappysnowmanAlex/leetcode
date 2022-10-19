#include <set>

class SmallestInfiniteSet
{
public:
    std::set<int> set;
    SmallestInfiniteSet()
    {
        for (int i = 1; i <= 1000; i++)
            set.insert(i);
    }

    int popSmallest()
    {
        int smallest = *set.begin();
        set.erase(set.begin());
        return smallest;
    }

    void addBack(int num)
    {
        set.insert(num);
    }
};