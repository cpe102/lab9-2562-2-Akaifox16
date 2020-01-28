#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    ofstream cheer;
    cheer.open("cheerbookcopy.txt");
    cheer << "-------------------- SOTUS ---------------------\n";    
    ifstream book;
    book.open("cheerbook.txt");

    string textline;
    while(getline(book,textline)){
        cheer << textline << "\n";
    }
    cheer << "-------------------- SOTUS ---------------------\n";
    cheer.close();
}
//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
