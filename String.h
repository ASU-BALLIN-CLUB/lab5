//
//  String.h
//  
//
//  Created by James on 4/22/14.
//
//

#ifndef ____String__
#define ____String__

#include <iostream>
#include <string>
#include "Literal.h"

using namespace std;

class String : public Literal<string>
{
public:
    String();
    ~String();
    virtual void print();
};
#endif /* defined(____String__) */
