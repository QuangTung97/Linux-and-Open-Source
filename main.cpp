#include <iostream>
#include <string>
#include <limits>
#include <cmath>

int main(int argc, char **argv) {
    if (argc < 2) 
        return 1;
    double x = std::stod(argv[1]);
    std::cout.precision(std::numeric_limits<double>::max_digits10);
    std::cout << std::tan(x) << std::endl;
    return 0;
}
