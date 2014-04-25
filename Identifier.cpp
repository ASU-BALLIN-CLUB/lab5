//
//  Identifier.cpp
//  
//
//  Created by James on 4/18/14.
//
//

#include "Identifier.h"

Identifier::Identifier(){
    setLeftChild(NULL);
    setRightChild(NULL);
}
Identifier::~Identifier(){
    
}
void Identifier::setLeftChild(Identifier *tok)
{
    this->leftChild = tok;
}
Identifier *Identifier::getLeftChild()
{
    return this->leftChild;
}
void Identifier::setRightChild(Identifier *tok)
{
    this->rightChild = tok;
}
Identifier *Identifier::getRightChild()
{
    return this->rightChild;
}
