#include<iostream>

using namespace std;

class Geeks{
    // Access specifier
    public:
    // Data members
    string geekname;
    // Member Functions()
    void printName() {
        cout << endl;
        cout << "Geekname is : " << geekname << endl;
        cout << endl;
    }
};

int main(){
    Geeks object1;

    object1.geekname = "Arief";

    object1.printName();
    return 0;
}