#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main () {
  ofstream file;
  const char* name = "example.txt";
  // string name = "example.txt";
  file.open(name);
  file << "Writing this to a file.\n";
  file.close();
  return 0;
}