//Crystal Zhang 
//Lecture 2 
//09/16/2024

#include <iostream> () 
#include <string> 
using namespace std; 

int main() {
//Creating Variables
    int Num = 5; 
    float FloatNum = 5.99;
    double DoubleNum = 9.98;
    char Letter = 'C';
    bool Boolean = true; 
    string String = "Hello";

    int inches; 
    inches = 100;

    cout << inches << " inche(es) =";
    cout << inches / 12 << " feet (foot) and";
    cout << inches % 12 << "inch(es)" << endl; 

    cout << "int: " << Num << "\n"; 
    cout << "float: " << FloatNum << "\n"; 
    cout << "double: " << DoubleNum << "\n"; 
    cout << "char: " << Letter << "\n";
    cout << "bool: " << Boolean << "\n"; 
    cout << "string: " << String << "\n"; 

    cout << "2 + 3.5 = " << 2 + 3.5 << endl; 
    cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 << endl; 
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << endl;

return 0; 
}
