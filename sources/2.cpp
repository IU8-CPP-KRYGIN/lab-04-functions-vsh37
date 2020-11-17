//
// Created by Алиса Рудовская on 17.11.2020.
//
#include <limits>
#include <vector>
#include <header.hpp>

using namespace std;

std::pair<float, float> minMax (const std::vector<float>& v) {
  std::pair<float, float> minmax;
  minmax.first = std::numeric_limits<float>::max();
  minmax.second = std::numeric_limits<float>::min();
  if (!v.empty()) {
    for (int i = 0; i < (int)v.size(); i++) {
      if (v[i] < minmax.first) minmax.first = v[i];
      if (v[i] > minmax.second) minmax.second = v[i];
    }
  } else {
    minmax.first = std::numeric_limits<float>::min();
    minmax.second = std::numeric_limits<float>::max();
  }
  return minmax;
}