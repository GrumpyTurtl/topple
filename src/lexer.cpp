#include "lexer.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum TokenType
{
    Number,
    Identifier,
    Equals,
    OpenParen,
    CloseParen,
    BinaryOperator,
    Let,
};

struct Token
{
    string value;
    TokenType type;
};

int tokenise(string Raw){
    Vector<Token> token;
    string line;

    
    while(getline(Raw, line)){
        
    }
}
