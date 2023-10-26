// Tony Nguyen
// tony2305nguyen@csu.fullerton.edu
// @TonyMNN
// Partners: @yhuerta805

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: no command line arguments provided";
    return 1;
  }

  double add{0.0};
  for (std::string& argument : arguments) {
    if (argument == arguments.at(0)) {
      continue;
    }
    add = add + std::stod(argument);
  }
  double mean = {0.0};
  mean = add / static_cast<double>(arguments.size() - 1);

  std::cout << "Average = " << mean;

  return 0;
}