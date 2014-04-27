//
//  String.cpp
//  
//
//  Created by James on 4/22/14.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "String.h"

// String Constructor
String::String():Literal<string>(NULL){
    
}
// String literal deconstructor
String::~String(){
    
}
// String literal print function.
void String::print(){
    cout << "    >> <STRING>" << this->getLiteral() << "\n";
}


