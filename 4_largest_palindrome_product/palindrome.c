#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_palindrome(int input){
  int length;
  int mid;
  int k;
  int palindrome = 1;

  // largest possible product of two three-digit numbers
  if( input > 998001 || input < -998001){
    return -1;
  }

  // convert any negative numbers to positive
  if( input < 0 ){
    input *= -1;
  }

  char string_input[7];
  sprintf(string_input, "%d", input);

  length = strlen(string_input);

  // length 1 must be a palindrome
  if( length == 1 ) {
    return 1; 
  }else if( length == 2 ){
    // length 2 palindome only if both chars are the same
    if( string_input[0] != string_input[1])
      return 0;
    else
      return 1;
  }
  
  k = 0;
  for( int i = length-1; i >= length/2; i--){
    if( string_input[i] != string_input[k] ){
      palindrome = 0;
      break;
    }
    k++;
  }

  return palindrome;
}

int main(){
  int c, d, swap;
  int palindrome_count = 0;
  int palindromes_array[2500];

  // populate array with all valid palindromes
  for(int i = 999; i > 100; i--){
    for(int j = 999; j > 100; j--){
      if( is_palindrome( i*j )){
        palindromes_array[palindrome_count] = i*j;
	      palindrome_count++;
      }
    }
  }

  // sort the array of palindromes
  for (c = 0 ; c < ( palindrome_count - 1 ); c++){
    for (d = 0 ; d < palindrome_count - c - 1; d++){
      if (palindromes_array[d] < palindromes_array[d+1]){
	swap = palindromes_array[d];
	palindromes_array[d] = palindromes_array[d+1];
	palindromes_array[d+1] = swap;
      }
    }
  }

  printf("The largest palindrome is: %d\n", palindromes_array[0]);
 
}

