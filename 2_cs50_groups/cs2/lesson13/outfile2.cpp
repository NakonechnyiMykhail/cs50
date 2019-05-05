#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

int main (void) {
  ofstream file;
  string path = "lesson/";
  string name = "test.txt";
  string full = path + name;
  char* y = new char[y, full.length() + 1]; // new char[100]
  strcpy(y,full.c_str());
  file.open (y, ios::out);
  if(file.is_open()){
    file << "Writing this to a file5.\n";
    file.close();
  }


  return 0;
}