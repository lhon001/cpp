#include <iostream>
#include "Cube.hpp"

int main() {
    Cube cube_1;
    cube_1.setLength(3.48);
    double volume = cube_1.getVolume();

    std::cout << "Volume: " << volume << std::endl;
    return 0;
}