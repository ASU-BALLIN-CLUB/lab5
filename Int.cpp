//
//  Int.cpp
//  
//
//  Created by James on 4/22/14.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "Int.h"
#include "Literal.h"

// Int constructor
Int::Int():Literal<int>(0){
    
}
// Int Deconstructor
Int::~Int(){
    
}
// Print function for integer literals.
void Int::print(){
    cout << "    >> <NUMBER>" << this->getLiteral() << " (integer)\n";
}


