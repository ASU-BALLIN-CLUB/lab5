//
//  Identifier.h
//  
//
//  Created by James on 4/18/14.
//
//

#ifndef ____Identifier__
#define ____Identifier__

#include <iostream>
#include "Token.h"

class Identifier : public Token
{
private:
    Identifier *leftChild;
    Identifier *rightChild;
    
public:
    Identifier();
    ~Identifier();
    void setLeftChild(Identifier *tok);
    Identifier *getLeftChild();
    void setRightChild(Identifier *tok);
    Identifier *getRightChild();
};

#endif /* defined(____Identifier__) */
 

