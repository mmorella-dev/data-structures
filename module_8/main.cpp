// main.cpp
#include <iostream>
#include <string>

using namespace std;

// Function 1
// Postcondition: Prints the prefix augmented by the section number for each
// section. Levels determines how deep the sections go (i.e. 2 levels
// gives 1.1., 1.2., and so on; 3 levels gives 1.1.1., 1.1.2., and so on.)
void numbers(ostream& outs, const string& prefix, unsigned int levels){
    // WRITE YOUR CODE HERE
};

// Function 2
// Precondition:   n is a power of 2 greater than zero.
// Postcondition: A pattern has been printed to the ostream outs. The longest
// line of the pattern has n stars beginning in column i of the output.
void pattern(ostream& outs, unsigned int n, unsigned int i){
    // WRITE YOUR CODE HERE
};

int main(int argc, char** argv) {
  // Testing function 1 (Try these)
  // numbers(cout, "THERBLIG", 2);
  numbers(cout, "THERBLIG", 3);
  // numbers(cout, "THERBLIG", 4);

  // Testing function 2 (Try these)
  pattern(cout, 8, 0);
  // pattern(cout, 16, 0);
  // pattern(cout, 32, 0);
}