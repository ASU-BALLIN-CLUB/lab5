//
//  Literal.h
//  
//
//  Created by James on 4/22/14.
//
//

#ifndef ____Literal__
#define ____Literal__

#include <iostream>
#include "Token.h"

template <typename T>
class Literal : public Token
{
private:
    T literal;
    
public:
    Literal(T lit){setLiteral(lit);}
    ~Literal(){}
    void setLiteral(T lit){
        literal = lit;
    }
    T getLiteral(){
        return literal;
    }
    virtual void print()=0;
};
#endif /* defined(____Literal__) */
