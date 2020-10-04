#include <cstdio>
#include <cassert>

int main() {
    int y;
    scanf("%d", &y);
    int daysInFebruary;
    if (y == 1918) {
        daysInFebruary = 28 - 13;
    } else if (y < 1918) {
        if (y % 4 == 0) {
            daysInFebruary = 29;
        } else {
            daysInFebruary = 28;
        }
    } else {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            daysInFebruary = 29;
        } else {
            daysInFebruary = 28;
        }
    }
    int day = 256 - 31 - daysInFebruary - 31 - 30 - 31 - 30 - 31 - 31;
    assert(1 <= day && day <= 30);
    printf("%02d.%02d.%04d", day, 9, y);
    return 0;
}
