#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iterator>
#include <cstring>
using namespace std;
#include "misaligned_ExpectedColorMap.hpp"

void expectedprintColorMap() {
    int i = 0, j = 0, n = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            cout
                    << left << setw(5) << (i * 5 + j)+ 1
                    << left << setw(findlargeststring(numberOfMajorColors,majorColor)) << majorColor[i]
                    << left << setw(findlargeststring(numberOfMinorColors,minorColor)) << minorColor[i]
                    << std::endl;
            ++n;
        }
    }
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * numberOfMinorColors + minor + 1;
}


int findlargeststring(int numberOfMajor_Minor_Colors, const char* major_minorColor[]){
    for(int i = 1;i < numberOfMajor_Minor_Colors; ++i) {
        if(strlen(major_minorColor[0]) < strlen(major_minorColor[i]))
            LargestMajor_Minor_String = strlen(major_minorColor[i]);
    }
    return LargestMajor_Minor_String;
}
