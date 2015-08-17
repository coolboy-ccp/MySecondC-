//
//  SecondCoordinate.cpp
//  MySecondC++
//
//  Created by liqunfei on 15/8/17.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#include "SecondCoordinate.h"
using namespace std;

SecondCoordinate::SecondCoordinate(int x,int y)
{
    m_iX = x;
    m_iY = y;
    cout << "secondCoordinate()" <<":"<< m_iX << m_iY << endl;
}

SecondCoordinate::~SecondCoordinate()
{
    cout << "~sencondCoordinate()" << ":"<< m_iX << m_iY << endl;
}

void SecondCoordinate::setX(int x)
{
    m_iX = x;
}
void SecondCoordinate::setY(int y)
{
    m_iY = y;
}
int  SecondCoordinate::getX()
{
    return m_iX;
}
int  SecondCoordinate::getY()
{
    return m_iY;
}