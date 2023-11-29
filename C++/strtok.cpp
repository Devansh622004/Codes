#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char quote[] = "Remember me when you lo*ok at the moon!";

  // break the string when it encounters empty space

  cout <<  strtok(quote, "*");

  return 0;
}

// Output: Remember