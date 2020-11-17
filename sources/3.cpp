//
// Created by Алиса Рудовская on 17.11.2020.
//
#include <vector>
#include <header.hpp>

using namespace std;

int argmax(const std::vector<float>& v) {
  int index = 0;
  if (!v.empty()) {
    for (int i = 0; i < (int)v.size(); i++) {
      if (v[i] > v[index]) {
        index = i;
      }
    }
  }
  else {
    index = -1;
  }
  return index;
}