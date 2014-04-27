//
//  LineNumberList.cpp
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "LineNumberList.h"

// Default Constructor for LineNumber List
LineNumberList::LineNumberList()
{
    setLineNumber(0);
    setNextLineNumber(NULL);
}
// Line Number List Deconstructor.
LineNumberList::~LineNumberList()
{
    
}
// Mutator method for the Line Number.
void LineNumberList::setLineNumber(int num)
{
    this->lineNumber = num;
}
// Accessor method for the line number.
int LineNumberList::getLineNumber()
{
    return this->lineNumber;
}
// Mutator method for the next line number.
void LineNumberList::setNextLineNumber(LineNumberList *next)
{
    this->nextLineNumber = next;
}
// Accessor method for the next line number.
LineNumberList *LineNumberList::getNextLineNumber()
{
    return this->nextLineNumber;
}
