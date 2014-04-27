//
//  LineNumberList.h
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#ifndef __Lab4__LineNumberList__
#define __Lab4__LineNumberList__

#include <iostream>

// Header file for the LineNumberList (contains a line number integer, then next in the list)
class LineNumberList
{
    int lineNumber;
    LineNumberList *nextLineNumber;
    
public:
    LineNumberList();
    ~LineNumberList();
    void setLineNumber(int num);
    int getLineNumber();
    void setNextLineNumber(LineNumberList *next);
    LineNumberList *getNextLineNumber();
};

#endif /* defined(__Lab4__LineNumberList__) */
