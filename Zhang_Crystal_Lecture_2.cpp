//Crystal Zhang 
//Lecture 2 
//09/16/2024

#include <iostream> 
#include <string> 
using namespace std; 

int main() {
    //Creating Variables
    int Num = 5;                 // defining int value
    float FloatNum = 6.88;       // defining float value 
    double DoubleNum = 9.12;     // defining double value
    char Letter = 'C';           // defining char value
    bool Boolean = true;         // defining bool value
    string String = "Hello";     // defining string value 

    //defining car values to compare 
    char Letter1 = 'j';          //defining letter1 value
    char Letter2 = 'p';          //defining letter2 value

    cout << "j < p = " << (Letter1 < Letter2) <<  endl; //comparing letter 1 and letter 2, if true, will show a 1

    //code from slide 37 
    int inches; 
    inches = 100;                                 //inches to be converted
    cout << inches << " inch(es) = ";             
    cout << inches / 12 << " feet (foot) and ";   //converted inches to feet
    cout << inches % 12 << " inch(es)" << endl;   //show remaining unconverted inches


    cout << "Int: " << Num << "\n";              //show value to int
    cout << "Float: " << FloatNum << "\n";       //show value to float
    cout << "Double: " << DoubleNum << "\n";     //show value to double
    cout << "Char: " << Letter << "\n";          //show value to char
    cout << "Bool: " << Boolean << "\n";         //show value to bool
    cout << "String: " << String << "\n";        //show value to string

    //doing and showing math equations 
    cout << "2 + 3.5 = " << 2 + 3.5 << endl;           
    cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 << endl; 
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << endl;


    /* 
    Results
    j < p = 1
    100 inch(es) = 8 feet (foot) and 4 inch(es)
    Int: 5
    Float: 6.88
    Double: 9.12
    Char: C
    Bool: 1
    String: Hello
    2 + 3.5 = 5.5
    6 / 4 + 3.9 = 4.9
    5.4 * 2 - (13.6 + 18 / 2) = -11.8
    */
    return 0; 
}
