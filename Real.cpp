//
//  Real.cpp
//  
//
//  Created by James on 4/22/14.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "Real.h"
#include "Literal.h"

// real literal constructor
Real::Real() : Literal<float>(0.0){
    
}
// Deconstructor
Real::~Real(){
    
}
// Print function for real literal.
void Real::print(){
    cout << "    >> <NUMBER>" << this->getLiteral() << " (real)\n";
}


