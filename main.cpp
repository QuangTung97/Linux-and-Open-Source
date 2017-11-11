#include <iostream>
#include <string>
#include <limits>
#include <cmath>

int main(int argc, char **argv) {
    if (argc < 2) 
        return 1;
    try {
        double x = std::stod(argv[1]);
    } catch (std::invalid_argument& e) {
        return 1;
    } catch (std::out_of_range& e) {
        return 1;
    }
    // std::cout.precision(std::numeric_limits<double>::max_digits10);
    // std::cout << x << std::endl;
    return 0;
}
