//
// Created by Алиса Рудовская on 17.11.2020.
//
#include <header.hpp>
#include <vector>

using namespace std;

bool remove_first_negative_element(std::vector<int>& v, int& removed_element){
  bool t = true; removed_element = 0;
  for (int i = 0; i < (int)v.size(); i++) {
    if (v[i] < 0) {
      removed_element = v[i];
      v.erase(v.begin() + i);
      break;
    }
  }
  if (removed_element == 0) {
    t = false;
  }
  return t;
}