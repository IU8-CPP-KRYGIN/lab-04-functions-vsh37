//
// Created by Алиса Рудовская on 17.11.2020.
//
#include <header.hpp>
#include <string>
#include <vector>

using namespace std;

std::string join(const std::vector<std::string>& str, const std::string& sep) {
  std::vector<std::string> str1 = str;
  std::string result;
  int n = str1.size();
  for (int i = 0; i < n-1; i++) {
    result += str1[i] + sep;
  }
  result += str1[n-1];
  return result;
}