#include <iostream>
using namespace std;

int tips(double v, int t) {
    if (v < 1)
        return t;

    t++;

    v = v - (0.425 * v);

    return tips(v, t);
}

int main() {
    double velocity = 40;
    int steps = 0;

    steps = tips(velocity, steps);

    cout << "Number of steps required: " << steps << endl;

    return 0;
}
