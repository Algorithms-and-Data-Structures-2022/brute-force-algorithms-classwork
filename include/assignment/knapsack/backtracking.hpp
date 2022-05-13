#include "assignment/private/knapsack.hpp"

namespace assignment {

  struct KnapsackBacktracking : KnapsackStrategy {

    /**
     *
     * @param profits
     * @param weights
     * @param capacity
     * @return
     */
    [[nodiscard]] std::vector<int> solve(const std::vector<int>& profits, const std::vector<int>& weights,
                                         int capacity) const override;

   private:
    void solve(const Profits& profits, const Weights& weights, int capacity, int index, int mask, int weight,
               int profit, int& best_profit, int& best_profit_mask) const;
  };

}  // namespace assignment