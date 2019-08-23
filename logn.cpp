#include <iostream>
#include <cmath>     // ceil, log10
#include <cstdlib>   // atof
#include <iomanip>  // for setprecision

int main(int argc, char *argv[])  {
  char answer = 'Y';
  double a, b, x;
  int p = 4;

  if (argc != 3)  {
    std::cout << "[USE] : " << argv[0] << " <base> <number> ";
    std::cout << "\nReturns the Logarithm of NUMBER to BASE.";
    std::cout << "\nYou cannot have " << argc - 1 << " parameters.\n\n";
    return -1;
 }
 b = atof(argv[1]);
 a = atof(argv[2]);
 
 std::cout << "\n"  << std::setprecision(p+1)
                 << "LOG_BASE_" << b << "(" << a << ") = "
                 << std::log10(a)/std::log10(b) << "\n\n";
 
 std::cout << "\nIs that close enough? <Y/N> ";
 std::cin >> answer;
   
 if ( (answer == 'N') || (answer == 'n') ) {
       std::cout << "\nEnter number of decimal places: ";
       std::cin >> p;
       std::cout << "\n"  << std::setprecision(p+1)
                 << "LOG_BASE_" << b << "(" << a << ") = "
                 << std::log10(a)/std::log10(b) << "\n\n";
  }

  return 0;

 
}