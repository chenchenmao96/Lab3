/* 
 * File:   main.cpp
 * Author: chenchen
 *
 * Created on January 27, 2018, 3:06 PM
 */

#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <sstream>
#include "PageFrameAllocator.h"

using std::cin;
using std::cout;
using std::cerr;
using std::getline;
using std::istringstream;
using std::string;
using std::vector;
/*
 * 
 */
int main(int argc, char** argv) {
  // Use command line argument as file name
  /*
  if (argc != 2) {
    std::cerr << "usage: Lab3 file\n";
    exit(1);
  }
  */
    
  //Done for ease of debugging
  PageFrameAllocator pf(3);
  pf.view5Bytes();
  
  std::cout << "Done.\n";
  return 0;
}