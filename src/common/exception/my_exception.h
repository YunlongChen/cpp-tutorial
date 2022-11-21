//
// Created by Administrator on 11/21/2022.
//

#ifndef TEST_APP_MY_EXCEPTION_H
#define TEST_APP_MY_EXCEPTION_H

#include "exception"

namespace qing {
    namespace cus_exception {

        class my_exception : public std::exception {
            char const *message;

        public:
            const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override;

            ~my_exception() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override;

            my_exception(char *message);

            char *getMessage() const;
        };

    } // qing
} // cus_exception

#endif //TEST_APP_MY_EXCEPTION_H
