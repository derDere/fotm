#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "nlohmann/json.hpp"

using namespace std;

int main(int argc, char* argv[]) {

  string menuJsonPath = (string)getenv("HOME") + "/.config/fotm/menu.json";
  
  ifstream menuJsonFile(menuJsonPath);
  if (menuJsonFile.is_open()) {
    stringstream jj;
    jj << menuJsonFile.rdbuf();
    cout << jj.str() << endl;
    
  } else {
    cout << menuJsonPath << " file not found!" << endl;
    return 1;
  }
  
  return 0;
}
