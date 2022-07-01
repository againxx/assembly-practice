#include <iostream>
#include <iomanip>

extern "C" unsigned int IntegerLogical_(unsigned int a, unsigned int b, unsigned int c, unsigned int d);
extern "C" unsigned int g_Val1 = 0;

int main() {
    unsigned int a, b, c, d, r = 0;
    a = 0x00223344;
    b = 0x00775544;
    c = 0x00555555;
    d = 0x00998877;
    g_Val1 = 7;
    r = IntegerLogical_(a, b, c, d);

    std::cout << "result = 0x" << std::hex << std::setw(8) << r << '\n';
    std::cout << "val = 0x" << std::hex << std::setw(8) << g_Val1 << '\n';
}
