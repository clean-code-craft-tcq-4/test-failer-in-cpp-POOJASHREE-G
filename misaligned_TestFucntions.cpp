#include <iostream>
#include <assert.h>
#include "misaligned_TestFunctions.hpp"

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

void testMisAlignment(){
    expectedprintColorMap();
    for(int n = 0; n < 25; n++){
        assert(buffer1[n].str() == buffer2[n].str());
    }
}