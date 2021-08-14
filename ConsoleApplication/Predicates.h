#ifndef PREDICATES_H
#define PREDICATES_H

#include<iostream>
#include<string>
#include<algorithm>

bool onlyUppercase(const std::string &str) {
	return all_of(str.begin(), str.end(), isupper);
}
bool onlyDigits(const std::string &str) {
	return all_of(str.begin(), str.end(), isdigit);
}
bool containsSubstringVlad(const std::string &str) {
	return str.find("vlad") != std::string::npos;
}
bool consistsOfMoreThan10Symbols(const std::string &str) {
	return str.size() > 10;
}
bool containsMoreThanTwoOccurancesOfv(const std::string &str) {
	return std::count(str.begin(), str.end(), 'v') > 2;
}

#endif