//
//  IdentifierBinaryTree.h
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#ifndef __Lab4__IdentifierBinaryTree__
#define __Lab4__IdentifierBinaryTree__

#include <iostream>
#include "Identifier.h"
#include "LineNumberList.h"

using namespace std;

// Header file for the Identifier Binary Tree
class IdentifierBinaryTree
{
private:
    Identifier *treeRoot;
    void depthFirstDeleteTree(Identifier *tok);
    
public:
    IdentifierBinaryTree();
    ~IdentifierBinaryTree();
    void setTreeRoot(Identifier *root);
    Identifier *getTreeRoot();
    bool addIdentifier(Identifier *tok, int lineNum);
};

#endif /* defined(__Lab4__IdentifierBinaryTree__) */
