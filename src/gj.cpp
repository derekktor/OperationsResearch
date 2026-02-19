#include "../include/gj.hpp"
#include "../include/constants.hpp"
#include <iostream>

namespace OperationsResearch {

GJ::GJ() {
    std::cout << "Default constructor called...\n";
    std::cout << "GJ(3, 4)\n";
    // getDimensions();
    rows = 3;
    cols = 4;

    initializeVariables();

    // getMatrixElements();
    a = std::vector<float>(EXAMPLE1.begin(), EXAMPLE1.end());
}

GJ::GJ(size_t r, size_t c) : rows(r), cols(c), a(r * c, 0) {
    std::cout << "Parametrized constructor called...\n";
    std::cout << "GJ(" << rows << ", " << cols << ")\n";

    initializeVariables();
    getMatrixElements();
}

void GJ::getDimensions() {
    std::cout << "rows = ";
    std::cin >> rows;

    std::cout << "cols = ";
    std::cin >> cols;
}

float &GJ::at(size_t i, size_t j) { return a[i * cols + j]; }

/*
 * initialize member: vars
 * vars_0 = "x1"
 * vars_1 = "x2"
 * ...
 */
void GJ::initializeVariables() {
    std::cout << "Initializing variables...\n";
    for (size_t i = 0; i < cols - 1; i++) {
        Variable t;
        vars.push_back(t);
    }
}

/**
 * Get coefficients of the system from the user
 * a_00 = 1
 * a_01 = 3
 * ...
 */
void GJ::getMatrixElements() {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (j == 0) {
                std::cout << "y[" << i << "] = ";
                std::cin >> at(i, j);
            } else {
                std::cout << "a[" << i << "][" << j << "] = ";
                std::cin >> at(i, j);
            }
        }
    }
}

void GJ::performSecondTransformation() {
    // make variables negative
    for (auto v : vars) {
        v.negate();
    }

    // make coefficient the opposite sign
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 1; j < cols; j++) {
            at(i, j) *= -1;
        }
    }
}

void GJ::printVariables() {
    std::cout << "\t";
    for (auto v : vars) {
        std::cout << v.getVariable() << "\t";
    }
    std::cout << std::endl;
}

void GJ::print() {
    printVariables();

    // print matrix elements
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << at(i, j) << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void GJ::solve() {};

} // namespace OperationsResearch
