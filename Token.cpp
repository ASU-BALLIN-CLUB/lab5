//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "Token.h"

// Constant characters of different symbols.
const char* const SYMBOL_STRINGS[] =
{
    "<no token>", "<IDENTIFIER>", "<NUMBER>", "<STRING>",
    "^","*","(",")","-","+","=","[","]",":",";",
    "<",">",",",".","/",":=","<=",">=","<>","..",
    "<END OF FILE>", "<ERROR>",
    "AND","ARRAY","BEGIN","CASE","CONST","DIV","DO","DOWNTO",
    "ELSE","END","FILE","FOR","FUNCTION","GOTO","IF","IN",
    "LABEL","MOD","NIL","NOT","OF","OR","PACKED","PROCEDURE",
    "PROGRAM","RECORD","REPEAT","SET","THEN","TO","TYPE","UNTIL",
    "VAR","WHILE","WITH",
};

// Default token constructor.
Token::Token()
{
    //What code do I need here to initialize everything.
    setLeftChild(NULL);
    setRightChild(NULL);
    list = NULL;
}
// Token deconstructor to free space.
Token::~Token()
{
    //What code do I need here to free memory
    LineNumberList *root = getLineNumberList();
    LineNumberList *tmp = root;
    
    while (root != NULL)
    {
        tmp = tmp->getNextLineNumber();
        delete root;
        root = tmp;
    }
    if (this->getType() == STRING_LIT)
    {
        free(this->literal.stringLiteral);
    }
}
// Sets the code in the input token.
void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}
// Accessor method to retrieve code.
TokenCode Token::getCode()
{
    return this->code;
}
// Mutator method to access the type.
void Token::setType(LiteralType newType)
{
    this->type = newType;
}
// Accessor method to retrieve type.
LiteralType Token::getType()
{
    return this->type;
}
// Mutator method to set the Int Literal.
void Token::setLiteral(int newInteger)
{
    this->literal.integer = newInteger;
}
// Accessor method to retrieve the Int Literal.
int Token::getIntLiteral()
{
    return this->literal.integer;
}
// Mutator method to set the real literal.
void Token::setLiteral(float newReal)
{
    this->literal.real = newReal;
}
// Accessor method to retrieve the Real literal.
float Token::getRealLiteral()
{
    return this->literal.real;
}
// Mutator method to set the string literal.
void Token::setLiteral(string newString)
{
    this->literal.stringLiteral = (char*)malloc(sizeof(char) * newString.length() + 1);
    strcpy(this->literal.stringLiteral, newString.c_str());
}
// Accessor method to retrieve the string literal.
string Token::getStringLiteral()
{
    return string(this->literal.stringLiteral);
}
// Mutator method to set the Token string.
void Token::setTokenString(string s)
{
    this->tokenString = s;
}
// Accessor method to retrieve the token string.
string Token::getTokenString()
{
    return this->tokenString;
}
// Mutator method to set the left child of the token.
void Token::setLeftChild(Token *tok)
{
    this->leftChild = tok;
}
// Accessor method to retrieve the left child of the token.
Token *Token::getLeftChild()
{
    return this->leftChild;
}
// Mutator method to set the right child of the token
void Token::setRightChild(Token *tok)
{
    this->rightChild = tok;
}
// Accessor method to retrieve the right child of the token.
Token *Token::getRightChild()
{
    return this->rightChild;
}
// Method to add the *list item to the Line Number List.
void Token::addToLineNumberList(LineNumberList *listItem)
{
    LineNumberList *tmp = getLineNumberList();
    
    if (tmp == NULL)
    {
        list = listItem;
    }
    else
    {
        while (tmp->getNextLineNumber() != NULL)
        {
            tmp = tmp->getNextLineNumber();
        }
        tmp->setNextLineNumber(listItem);
    }
}
// Gets the line number list.
LineNumberList *Token::getLineNumberList()
{
    return this->list;
}
// Basic Print function
void Token::print()
{
	const char *symbol_string = SYMBOL_STRINGS[this->getCode()];
	cout << "    >> " << symbol_string << "\t\t" << this->getTokenString() << "\n";
}
