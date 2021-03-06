//Hlavickovy subor pre scanner.c

#ifndef scanner_h
#define scanner_h

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
typedef enum {
    START,
    ID,
    CL,
    LBRACKET,
    RBRACKET,
    PLUS,
    MINUS,
    COMMA,
    DOT,
    LESS,
    GREATER,
    TIMES,
    EQUALS,
    DIV,
    SEMICOLON,
    HASH,
    BLOCK,
    NECO,
    QUOTE,
    EOL,
    EXCL,
    QUERY,
    ONE,
    ERROR,
    Q1,
    Q2,
    Q3,
    Q4,
    Q5,
    RL,
    DOUBLE,
    EXP,
    DL,
    DL2,
    ID2,
    GE,
    LE,
    EXE,
    E_OF,
    EE
} automat_type;
//vsechny stavy automatu, snad :D

char *keywords[] = {"def", "do", "else", "end", "if", "nil", "then", "while" };

typedef struct
{
    char *string_value;
    automat_type type;
    int size_alloc;
    int integer; // pre dlzku
    double decimal;
}token_t;

int get_token(token_t* loaded_token);

#endif