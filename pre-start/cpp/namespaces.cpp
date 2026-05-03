#include <iostream>

namespace Trigonometry {
    int sum(int a, int b) {
        return a + b;
    }
}

namespace Arithmetic {
    int sum(int a, int b) {
        return a - b;
    }
}

int main() {
    using namespace std;
    
    cout << "Trigonometric sum: " << Trigonometry::sum(5, 6) << "\n";
    cout << "Arithmetic sum: " << Arithmetic::sum(5, 6) << "\n";

    return 0;
}
