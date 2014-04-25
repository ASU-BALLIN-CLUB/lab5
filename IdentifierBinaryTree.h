//
//  IdentifierBinaryTree.h
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//

#ifndef __Lab4__IdentifierBinaryTree__
#define __Lab4__IdentifierBinaryTree__

#include <iostream>
#include "Token.h"
#include "Identifier.h"

class IdentifierBinaryTree
{
    Identifier *treeRoot;
    
public:
    IdentifierBinaryTree();
    ~IdentifierBinaryTree();
    void setTreeRoot(Identifier *root);
    Identifier *getTreeRoot();
    bool addIdentifier(Identifier *tok, int lineNum);
    void depthFirstDeleteTree(Identifier *tok);
    
};

#endif /* defined(__Lab4__IdentifierBinaryTree__) */
