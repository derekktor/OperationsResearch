#include "include/constants.hpp"
#include "include/gj.hpp"
#include "include/variable.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
    std::cout << "Hello from MAIN\n";

    // OperationsResearch::GJ system;
    // system.print();

    Variable x;
    Variable y;
    Variable z;

    std::cout << x.getVariable() << std::endl;
    std::cout << y.getVariable() << std::endl;
    std::cout << z.getVariable() << std::endl;

    return 0;
}
