#ifndef MISALIGNED_EXPECTEDCOLORMAP_HPP
#define MISALIGNED_EXPECTEDCOLORMAP_HPP

#include <sstream>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* majorColor[];
extern const char* minorColor[];

extern int numberOfMinorColors , numberOfMajorColors;

extern std::stringstream buffer1[25], buffer2[25];

int GetPairNumberFromColor(MajorColor major, MinorColor minor);

int GetPairNumberFromColor(MajorColor major, MinorColor minor);

void expectedprintColorMap();

int findlargeststring(int numberOfMajor_Minor_Colors, const char* major_minorColor[]);

extern int LargestMajor_Minor_String;

#endif