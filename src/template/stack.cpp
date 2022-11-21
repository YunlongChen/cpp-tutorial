
#include <stdexcept>
#include "stack.h"

using namespace std;

template<class T>
void stack<T>::pop() {
    if (elems.empty()) {
        throw out_of_range("stack<>::pop(): empty stack");
    }
    // 删除最后一个元素
    elems.pop_back();
}

template<class T>
T stack<T>::top() const {
    if (elems.empty()) {
        throw out_of_range("stack<>::top(): empty stack");
    }
    // 返回最后一个元素的副本
    return elems.back();
}
