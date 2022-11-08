#include <iostream>
#include <assert.h>
#include "Colors.h"
#include "ColorCoder.h"

void testNumberToPair(int pairNumber,
    TelCoColor::MajorColor expectedMajor,
    TelCoColor::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColor::MajorColor major,
    TelCoColor::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, TelCoColor::WHITE, TelCoColor::BROWN);
    testNumberToPair(5, TelCoColor::WHITE, TelCoColor::SLATE);

    testPairToNumber(TelCoColor::BLACK,  TelCoColor::ORANGE, 12);
    testPairToNumber(TelCoColor::VIOLET, TelCoColor::SLATE, 25);

    return 0;
}
