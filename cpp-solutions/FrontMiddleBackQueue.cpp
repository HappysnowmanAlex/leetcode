#include <list>
#include <iterator>
#include <iostream>

class FrontMiddleBackQueue
{
public:
    std::list<int> queue;

    FrontMiddleBackQueue() {}

    void pushFront(int val)
    {
        queue.insert(queue.begin(), val);
    }

    void pushMiddle(int val)
    {
        auto it = queue.begin();
        std::advance(it, queue.size() / 2);
        queue.insert(it, val);
    }

    void pushBack(int val)
    {
        queue.push_back(val);
    }

    int popFront()
    {
        if (queue.empty())
            return -1;
        int first = queue.front();
        queue.erase(queue.begin());
        return first;
    }

    int popMiddle()
    {
        if (queue.empty())
            return -1;
        auto it = queue.begin();
        std::advance(it, queue.size() / 2);
        int mid = *it;
        queue.erase(it);
        return mid;
    }

    int popBack()
    {
        if (queue.empty())
            return -1;
        int last = queue.back();
        queue.pop_back();
        return last;
    }
};
