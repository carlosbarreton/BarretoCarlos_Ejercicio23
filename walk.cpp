#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

int main(){
  int i;
  float pi = 2.0*asin(1.0);
  float theta = 0.0;
  float x = 0.0;
  float y = 0.0;
  
  srand48(13);
    
  float distance = sqrt(x*x + y*y);  
                  
  while(distance < 100) {
    theta = drand48()*2.0*pi;
    x = x + cos(theta);
    y = y + sin(theta);
    std::cout << x << " " << y << std::endl;
    distance = sqrt(x*x + y*y);  
  }
  
  return 0;
}

