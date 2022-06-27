#ifndef MISALIGNED_EXPECTEDCOLORMAP_HPP
#define MISALIGNED_EXPECTEDCOLORMAP_HPP

#include <sstream>

extern enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
extern enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern enum MajorColor;
extern enum MinorColor;

extern const char* majorColor[];
extern const char* minorColor[];

extern int numberOfMinorColors;

extern std::stringstream buffer1[25], buffer2[25];

int GetPairNumberFromColor(MajorColor major, MinorColor minor);

int GetPairNumberFromColor(MajorColor major, MinorColor minor);

void expectedprintColorMap();

#endif