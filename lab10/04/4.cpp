#include <iostream>

int main() {
    unsigned a = 8, b = 3, c = 17;
    unsigned *p = &a;
    unsigned *q = &b;

    *p += *q + c;
    c = *q;
    p = &c;
    c += a;
    *p += 10;
    *q = *p;
    q = p;
    *q += 10;

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "c = " << c << '\n';
    std::cout << "p points to c: " << (p == &c) << '\n';
    std::cout << "q points to c: " << (q == &c) << '\n';

    return 0;
}
