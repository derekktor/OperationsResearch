#ifndef VARIABLE_HPP
#define VARIABLE_HPP

#include <string>

class Variable {
  private:
    char x;
    int idx;
    static int counter;
  public:
    Variable();
    std::string getVariable();
    void negate();
};


#endif // !VARIABLE_HPP
