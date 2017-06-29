#include <iostream>
#include "BinaryHeap.h"


class mycomparison {
    bool reverse;
public:
    mycomparison(const bool &revparam = false) { reverse = revparam; }

    bool operator()(const int &lhs, const int &rhs) const {
        if (reverse) return (lhs > rhs);
        else return (lhs < rhs);
    }
};

int main() {

    BinaryHeap<int, char, mycomparison> h(mycomparison(false));
    h.push(89, 'a');
    h.push(2, 'b');
    h.push(3, 'c');
    h.push(4, 'd');
    h.push(0, 'e');
    std::cout << h << std::endl;
    std::cout << h.top() << std::endl;
    std::cout << h.pop() << std::endl;
    std::cout << h << std::endl;
    h.updateKey(0, 'd');
    std::cout << h << std::endl;

    return 0;
}