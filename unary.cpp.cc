#include <iostream>
using namespace std;

class nary {
    int n;

public:
    void unary(int x) {
        n = x;
    }

    void operator++() {
        ++n;
    }

    void display() {
        cout << "Your number before increment: " << n << endl;
    }
};

int main() {
    nary k;

    k.unary(5);
    k++;
    k.display();

    return 0;
}

