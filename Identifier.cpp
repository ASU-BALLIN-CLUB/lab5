//
//  Identifier.cpp
//  
//
//  Created by James on 4/18/14.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "Identifier.h"

// Identifier Constructor
Identifier::Identifier(){
    setLeftChild(NULL);
    setRightChild(NULL);
}
// Identifier Deconstructor
Identifier::~Identifier(){
    
}
// Sets the left child of the identifier to specified token.
void Identifier::setLeftChild(Identifier *tok)
{
    this->leftChild = tok;
}
// Gets the left child of the identifier.
Identifier *Identifier::getLeftChild()
{
    return this->leftChild;
}
// Sets the right child of the identifier to specified token.
void Identifier::setRightChild(Identifier *tok)
{
    this->rightChild = tok;
}
// Gets the right child of the identifier.
Identifier *Identifier::getRightChild()
{
    return this->rightChild;
}


 
