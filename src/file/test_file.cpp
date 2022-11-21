//
// Created by Administrator on 11/21/2022.
//

#include "test_file.h"
#include "iostream"

#define MIN(a, b) (((a)<(b)) ? a : b)
#define MASK_DEFINE(x) #x
#define concat(a, b) a##b

using namespace Qing::cus_exception;

/**
 *测试文件读取
 */
void test_file_str::testFile() {
    file << "this is File" << endl;

    cout << "析构函数" << endl;
    cout << "测试# 运算符：" << MASK_DEFINE(123123123FHFHC++\\/n) << endl;

    auto *xy = new double();
    *xy = 2.2;
    cout << "测试## 运算符：" << concat(x, y) << endl;
    delete xy;

}

test_file_str::~test_file_str() {
    file.close();
}

test_file_str::test_file_str() {
    try {
        cout << "构造函数" << endl;
        file.open("file.data", ios::out);
        cout << "#define定义的函数：MIN(a, b)=" << MIN(1, 2) << endl;
        throw MyException((char *) "err message");
    }
    catch (MyException &exception) {
        std::cout << exception.what() << endl;
    }
}
