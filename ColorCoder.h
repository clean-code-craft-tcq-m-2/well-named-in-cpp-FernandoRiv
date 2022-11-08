#ifndef _COLOR_CODER_H_
#define _COLOR_CODER_H_

#include "Colors.h"

namespace TelCoColorCoder
{
    class ColorPair {
        private:
            TelCoColor::MajorColor majorColor;
            TelCoColor::MinorColor minorColor;
        public:
            ColorPair(TelCoColor::MajorColor major, TelCoColor::MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            TelCoColor::MajorColor getMajor() {
                return majorColor;
            }
            TelCoColor::MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString() {
                std::string colorPairStr = TelCoColor::MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += TelCoColor::MinorColorNames[minorColor];
                return colorPairStr;
            }
    };

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColor::MajorColor majorColor = 
            (TelCoColor::MajorColor)(zeroBasedPairNumber / TelCoColor::numberOfMinorColors);
        TelCoColor::MinorColor minorColor =
            (TelCoColor::MinorColor)(zeroBasedPairNumber % TelCoColor::numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(TelCoColor::MajorColor major, TelCoColor::MinorColor minor) {
        return major * TelCoColor::numberOfMinorColors + minor + 1;
    }
}

#endif //_COLOR_CODER_H_