#include <stdio.h>
#include <assert.h>

int getPairNumber(int major, int minor) {
    return major * 5 + minor + 1;
}

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", getPairNumber(i, j), majorColor[i], minorColor[j]);
        }
    }
    return i * j;
}

int testPrintColorMap() {
    printf("\nPrint color map test\n");
    int result = printColorMap();
    
    assert(getPairNumber(0, 0) == 1);  // First pair should be 1
    assert(getPairNumber(0, 1) == 2);  // Second pair
    assert(getPairNumber(1, 0) == 6);  // Start of second major color
    assert(getPairNumber(2, 0) == 11); // Start of Black
    assert(getPairNumber(1, 4) == 10); // Last Red pair
    assert(getPairNumber(4, 4) == 25); // Last Violet pair
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
