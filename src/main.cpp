#include <functional>
#include <iostream>


int main(int argc, const char **argv)
{

  for (int i = 0; i < argc; i++) {
    std::cout << argv[i] << std::endl;
  }

  //Use the default logger (stdout, multi-threaded, colored)
  //spdlog::info("Hello, {}!", "World");
  //fmt::print("Hello, from {}\n", "{fmt}");
}
