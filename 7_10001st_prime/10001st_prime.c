#include <stdio.h>

void build_prime_list(){
  int primeArray[10002];
  int length = 3; // inital prime array will have 3 entries
  int iter = 7; // the largest prime will be 5, start with next odd

  //construct the initial array with the first 3 primes
  primeArray[0] = 2;
  primeArray[1] = 3;
  primeArray[2] = 5;

  while( length < 10001 ){
    int prime = 1;

    for(int j = 0; j < length-1; j++){
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

    iter += 2;
  }

  printf("Found 10001 primes! Last entry is %d\n", primeArray[length-1]);
}

int main(){
  printf("Testing for the 10001st prime\n");
  build_prime_list();
}
