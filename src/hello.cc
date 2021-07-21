#include <iostream>
#include "absl.h"

absl::flat_hash_map<int, std::string> fn_return_flat_hash_map(void) {
  absl::flat_hash_map<int, std::string> numbers = {
      {1, "one"}, {2, "two"}, {3, "three"}};
  return numbers;
}

int main() {
  absl::flat_hash_map<int, std::string> tmp = fn_return_flat_hash_map();
  std::cout << tmp[1] << std::endl;
  std::cout << tmp.size() << std::endl;
  std::cout << tmp.capacity() << std::endl;
  std::cout << tmp.max_size() << std::endl;
  std::cout << tmp.bucket_count() << std::endl;
  std::cout << tmp.load_factor() << std::endl;
}
