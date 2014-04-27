//
//  LineNumberList.cpp
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "LineNumberList.h"

// LineNumberList Constructor
LineNumberList::LineNumberList()
{
    setLineNumber(0);
    setNextLineNumber(NULL);
}
// LineNumberList Deconstructor
LineNumberList::~LineNumberList()
{
    
}
// Sets the line number to specified input.
void LineNumberList::setLineNumber(int num)
{
    this->lineNumber = num;
}
// LineNumber Accessor method
int LineNumberList::getLineNumber()
{
    return this->lineNumber;
}
// NextLineNumber mutator method
void LineNumberList::setNextLineNumber(LineNumberList *next)
{
    this->nextLineNumber = next;
}
// NextLineNumber Accessor method
LineNumberList *LineNumberList::getNextLineNumber()
{ 
    return this->nextLineNumber;
}

