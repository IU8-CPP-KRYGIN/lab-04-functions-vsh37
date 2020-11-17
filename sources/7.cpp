//
// Created by Алиса Рудовская on 17.11.2020.
//
#include <vector>
#include <string>
#include <header.hpp>

using namespace std;

std::vector<std::string> split(const std::string& str, char sep){
  std::string str1 = str;
  std::vector<std::string> result;
  int n = static_cast<int>(str.find(sep));
  while (n != -1 && static_cast<int>(str1.length() != 1)){
    std::string s = str1.substr(0, str1.find(sep));
    result.emplace_back(s);
    str1.erase(0, static_cast<int>(s.size()+1));
    n = static_cast<int>(str1.find(sep));
  }
  if (!str.empty() && str1[0] != sep){
    result.emplace_back(str1);
  }
  return result;
}