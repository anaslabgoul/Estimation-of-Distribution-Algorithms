#include <iostream>
#include <string>
#include <vector>

class Frequency {

public:
    int n;
    std::vector<int> freq;

    Frequency(int m) {
        n = m;
        freq = std::vector<int>(m, 1/n);
    }

    Frequency(int m, std::vector<int> f) {
        n = m;
        freq = f;
    }

    void 
};