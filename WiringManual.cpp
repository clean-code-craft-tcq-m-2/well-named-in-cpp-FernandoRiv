#include <iostream>
#include "ColorCoder.h"

void printManual()
{
    int totalColors = TelCoColor::numberOfMajorColors*TelCoColor::numberOfMinorColors;
    for(int i = 1; i <= totalColors; ++i)
    {
        TelCoColorCoder::ColorPair colorPair = \
            TelCoColorCoder::GetColorFromPairNumber(i);
        std::cout << "Pair " << i << " " << colorPair.ToString() << std::endl;
    }
}