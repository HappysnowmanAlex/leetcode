#include <iostream>
#include <vector>

class RLEIterator {
public:
    std::vector<int> seq;

    RLEIterator(std::vector<int>& encoding) {
        seq = encoding;
    }

    int next(int n) {
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            if (seq.empty()) return -1;
            res = seq[0];
            seq.erase(seq.begin());
        }
        return res;
    }
};