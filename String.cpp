//
//  String.cpp
//  
//
//  Created by James on 4/22/14.
//
//

#include "String.h"

String::String():Literal<string>(NULL){
    
}
String::~String(){
    
}
void String::print(){
    cout << "    >> <STRING>" << this->getLiteral() << "\n";
}
