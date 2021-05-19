#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <random>
#include "Rando.hpp"

using namespace std;

Rando::Rando(const std::string &s): file(s), lines(getLines(file)), size(lines.size()) {}

vector<string> Rando::getLines(const string &s){
   ifstream in(s);
   if(!in){
      cout << "Can't find file: " << s << '\n';
      exit(1);
   }
   vector<string> all;
   for(string line = ""; getline(in, line); )
      all.push_back(line);
   return all;
}

string Rando::getRandom(){
   unsigned long long r = random_device()();
   return lines[r % size];
}

ostream& operator<<(ostream &os, Rando &r){
   os << r.getRandom();
   return os;
}


