//
// Created by Administrator on 11/21/2022.
//

#include "my_exception.h"
#include "cstring"

namespace qing {
    namespace cus_exception {
        const char *my_exception::what() const noexcept {
            return "this is my cus_exception~";
        }

        //构造函数，生成异常信息
        my_exception::my_exception(char *message) {
            this->message = message;
        }

        my_exception::~my_exception() noexcept {

        }

    } // qing
} // cus_exception