#include <iostream>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    std::cout << argc - 1 << " arguments: ";
    for (int i = 1; i < argc; i++) {
      std::cout << argv[i] << ' ';
    }
    std::cout << '\n';
  }
  std::cout << "Hello, world!\n";
  return 0;
}
