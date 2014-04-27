//
//  Print.h
//  Lab4
//
//  Created by Bryce Holton.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#ifndef __Lab4__Print__
#define __Lab4__Print__

#include <iostream>
#include "common.h"
#include "Token.h"
#include "Identifier.h"
#include "Int.h"
#include "Real.h"
#include "String.h"

using namespace std;

class LineNumberList;

// Header File for the Print file.
class Print {
private:
    string sourceFileName;
    string currentDate;
    int pageNumber;
    int lineCount;
    
    void printPageHeader();
    
public:
    Print(char source_name[], char date[]);
    ~Print();
    
    void printLine(char line[]);
    void printToken(Token *token);
    int getLineCount();
    void printTree(Identifier *identifier);
    void printTreeRecursive(Identifier *identifier);
};

#endif /* defined(__Lab4__Print__) */
