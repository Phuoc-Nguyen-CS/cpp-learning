//
//  main.cpp
//  class
//
//  Created by Phuoc Nguyen on 3/18/22.
//

#include <iostream>
#include <string>

class MyClass {
    public:
    int myNum;
    std::string myString;
};

int main() {
    MyClass myObj; // Creates an object of MyClass
    
    myObj.myNum = 0;
    myObj.myString = "Hello World";
    
    std::cout << myObj.myNum << std::endl << myObj.myString << std::endl;
    
    return 0;
}
