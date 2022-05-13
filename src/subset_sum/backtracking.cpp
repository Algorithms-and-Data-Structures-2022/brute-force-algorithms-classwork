#include "assignment/subset_sum/backtracking.hpp"

#include <cassert>  // assert
#include <numeric>  // accumulate

#include "assignment/bits.hpp"  // set_bit, mask2indices

namespace assignment {

  std::vector<std::vector<int>> SubsetSumBacktracking::search(const std::vector<int>& set, int target_sum) const {
    assert(target_sum > 0 && set.size() <= 16);

    const int residual = std::accumulate(set.begin(), set.end(), 0);
    auto indices = std::vector<std::vector<int>>();

    // вызов вспомогательной функции
    search(set, -1, 0, 0, residual, target_sum, indices);

    return indices;
  }

  void SubsetSumBacktracking::search(const std::vector<int>& set, int index, int mask, int sum, int residual,
                                     int target_sum, std::vector<std::vector<int>>& indices) const {

    assert(index >= -1 && mask >= 0 && sum >= 0 && residual >= 0 && target_sum > 0);

    // ...
  }

}  // namespace assignment