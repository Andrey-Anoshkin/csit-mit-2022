#include <iostream>

int fib(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; ++i) {
        int t = a;
        a = b;
        b = b + t;
    }

    return a;
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(10) << "\n";
    return 0;
}
