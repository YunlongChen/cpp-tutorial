//
// Created by Administrator on 11/21/2022.
//

#ifndef TEST_APP_TEST_H
#define TEST_APP_TEST_H

#endif //TEST_APP_TEST_H


#include "vector"

namespace Test {

    class TestClass {

    private:
        int head_name;
        int username;

    public:

        int test_method(int parameter);

        TestClass();

        ~TestClass();

        TestClass(int username, int headName);
    };

}