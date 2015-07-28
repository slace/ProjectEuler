#include <stdio.h>
#include <math.h>

long largestPrimeFactor(long input){

  // all factors of 2
  while( input%2 == 0){
    input = input/2;
  }

  // all other factors (can skip even numbers)
  for(int i=3; i <= sqrt(input); i+=2 ){
    while( input%i == 0){
      input = input/i;
    }
  }

  return input;

}

int main(){
  long n = 600851475143;
  printf("The largest prime factor of 600851475143 is %ld\n", largestPrimeFactor(n));
}
