#include <iostream>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    /* Here I have used the same logic as in printColorMap() function to
       return pair number from color inorder to test the logic*/
    return major * 5 + minor;
}

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}