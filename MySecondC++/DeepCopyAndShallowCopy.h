//
//  DeepCopyAndShallowCopy.h
//  MySecondC++
//
//  Created by liqunfei on 15/8/17.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#ifndef __MySecondC____DeepCopyAndShallowCopy__
#define __MySecondC____DeepCopyAndShallowCopy__

#include <stdio.h>

#endif /* defined(__MySecondC____DeepCopyAndShallowCopy__) */



class DeepCopyAndShallowCopy
{
public:
    DeepCopyAndShallowCopy(int count);
    DeepCopyAndShallowCopy(const DeepCopyAndShallowCopy &arr);
    ~DeepCopyAndShallowCopy();
    void setCount(int count);
    int  getCount();
    void printAddr();
    void printArr();
private:
    int m_iCount;
    int *m_pArr;
};
