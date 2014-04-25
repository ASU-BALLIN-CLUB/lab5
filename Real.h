//
//  Real.h
//  
//
//  Created by James on 4/22/14.
//
//

#ifndef ____Real__
#define ____Real__

#include <iostream>
#include "Literal.h"

class Real : public Literal<float>
{
public:
    Real();
    ~Real();
    virtual void print();
};
#endif /* defined(____Real__) */
