#include "lexer.hpp"
#include <iostream>
#include <string>

using namespace std;

class Token {
    public:
        string Type;
        string stringValue;
        int IntValue;
        float floatValue;

}

int tokenise(string Raw){
    string line;
    while(getline(Raw, line)){
        
    }
}