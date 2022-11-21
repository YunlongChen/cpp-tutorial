//
// Created by Administrator on 11/21/2022.
//

#include <vector>

#ifndef TEST_APP_STACK_H
#define TEST_APP_STACK_H

#endif //TEST_APP_STACK_H

using namespace std;

template<class T>
class Stack {
private:
    vector<T> elems;     // 元素

public:
    // 出栈
    void pop();

    // 返回栈顶元素
    T top() const;

    // 如果为空则返回真。
    [[nodiscard]] bool empty() const {
        return elems.empty();
    }
};
