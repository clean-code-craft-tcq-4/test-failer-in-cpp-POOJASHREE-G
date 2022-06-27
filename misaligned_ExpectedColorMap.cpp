#include <iostream>
#include <iomanip>
#include "misaligned_ExpectedColorMap.hpp"

using namespace std;

void expectedprintColorMap() {
    int i = 0, j = 0, n = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            buffer2[n]
                    << left << setw(10) << (i * 5 + j)+ 1 << "|\t"
                    << left << setw(10) << majorColor[i] << "|\t"
                    << left << setw(10) << minorColor[i]
                    << std::endl;
            ++n;
        }
    }
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * numberOfMinorColors + minor + 1;
}