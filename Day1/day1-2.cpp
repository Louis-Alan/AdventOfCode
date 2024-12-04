
#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
  std::ifstream read("input.txt");
  std::string input;
  std::vector<int> a, b;
  std::unordered_map<int, int> map;
  while (std::getline(read, input)) {
    std::istringstream ss(input, input.size());
    int i, j;
    ss >> i >> j;
    map[i] = 0;
    b.push_back(j);
  }

  std::sort(b.begin(), b.end());
  int result = 0;
  for (auto i : b)
    if (map.find(i) != map.end())
      map[i] += 1;

  for (auto i : map) {
    result += i.first * i.second;
  }
  std::cout << result;
  return 0;
}
