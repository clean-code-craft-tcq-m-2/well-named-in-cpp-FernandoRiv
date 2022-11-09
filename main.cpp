#include "Colors.h"
#include "TelCoColor_test.h"
#include "WiringManual.h"

int main() {
    testNumberToPair(4, TelCoColor::WHITE, TelCoColor::BROWN);
    testNumberToPair(5, TelCoColor::WHITE, TelCoColor::SLATE);

    testPairToNumber(TelCoColor::BLACK,  TelCoColor::ORANGE, 12);
    testPairToNumber(TelCoColor::VIOLET, TelCoColor::SLATE, 25);

    printManual();
    return 0;
}
