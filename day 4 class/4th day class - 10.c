#include <stdio.h>

struct xx {
    int x;
    struct yy {
        char s;
        struct xx *p;
    } y;
    struct yy *q;
};

int main() {
    // Create a new instance of the xx structure
    struct xx my_struct = {
        .x = 10,
        .y = {
            .s = 'A',
            .p = NULL
        },
        .q = NULL
    };

    // Print the values of the structure's member variables
    printf("x = %d\n", my_struct.x);
    printf("y.s = %c\n", my_struct.y.s);
    printf("y.p = %p\n", (void *)my_struct.y.p);
    printf("q = %p\n", (void *)my_struct.q);

    return 0;
}
