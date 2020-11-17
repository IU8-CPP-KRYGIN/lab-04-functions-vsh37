//
// Created by Алиса Рудовская on 17.11.2020.
//
#include <limits>
#include <vector>
#include <header.hpp>

using namespace std;

void sort(std::vector<float>& v) {
  for (int i = 0; i < (int)v.size() - 1; i++) {
    for (int j = i+1; j < (int)v.size(); j++) {
      if (v[j] < v[i]) swap(v[j], v[i]);
    }
  }
}