#include <iostream>
#include <string>

Class MyClass {
    public:
    int myNum;
    string myString;
};

int main() {
    MyClass myObj; // Creates an object of MyClass
    
    myObj.myNum = 0;
    myObj.myNum = "Hello World";
    
    std::cout << myObj.myNum << std::endl << myObj.myString << std::endl;
    
    return 0;
}
