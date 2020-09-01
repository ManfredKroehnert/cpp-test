#include "./lib.hpp"

#include <cstdint>
#include <iostream>


int main() {
    std::int32_t a{21};
    std::int32_t b{22};
    std::int32_t c = lib::add(a, b);
    std::cout
      << "a = " << a << std::endl
      << "b = " << b << std::endl
      << "c = " << c << std::endl;
    return 0;
}
