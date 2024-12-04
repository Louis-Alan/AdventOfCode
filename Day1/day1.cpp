#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
  std::ifstream read("input.txt");
  std::string input;
  std::vector<int> a, b;
  while (std::getline(read, input)) {
    std::istringstream ss(input, input.size());
    int i, j;
    ss >> i >> j;
    a.push_back(i);
    b.push_back(j);
  }

  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());
  int result = 0;
  for (int i = 0; i < a.size(); i++) {
    result += std::abs(a[i] - b[i]);
  }

  std::cout << result;
  return 0;
}
