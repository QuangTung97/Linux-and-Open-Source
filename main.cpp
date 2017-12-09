#include <iostream>
#include <string>
#include <limits>
#include <cmath>

int main(int argc, char **argv) {
    double x = 0;
    if (argc < 2) 
        return 1;
    try {
        x = std::stod(argv[1]);
    } catch (std::invalid_argument& e) {
        return 1;
    } catch (std::out_of_range& e) {
        return 1;
    }
    // std::cout.precision(std::numeric_limits<double>::max_digits10);
    const double epsilon = 1.0e-13;
    if (std::abs(x) < epsilon)
        x = 0;
    std::cout.precision(8);
    std::cout << x << std::endl;
    return 0;
}
