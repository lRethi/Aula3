#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(65001); //permite que acentos e outros caractéres especiais sejam usados no cout
    cout << "Hello World!" << endl;
}