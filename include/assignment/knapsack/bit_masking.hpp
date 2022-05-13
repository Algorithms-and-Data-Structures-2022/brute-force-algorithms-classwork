#include "assignment/private/knapsack.hpp"

namespace assignment {

  struct KnapsackBitMasking : KnapsackStrategy {

    /**
     * Решение задачи рюкзака методом полного перебора (итеративно).
     *
     * Рассматриваются все возможные решения.
     * Среди возможных решений ищется решение с максимальной пользой (profit).
     *
     * @param profits - "польза" элементов
     * @param weights - "веса" элементов
     * @param capacity - максимальная вместимость рюкзака (по весу)
     * @return список индексов
     */
    [[nodiscard]] std::vector<int> solve(const Profits& profits, const Weights& weights, int capacity) const override;
  };

}  // namespace assignment