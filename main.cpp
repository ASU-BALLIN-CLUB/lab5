//
//  main.cpp
//  Lab4
//
//  Created by Bryce Holton.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include <iostream>
#include <typeinfo>
#include "common.h"
#include "Print.h"
#include "Scanner.h"
#include "Token.h"
#include "IdentifierBinaryTree.h"

FILE *init_lister(const char *name, char source_file_name[], char dte[]);
void quit_scanner(FILE *src_file, Token *list);
void add_token_to_list(Token *list, Token *new_token);

// Main function
int main(int argc, const char * argv[])
{
    Token *token = NULL;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    FILE *source_file = init_lister(argv[1], source_name, date);
    Print print(source_name, date);
    //puts("1");
    Scanner scanner(source_file, source_name, date, print);
    IdentifierBinaryTree tree;
    //puts("2");
    do
	{
        number_type = false;
        //puts("3");
        token = scanner.getToken();
        //puts("3.5");
        print.printToken(token);
        //puts("4");
        if (token->getCode() == IDENTIFIER)
	    {
            tree.addIdentifier((Identifier*) token, scanner.getLineNumber());
	    }
        else if (token->getCode() != PERIOD && token->getCode() != END_OF_FILE)
	    {
            
	    }
	}
    //puts("5");
    while (token->getCode() != PERIOD && token->getCode() != END_OF_FILE);
    
    print.printTree(tree.getTreeRoot());
    fclose(source_file);
    return 0;
}
// init_lister file, uses char *name, source_file_name[] and the date[].
FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;
    FILE *file;
    
    strcpy(source_file_name, name);
    file = fopen(source_file_name, "r");
    time(&timer);
    strcpy(dte, asctime(localtime(&timer)));
    return file;
}

