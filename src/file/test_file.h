//
// Created by Administrator on 11/21/2022.
//

#include "fstream"
#include "../common/exception/my_exception.h"

#ifndef TEST_APP_TEST_FILE_H
#define TEST_APP_TEST_FILE_H

using namespace std;

class test_file_str {

private:
    std::ofstream file;

public:
    test_file_str();

    ~test_file_str();

    //测试文件读取
    void testFile();
};


#endif //TEST_APP_TEST_FILE_H
