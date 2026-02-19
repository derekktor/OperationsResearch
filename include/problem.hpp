#ifndef PROBLEM_HPP
#define PROBLEM_HPP

namespace OperationsResearch {
class Problem {
  public:
    virtual void print() = 0;
    virtual void solve() = 0;
    virtual ~Problem() = default;
};
} // namespace OperationsResearch

#endif // !PROBLEM_H
