//
// Created by Administrator on 11/21/2022.
//

#include "iostream"
#include "test.h"

using namespace std;

namespace Test {

    int TestClass::test_method(int parameter) {

        cout << "函数信息：" << this->head_name << this->username << parameter << endl;
        return 0;
    }

    TestClass::~TestClass() {
        cout << "析构函数" << endl;
    }

    TestClass::TestClass() {
        cout << "构造函数" << endl;
    }

    //    两个参数的构造函数
    TestClass::TestClass(int username, int headName) {
        this->username = username;
        this->head_name = headName;
        cout << "两个参数的构造函数" << endl;
    }
}