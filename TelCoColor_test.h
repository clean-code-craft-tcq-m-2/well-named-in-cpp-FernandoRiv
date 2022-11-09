#ifndef _TELCO_COLOR_TEST_H_
#define _TELCO_COLOR_TEST_H_

#include "Colors.h"

void testNumberToPair(int pairNumber,
    TelCoColor::MajorColor expectedMajor,
    TelCoColor::MinorColor expectedMinor);

void testPairToNumber(
    TelCoColor::MajorColor major,
    TelCoColor::MinorColor minor,
    int expectedPairNumber);

#endif //_TELCO_COLOR_TEST_H_