//
//  Line.h
//  MySecondC++
//
//  Created by liqunfei on 15/8/17.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#ifndef __MySecondC____Line__
#define __MySecondC____Line__

#include <stdio.h>
#include "SecondCoordinate.h"
#endif /* defined(__MySecondC____Line__) */

class Line
{
public:
    Line(int x1,int y1,int x2,int y2);
    ~Line();
    void setA(int x,int y);
    void setB(int x,int y);
    void printInfo();
private:
    SecondCoordinate m_coorA;
    SecondCoordinate m_coorB;
};