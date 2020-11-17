//
// Created by Алиса Рудовская on 17.11.2020.
//
#include <vector>
#include <header.hpp>

using namespace std;

float mean(const std::vector<float>& v) {
  float average = 0.;
  for (float i : v) {
    average += i;
  }
  return !v.empty() ? average/v.size() : 0;
}