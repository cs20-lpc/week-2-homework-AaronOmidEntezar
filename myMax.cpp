#include <iostream>
#include <string>
using namespace std;

// TODO: Write a function template myMax
template <typename T>
T myMax(const T& a, const T& b)
{
    return (a > b) ? a : b;
}

int main() {
    cout << myMax(3, 7) << endl;
    cout << myMax(3.5, 2.1) << endl;
    cout << myMax(string("apple"), string("banana")) << endl;
    return 0;
}
