#include <iostream>
#include <assert.h>
#include <sstream>
#include <string>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

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

void expectedprintColorMap() {
    int i = 0, j = 0, n = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            buffer2[n] << (i * 5 + j)+ 1  << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            ++n;
        }
    }
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    /* Here I have used the same logic as in printColorMap() function to
       return pair number from color inorder to test the logic*/
    return major * 5 + minor;
}

int expectedPairNumber(MajorColor major, MinorColor minor) {
    return major * numberOfMinorColors + minor + 1;
}

void testPairToNumber(MajorColor major, MinorColor minor) {
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber(major, minor));
}

int main() {
    int result = printColorMap();
    std::cout << "fdffd" << buffer1[0].str() << std::endl;
    std::cout << "dummy" << buffer2[0].str() << std::endl;
    assert(result == 25);

    //assert(buffer1[0].str() == buffer2[0].str());
    //testPairToNumber(BLACK, ORANGE);
    //testPairToNumber(VIOLET, SLATE);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
