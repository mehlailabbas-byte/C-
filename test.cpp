
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int a = 20, b = 0;
        if (b == 0)
            throw runtime_error("Cannot divide by zero!");
        cout << a / b;
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}



