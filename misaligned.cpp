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
int numberOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);

std::stringstream buffer1[25], buffer2[25];

int LargestMajor_Minor_String;

int printColorMap() {
    int i = 0, j = 0, n = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            cout
                    << left << setw(5) << (i * 5 + j)
                    << left << setw(findlargeststring(numberOfMajorColors,majorColor)) << majorColor[i]
                    << left << setw(findlargeststring(numberOfMinorColors,minorColor)) << minorColor[i]
                    << std::endl;
            ++n;
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    expectedprintColorMap();
    assert(result == 25);
    // testPairToNumber(BLACK, ORANGE, 12);
    // testPairToNumber(VIOLET, SLATE, 25);
    // testMisAlignment();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
