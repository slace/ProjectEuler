#include <stdio.h>

void build_prime_list(){
  long primeArray[1000000];
  long length = 3; // inital prime array will have 3 entries
  long iter = 7; // the largest prime will be 5, start with next odd
  unsigned long sum = 0;

  //construct the initial array with the first 3 primes
  primeArray[0] = 2;
  primeArray[1] = 3;
  primeArray[2] = 5;

  for(; iter < 2000000; iter+=2 ){
    int prime = 1;

    for(long j = 1; j < length-1; j++){
      // if any of the entries in the prime table divides the number
      // then it is not a prime
      if( iter%(primeArray[j]) == 0 ){
	prime = 0;
	break;
      }
    }

    if( prime ){
      primeArray[length] = iter;
      length++;
    }

  }

  for( int k = 0; k < length; k++ ){
    sum += primeArray[k];
  }
  printf("Found %ld primes\nSum of all primes is %lu\n", length, sum);
}

int main(){
  printf("Building the primes array\n");
  build_prime_list();
}
