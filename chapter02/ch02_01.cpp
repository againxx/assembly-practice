#include <iostream>

extern "C" int IntergerAddSub_(int a, int b, int c, int d);

static void PrintResult(const char* msg, int a, int b, int c, int d, int result) {
    std::cout << msg << '\n';
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "c = " << c << '\n';
    std::cout << "d = " << d << '\n';
    std::cout << "result = " << result << '\n';
}

int main() {
    int a, b, c, d, result;
    a = 10; b = 20; c = 30; d = 18;
    result = IntergerAddSub_(a, b, c, d);
    PrintResult("Test 1", a, b, c, d, result);
    return 0;
}
