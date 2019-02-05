// ********************************************************************************
//     Nathan Steadman
//     Ohio University
//     CS 3560 Homework 1
//     2019 January 28
//     Description: The main file for a program that takes two strings as command
//       line arguements. It then takes console input and, for each line, searches
//       for the first arguement and replaces it with me the second arguement, then
//       prints out the new string.
// ********************************************************************************

#include <iostream>
#include <string>
#include "../include/functions.h"
using namespace std;


int main(int argc, char **argv) {

  // calling the replace function with the 2 strings from the command line arguements
  replace(argv[1], argv[2]);


  return 0;
}
