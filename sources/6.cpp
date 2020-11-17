//
// Created by Алиса Рудовская on 17.11.2020.
//
#include <string>
#include <header.hpp>

using namespace std;

std::string replace(const std::string& str,
                    const std::string& old, const std::string& new_string) {
  bool flag = true; std::string result = str;
  int pos;
  while (flag) {
    pos = result.find(old, 0);
    if (pos != (int)std::string::npos) {
      result.replace(pos, new_string.length(), new_string);
    }
    if (pos == (int)std::string::npos){
      flag = false;
    }
  }
  return result;
}
