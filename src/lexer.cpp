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
};

struct Token
{
    string value;
    TokenType type;
};

void tokenised(fstream Raw){
    cout << Raw;
    string word;

    
    while(Raw >> word){
        cout << word << endl;
    }

}

int main(){
    //need to parse the file in, 
    
    tokenised();
}