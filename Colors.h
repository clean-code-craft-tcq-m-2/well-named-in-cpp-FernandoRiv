#ifndef _COLORS_H_
#define _COLORS_H_

namespace TelCoColor{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    static const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    static const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };

    static int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    static int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}

#endif //_COLORS_H_