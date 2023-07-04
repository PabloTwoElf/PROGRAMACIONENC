/*MULTIPLOS DEL 1 AL 100 PRECTICA 8*/
#include <stdio.h>

int main() {
    for (int i = 1; i < 100; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
