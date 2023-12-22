#include <iostream>

#include <cxxopts.hpp>
#include <fmt/format.h>
#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>

#include "config.hpp"
#include "cs1blib.h"

int main() {
  std::cout << project_name << '\n';
    std::cout << project_version << '\n';

    std::cout << "JSON:" << NLOHMANN_JSON_VERSION_MAJOR << "."
              << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";

    std::cout << "FMT:" << FMT_VERSION << "\n";

    std::cout << "CXXOPTS:" << CXXOPTS__VERSION_MAJOR << "."
              << CXXOPTS__VERSION_MINOR << "." << CXXOPTS__VERSION_PATCH
              << "\n";

    std::cout << "SPDLOG:" << SPDLOG_VER_MAJOR << "." << SPDLOG_VER_MINOR << "."
              << SPDLOG_VER_PATCH << "\n";

    classInfo();

  /*
	int score;
	int scoreCount;
	int scoreTotal;

  double grades[100];
  int siz = 0;
	
	scoreCount = 0;
	scoreTotal = 0;
	
	std::cout << "Enter Score: ";
	std::cin  >> score;
  
  do {
    std::cout << "Enter Score: ";
    std::cin >> grades[siz];
    ++siz;
  } while(std::cin);

  std::cout << "the average is " << gradeAverage(grades, siz) << '\n';

	return 0;

/*
	while(std::cin) {
		scoreTotal += score;
		++scoreCount;
		
		std::cout << "Enter Score: ";
		std::cin  >> score;
	}
	std::cout << "The average score is: " << scoreTotal/scoreCount;
*/
	
}
