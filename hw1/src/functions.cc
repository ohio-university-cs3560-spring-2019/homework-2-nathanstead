#include <iostream>
#include <string>
#include "../include/functions.h"
using namespace std;


// Function that takes 2 strings, and for every input line, it replaces
//    all occurences of the first string with the second string

void replace(const string& target, const string& replacement) {
  string tmp; //String to hold input
  getline(cin, tmp); //Taking input and making it a string to search through
  while(!cin.eof()) {
    size_t n = 0; //Variable to keep track of search progress through input string
    n = tmp.find(target, n); //Searches for target starting at index n
    while (n != string::npos) {
      tmp.replace(n, target.length(), replacement); //Replaces found occurence of taget and replaces it
      n = tmp.find(target, n);
    }
    cout << tmp << endl;
    getline(cin, tmp);
  }
}
