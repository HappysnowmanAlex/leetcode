#include <vector>
#include <iostream>

class CustomStack
{
private:
    std::vector<int> stack, inc;
    int maxSize;

public:
    CustomStack(int maxSize)
    {
        this->maxSize = maxSize;
    }

    void push(int x)
    {
        if (this->stack.size() == this->maxSize)
            return;
        this->stack.push_back(x);
        this->inc.push_back(0);
    }

    int pop()
    {
        int i = this->stack.size() - 1;

        if (i < 0)
            return -1;
        if (i > 0)
            this->inc[i - 1] += this->inc[i];

        int res = this->stack[i] + this->inc[i];

        this->stack.pop_back();
        this->inc.pop_back();

        return res;
    }

    void increment(int k, int val)
    {
        int i = std::min(k, (int)this->stack.size()) - 1;
        if (i >= 0)
            this->inc[i] += val;
    }
};