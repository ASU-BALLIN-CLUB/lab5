//
//  Scanner.h
//  Lab4
//
//  Created by Bryce Holton.
//
//  Lab Partners: Sean Slamka, Aydin Balci, James (Shangxin) Wang

#ifndef Lab4_Scanner_h
#define Lab4_Scanner_h

#include "common.h"
#include "Print.h"
#include "Identifier.h"

#define CHAR_TABLE_SIZE 256

typedef enum
{
    LETTER, DIGIT, QUOTE, SPECIAL, EOF_CODE,
}
CharCode;

// header file for the scanner class.
class Scanner
{
private:
    /*********************
     Private Variables for Scanner
     Must be initialized in the constructor.
     *********************/
    Print print;
    FILE *src_file;
    char src_name[MAX_FILE_NAME_LENGTH];
    char todays_date[DATE_STRING_LENGTH];
    CharCode char_table[CHAR_TABLE_SIZE];  // The character table
    char source_line[MAX_SOURCE_LINE_LENGTH];
    char *line_ptr;
    int line_number;
    Token *new_token;
    
    bool getSourceLine(char source_buffer[]);
    char getChar(char source_buffer[]);
    void skipBlanks(char source_buffer[]);
    void skipComment(char source_buffer[]);
    void getWord(char *str, char *token_ptr);
    void getNumber(char *str, char *token_ptr);
    void getString(char *str, char *token_ptr);
    void getSpecial(char *str, char *token_ptr);
    void downshiftWord(char word[]);
    bool isReservedWord(char *str);
    
public:
    Scanner(FILE *source_file, char source_name[], char date[], Print printer);
    ~Scanner();
    Token* getToken();
    int getLineNumber();
    
};

#endif
