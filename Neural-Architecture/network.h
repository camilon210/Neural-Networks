#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

long double sigma(long double x){
  return 1/(1+exp(-x));
}

long double sigma_derivada(long double x){
  return exp(-x)/((1+exp(-x))*(1+exp(-x)));
}
