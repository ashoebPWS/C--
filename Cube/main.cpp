#include <iostream>
#include "Cube.h"
using namespace std;

int main() {
    Cube c= Cube(10);
    double volume = c.getVolume();
    cout << "Volume: " << volume << std::endl;

    return 0;
}