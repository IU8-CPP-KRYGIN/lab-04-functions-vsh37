// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#include <vector>
float mean(const std::vector<float>&);

std::pair<float, float> minMax(const std::vector<float>& v);
#endif // INCLUDE_HEADER_HPP_

int argmax(const std::vector<float>& v);

void sort(std::vector<float>& v);

bool remove_first_negative_element(std::vector<int>& v, int& removed_element);

std::string replace(const std::string& str,
                    const std::string& old, const std::string& new_string);

std::vector<std::string> split(const std::string& str, char sep);

std::string join(const std::vector<std::string>& str, const std::string& sep);
