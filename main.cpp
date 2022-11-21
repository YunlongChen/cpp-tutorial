#include <iostream>
#include <unistd.h>
#include "src/test.h"
#include "ctime"
#include "cstring"
#include "src/template/Stack.h"
#include "src/file/test_file.h"

typedef Test::TestClass TestName;
#define PI 3.14159

/**
 * 获取到用户名称信息给你看
 */
typedef struct Username {
    char book_name[50]{};
    string username;
    int32_t age{};
} StudentInfo;


using namespace std;

namespace Qing {

    template<typename T>
    inline T const &Max(T const &a, T const &b) {
        return a < b ? b : a;
    }
}

void testMethod() {

    cout << "当前行号：" << __LINE__ << endl;
    cout << "当前日期：" << __DATE__ << endl;
    cout << "当前时间 __TIME__ : " << __TIME__ << endl;

    // string 类型的栈
    Stack<string> stringStack;
    cout << sizeof(stringStack) << endl;
}

void testFile() {
    test_file_str tess;
    tess.testFile();
}

void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序
    cout << "程序结束了：在" << __LINE__ << "行" << endl;
    exit(signum);
}

int main() {

    cout << "当前文件 __FILE__ : " << __FILE__ << endl;

    //注册信号处理器
    signal(SIGINT, signalHandler);

    std::cout << "Hello, World!" << std::endl;

    //产生信号
#if WIN64
    cout << "不需要终止" << endl;
#else
    raise(SIGINT);
#endif

    auto ff = 3.1459;
    auto s("hello");
    // int *
    auto z = new auto(9);

    int miles = 120, user_times = 0, ok_times = 3;

    time_t now = time(nullptr);

    char *times = ctime(&now);
    tm *gm_tm = gmtime(&now);

    cout << gm_tm->tm_hour << endl;
    char *date_times = asctime(gm_tm);

    cout << "获取到的本地时间" << times << endl;
    cout << "UTC 日期和时间：" << date_times << endl;

    cout << ff << s << z << miles << user_times << ok_times << endl;


    cout << "1970 到目前经过秒数:" << now << endl;

    tm *ltm = localtime(&now);

    // 输出 tm 结构的各个组成部分
    cout << "年: " << 1900 + ltm->tm_year << endl;
    cout << "月: " << 1 + ltm->tm_mon << endl;
    cout << "日: " << ltm->tm_mday << endl;
    cout << "时间: " << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;


    cout << Qing::Max(2, 3) << endl;

    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Qing::Max(i, j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Qing::Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Qing::Max(s1, s2) << endl;

    cout << miles << "test_output" << endl;

    cout << miles << endl;

    cout << miles << endl;
    TestName test(1, 2);

    test.test_method(2);

    new TestName(1, 2);

    auto *tt = new TestName(1, 2);

    tt->test_method(2);

    testMethod();

    StudentInfo studentInfo;
    strcpy(studentInfo.book_name, "bookName");
    cout << "书名：" << studentInfo.book_name << endl;
    cout << "姓名：" << studentInfo.username << endl;
    cout << "年龄：" << studentInfo.age << endl;

    studentInfo.username = "Stan";
    studentInfo.age = 29;
    cout << "书名：" << studentInfo.book_name << endl;
    cout << "姓名：" << studentInfo.username << endl;
    cout << "年龄：" << studentInfo.age << endl;

    cout << "派的值：" << PI << endl;

    testFile();

#if P_DETACH
    cout << "派的值：IF：" << PI << endl;
#endif

    return 0;
}
