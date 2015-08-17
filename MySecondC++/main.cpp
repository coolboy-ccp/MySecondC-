//
//  main.cpp
//  MySecondC++
//
//  Created by liqunfei on 15/8/14.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "Coordinate.h"
#include "Line.h"
#include "DeepCopyAndShallowCopy.h"
using namespace std;



int main(int argc, const char * argv[]) {
//    Coordinate coord[3];
//    coord[0].m_iX = 3;
//    coord[0].m_iY = 6;
//    coord[2].m_iX = 9;
//    Coordinate *p = new Coordinate[3];
//    p->m_iX = 7;
//    p[0].m_iY = 9;
//    p++;
//    p->m_iX = 11;
//    p[0].m_iY = 13;
//    p++;
//    p->m_iX = 15;
//    p[0].m_iY = 17;
//    
//    for (int i = 0; i<3; i++) {
//        cout <<"coord_x "<<coord[i].m_iX<<endl;
//        cout <<"coord_y "<<coord[i].m_iY<<endl;
//    }
//    
//    for (int j = 0; j<3; j++) {
//        cout << "p_x = " << p->m_iX << endl;
//        cout << "p_y = " << p->m_iY << endl;
//        p--;
//    }
//    
//    p++;
//    delete []p;
//    p = NULL;
    
//    Line *q = new Line(1,2,3,4);
////    q->setA(10, 15);
////    q->setB(20, 25);
//    q->printInfo();
//    delete q;
//    q = NULL;
    DeepCopyAndShallowCopy deep1(5);
    deep1.setCount(5);
    DeepCopyAndShallowCopy deep2 = deep1;
    deep1.printArr();
    deep2.printArr();
    deep1.printAddr();
    deep2.printAddr();
//    cout << "deep2:" << deep2.getCount() << endl;
    //system("pause");
    return 0;
}

