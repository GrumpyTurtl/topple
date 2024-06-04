#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string Path;

    cout << "Enter File Path: ";
    getline(cin, Path);

    string line;
    ifstream file(Path.c_str());

    if(!file){
        cout << "Cant find file";
    }

    string Source;

    while(getline (file, line)){
       Source.append(line + "\n");
    }

    tokenise(Source);

    file.close();
    return 0;
}