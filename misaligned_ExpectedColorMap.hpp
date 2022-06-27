#ifndef MISALIGNED_EXPECTEDCOLORMAP_HPP
#define MISALIGNED_EXPECTEDCOLORMAP_HPP

#include <sstream>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int numberOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);

std::stringstream buffer1[25], buffer2[25];

int GetPairNumberFromColor(MajorColor major, MinorColor minor);

int GetPairNumberFromColor(MajorColor major, MinorColor minor);

void expectedprintColorMap();

#endif