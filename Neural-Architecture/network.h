#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

long double sigma(long double x){
  if(x<=0){
    return 0;
  }else if(x>=1){
    return 1;
  }else{
    return x;
  }
}

long double sigma_derivada(long double x){
  if(x<=0){
    return 0;
  }else if(x>=1){
    return 0;
  }else{
    return 1;
  }
}
