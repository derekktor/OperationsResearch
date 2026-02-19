#include "../include/variable.hpp"
#include <iostream>
#include <string>

int Variable::counter = 1;

Variable::Variable() : x('x'), idx(counter++) {
    std::cout << "Variable " << getVariable() << " created...\n";
}

std::string Variable::getVariable() { return x + std::to_string(idx); }

void Variable::negate() { idx *= -1; }
