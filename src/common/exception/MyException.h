//
// Created by Administrator on 11/21/2022.
//

#ifndef TEST_APP_MYEXCEPTION_H
#define TEST_APP_MYEXCEPTION_H

#include "exception"

namespace Qing {
    namespace cus_exception {

        class MyException : public std::exception {
            char const *message;

        public:
            const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override;

            ~MyException() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override;

            MyException(char *message);

            char *getMessage() const;
        };

    } // Qing
} // cus_exception

#endif //TEST_APP_MYEXCEPTION_H
