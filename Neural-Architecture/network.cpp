#include "network.h"

using namespace std;

int main()
{
  long double x = 0.1;
  long double y = sigma(x);
  long double dy_dx = sigma_derivada(x);
  cout << y << " \n";
  cout << dy_dx << " \n";
  return 0;
}
