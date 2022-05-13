#include <iostream>  // cout
#include <ostream>
#include <vector>

#include "assignment/knapsack/bit_masking.hpp"
#include "assignment/knapsack/backtracking.hpp"

using namespace assignment;

/**
 * Вывод в поток вывода подмножеств множества.
 *
 * @param subsets - вектор из подмножеств множества
 * @param out - поток вывода
 */
void pretty_print(const std::vector<std::vector<int>>& subsets, std::ostream& out = std::cout) {

  for (const auto& subset : subsets) {

    out << '{';

    for (int index = 0; index < static_cast<int>(subset.size()); index++) {

      out << subset[index];

      if (index != static_cast<int>(subset.size()) - 1) {
        out << ',';
      }
    }

    out << '}' << '\n';
  }
}

int main() {

  KnapsackBitMasking knapsack;

  const int capacity = 6;
  const auto profits = std::vector<int>({2, 3, 1, 4});
  const auto weights = std::vector<int>({3, 4, 6, 5});

  auto indices = knapsack.solve(profits, weights, capacity);

  pretty_print({indices});

  KnapsackBacktracking knapsack_back;

  indices = knapsack_back.solve(profits, weights, capacity);

  pretty_print({indices});

  return 0;
}
