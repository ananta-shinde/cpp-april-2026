#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    string line;
    // creating a file
    ifstream outFile("data.txt");
    if(!outFile.is_open()){
        cout <<"file does not exist"<<endl;
        return -1;
    }

    // outFile << "this is my first line\n";
    // outFile << "this is my second line";

    getline(outFile,line);
    cout << line;
    outFile.close();
    return 0;
}
