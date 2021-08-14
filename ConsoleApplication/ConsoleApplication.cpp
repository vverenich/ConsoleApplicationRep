#include<iostream>
#include<string>
#include<functional>
#include<cctype>
#include<fstream>
#include"Predicates.h"

//Function that removes particular words from source file
//and write them down to the new file
void deleteParticularWords(std::ofstream &foutR, std::ofstream &foutDW,
	std::ifstream &fin, std::function<bool(const std::string &str)> predicateFunc) {

	while (!fin.eof()) {
		std::string word;
		fin >> word;
		if (predicateFunc(word)) {
			foutDW << word << " ";
		} else {
			foutR << word << " ";
		}
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2) {
		std::cout << "Usage: <program name> <file name>";
		return 0;
	}
	const std::string fileName{ argv[1] };

	std::ifstream fin;
	fin.open(fileName);
	if (!fin.is_open()) {
		std::cout << "Text file hadn't been opened";
		return 0;
	}

	std::ofstream foutResult("result.txt");
	std::ofstream foutDeletedWords("deletedWords.txt");

	deleteParticularWords(foutResult, foutDeletedWords, fin, containsMoreThanTwoOccurancesOfv);

	fin.close();
	return 0;
}