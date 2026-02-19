#include "include/constants.hpp"
#include "include/gj.hpp"
#include "include/variable.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
    std::cout << "Hello from MAIN\n";

    OperationsResearch::GJ system;
    system.print();

    return 0;
}
