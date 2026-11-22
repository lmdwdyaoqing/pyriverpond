#include <string>
#include <vector>

void count_zeros() {
    int n = 102030;
    int zeros = 0;
    while (n > 0) { if (n % 10 == 0) zeros += 1; n /= 10; }
    (void)zeros;
}

void divisor_count() {
    int n = 36;
    int count = 0;
    for (int d = 1; d <= n; ++d) {
        if (n % d == 0) count += 1;
    }
    (void)count;
}

void sum_range() {
    int acc = 0;
    for (int i = 10; i <= 20; ++i) acc += i;
    (void)acc;
}

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

extern "C" int lunar_orbit();
extern "C" void serene_boulder();
extern "C" void vivid_lantern();
extern "C" void eager_boulder();

int main() {
    count_zeros();
    divisor_count();
    sum_range();
    square_value();
    serene_boulder();
    vivid_lantern();
    eager_boulder();
    return lunar_orbit();
}
