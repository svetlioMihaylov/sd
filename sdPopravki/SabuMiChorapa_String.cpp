
#include<iostream>
#include<string>


using namespace std;


class OleSabuMiChorapa_String {
private:
  char * data;      // The array that stores the elements of the queue.
  int size;     // The size of the data array.

public:
  OleSabuMiChorapa_String(int size);
  OleSabuMiChorapa_String();
  ~OleSabuMiChorapa_String();
  bool add(const char * value);
	  char * getContent();
};