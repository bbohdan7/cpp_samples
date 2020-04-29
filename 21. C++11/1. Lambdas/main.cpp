#include <iostream>

int main() {
    //&& - means the right value reference
    auto lambda1 = [](auto a, auto &&b) {
        return a < b;
    };

    //[=] - means that lambda will use automatic variables by copy; -> int - means that lambda returns integer.
    auto lambda2 = [=](auto &&num) -> int {
        return num * num;
    };

    auto lambda3 = [&](auto &&num) {
        return num * num * num;
    };

    std::cout << lambda1(4, 6) << std::endl;
    std::cout << lambda2(5) << std::endl;


    return 0;
}
