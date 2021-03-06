//
//  Print.cpp
//  Lab4
//
//  Created by Bryce Holton.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#include "Print.h"

// Constructor for print method, uses given source name and date, sets page number to 0 and line count to max.
Print::Print(char source_name[], char date[])
{
    this->sourceFileName = string(source_name);
    this->currentDate = string(date);
    this->pageNumber = 0;
    this->lineCount = MAX_LINES_PER_PAGE;
}
// Print Deconstructor.
Print::~Print()
{
    
}
// Method to print the current line.
void Print::printLine(char line[])
{
    char save_ch = '\0';
    char *save_chp = NULL;
    
    // If statements to check length of line/line count.
    if (++lineCount > MAX_LINES_PER_PAGE)
	{
        printPageHeader();
        lineCount = 1;
	}
    if (strlen(line) > MAX_PRINT_LINE_LENGTH)
	{
        save_chp = &line[MAX_PRINT_LINE_LENGTH];
	}
    if (save_chp)
	{
        save_ch = *save_chp;
        *save_chp = '\0';
	}
    printf("%s", line);
    if (save_chp)
	{
        *save_chp = save_ch;
	}
}
// Prints the header of the page.
void Print::printPageHeader()
{
    putchar(FORM_FEED_CHAR);
    printf("Page    %d  %s  %s\n\n", ++pageNumber, sourceFileName.c_str(), currentDate.c_str());
}
// Prints out the current token.
void Print::printToken(Token *token)
{
    //bool numberType;
	//puts("q");
    //char line[MAX_SOURCE_LINE_LENGTH + 32];
    //puts("r");
    //const char *symbol_string = SYMBOL_STRINGS[token->getCode()];
    //token = new Integer();
    //Real *newReal = new Real();
    //String *newString = new String();
	//puts("s");
    
    
    // checks different cases for what token to print.
    switch (token->getCode()) {
        { case NUMBER:
            if (number_type) {
                Int* token = new Int();
                token->print();
            } else {
                Real* token = new Real();
                token->print();
            }
            break;
        }
        {
            case STRING:
            String* token = new String();
            token->print();
            break;
            
        }
        {
            default:
            //sprintf(line, "    >> %-16s %-s\n", symbol_string, token->getTokenString().c_str());
            break;
        }
    }
    
    token->print();
}

// Gets the line count
int Print::getLineCount()
{
    return this->lineCount;
}
// Recursive function to print the tree out
void Print::printTreeRecursive(Identifier *identifier)
{
    char line[MAX_SOURCE_LINE_LENGTH + 32];
    
    // Checks if left child contains anything, then moves to that child.
    if (identifier->getLeftChild() != NULL)
    {
        printTreeRecursive(identifier->getLeftChild());
    }
    sprintf(line, " %-16s %-s", identifier->getTokenString().c_str(), " ");
    printLine(line);
    
    // Recursively parses through the function.
    LineNumberList *list = identifier->getLineNumberList();
    while (list != NULL)
    {
        cout << list->getLineNumber() << "\t";
        list = list->getNextLineNumber();
    }
    cout << "\n";
    if (identifier->getRightChild() != NULL)
    {
        printTreeRecursive(identifier->getRightChild());
    }
}
// Prints out the current point in the tree
void Print::printTree(Identifier *identifier)
{
    cout << "\n Cross Reference Information\n";
    cout << " Identifier \t\tLine Numbers\n";
    cout << " -----------\t\t------------\n";
    printTreeRecursive(identifier);
}
