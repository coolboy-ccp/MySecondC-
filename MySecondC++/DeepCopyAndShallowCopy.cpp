//
//  DeepCopyAndShallowCopy.cpp
//  MySecondC++
//
//  Created by liqunfei on 15/8/17.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#include "DeepCopyAndShallowCopy.h"
#include <iostream>
using namespace std;

DeepCopyAndShallowCopy::DeepCopyAndShallowCopy(int count)
{
    m_iCount = count;
    m_pArr = new int[m_iCount];
    for (int i = 0; i < m_iCount; i++) {
        m_pArr[i] = i;
    }
    cout << "DeepCopyAndShallowCopy" << endl;
}

/*
//shallowCopy
DeepCopyAndShallowCopy::DeepCopyAndShallowCopy(const DeepCopyAndShallowCopy &arr)
{
    m_pArr = arr.m_pArr;
    m_iCount = arr.m_iCount;
    cout << "DeepCopyAndShallowCopy&" << endl;
}
*/

//deepCopy
DeepCopyAndShallowCopy::DeepCopyAndShallowCopy(const DeepCopyAndShallowCopy &arr)
{
    m_iCount = arr.m_iCount;
    m_pArr = new int[m_iCount];
    for (int i = 0; i<m_iCount; i++) {
        m_pArr[i] = arr.m_pArr[i];
    }
    cout << "DeepCopyAndShallowCopy&" << endl;
}


DeepCopyAndShallowCopy::~DeepCopyAndShallowCopy()
{
    delete []m_pArr;
    m_pArr = NULL;
    cout << "DeepCopyAndShallowCopy~" << endl;
}



void DeepCopyAndShallowCopy::setCount(int count)
{
    m_iCount = count;
}

int  DeepCopyAndShallowCopy::getCount()
{
    return m_iCount;
}

void DeepCopyAndShallowCopy::printAddr()
{
    cout << "m_pArr:" << m_pArr << endl;
}

void DeepCopyAndShallowCopy::printArr()
{
    for (int i = 0; i < m_iCount; i++) {
        cout << m_pArr[i] << "," << endl;
    }
}