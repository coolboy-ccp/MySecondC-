//
//  SecondCoordinate.h
//  MySecondC++
//
//  Created by liqunfei on 15/8/17.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#ifndef __MySecondC____SecondCoordinate__
#define __MySecondC____SecondCoordinate__

#include <stdio.h>
#include <iostream>
#endif /* defined(__MySecondC____SecondCoordinate__) */

class SecondCoordinate
{
public:
    SecondCoordinate(int x,  int y);
    ~SecondCoordinate();
    void setX(int x);
    void setY(int y);
    int  getX();
    int  getY();
private:
    int m_iX;
    int m_iY;
};