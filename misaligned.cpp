#include <iostream>
#include <assert.h>
#include <sstream>
#include <string>
#include <iomanip>
#include "misaligned_TestFunctions.hpp"
using namespace std;

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int numberOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);

std::stringstream buffer1[25], buffer2[25];

int printColorMap() {
    int i = 0, j = 0, n = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            buffer1[n] << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            ++n;
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    testMisAlignment();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
