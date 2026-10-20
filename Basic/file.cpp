#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //Reading a file
    ofstream File("text.txt");
    File << "/n Hi";
    File.close();

    ofstream fout("text.txt", ios::app);
    fout << "New text appended to the file.\n";
    fout.close();

    string data;
    ifstream Read("text.txt");
    while(getline(Read , data)){
        cout << data;
    }
    Read.close();
}

