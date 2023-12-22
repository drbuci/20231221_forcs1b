#include <cstdint>
#include <iostream>

#include <nlohmann/json.hpp>

#include "cs1blib.h"

/**
 * @brief prints out student/class info and tests the JSON Lib.
 *
 */
void classInfo() {
    std::cout << "CS1B Spring 2024 Tu/Th, Myname\n";

    std::cout << "JSON Lib Version:" << NLOHMANN_JSON_VERSION_MAJOR << "."
              << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";
}

double gradeAverage(double grades[], int siz) {
  double total = 0;
  for (int i=0; i<siz; ++i) {
    total +=grades[i];
  }
  return total/siz;
}
