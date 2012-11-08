#include <stdio.h>

int fib(unsigned n) {
    return n < 2 ? n : fib(n - 1) + fib(n - 2);
}

int main() {
    printf("%d%d\n", fib(10), fib(11));
}
