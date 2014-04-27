//
//  Int.h
//  
//
//  Created by James on 4/22/14.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#ifndef ____Int__
#define ____Int__

#include <iostream>
#include "Literal.h"

using namespace std;

// Header file for int function
class Int : public Literal<int>
{
public:
    Int();
    ~Int();
    virtual void print();
};

#endif /* defined(____Int__) */

