//
// Created by Administrator on 11/21/2022.
//

#include "MyException.h"
#include "cstring"

namespace Qing {
    namespace cus_exception {
        const char *MyException::what() const noexcept {
            return "this is my cus_exception~";
        }

        //构造函数，生成异常信息
        MyException::MyException(char *message) {
            this->message = message;
        }

        MyException::~MyException() noexcept {

        }

    } // Qing
} // cus_exception