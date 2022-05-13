#include "assignment/knapsack/bit_masking.hpp"

#include <cassert>  // assert
#include <numeric>  // accumulate

#include "assignment/bits.hpp"  // mask2elems, mask2indices

namespace assignment {

  std::vector<int> KnapsackBitMasking::solve(const Profits& profits, const Weights& weights, int capacity) const {
    assert(profits.size() == weights.size() && capacity > 0);

    const auto num_elems = static_cast<int>(profits.size());  // N
    const int num_subsets = 1 << num_elems;                   // 2^N

    int best_profit = 0;
    int best_profit_mask = 0;

    // ...

    return {};
  }

}  // namespace assignment