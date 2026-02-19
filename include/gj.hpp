#ifndef GJ_HPP
#define GJ_HPP

#include "problem.hpp"
#include "variable.hpp"
#include <vector>

namespace OperationsResearch {

class GJ : public Problem {
  private:
    size_t rows, cols;
    std::vector<Variable> vars;
    std::vector<float> a;

  public:
    // CONSTRUCTORS
    GJ();
    GJ(size_t r, size_t c);

    // METHODS
    float &at(size_t i, size_t j);
    void getDimensions();
    void initializeVariables();
    void printVariables();
    void getMatrixElements();
    void performSecondTransformation();
    void print() override;
    void solve() override;
};

} // namespace OperationsResearch
#endif // !GJ
