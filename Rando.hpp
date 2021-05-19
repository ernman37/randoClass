#ifndef Rando_h
#define Rando_h

#include <iostream>
#include <string>
#include <vector>

class Rando{
   std::string file;
   std::vector<std::string> lines;
   int size;
  public: 
   Rando(const std::string &);
   std::string getRandom();
   std::vector<std::string> getLines(const std::string &s);
   friend std::ostream& operator<<(std::ostream &, Rando &);
};

#endif
