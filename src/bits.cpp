#include "assignment/bits.hpp"

#include <cassert>  // assert

namespace assignment {

  bool is_bit_set(int mask, int pos) {
    assert(mask >= 0 && pos >= 0 && pos < 30);  // pos < макс. кол-ва бит в маске
    return false;
  }

  int set_bit(int mask, int pos) {
    assert(pos < 30);
    return 0;
  }

  std::vector<int> mask2indices(const std::vector<int>& elems, int mask) {
    assert(mask >= 0);
    return {};
  }

  std::vector<int> mask2elems(const std::vector<int>& elems, int mask) {
    assert(mask >= 0);
    return {};
  }

}  // namespace assignment