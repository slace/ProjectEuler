#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int iter = 2520;
  int found = 0;

  while( 1 ){
    if( (iter%20 == 0) && (iter%19 == 0) && (iter%18 == 0) && (iter%17 == 0) && (iter%16 == 0)\
        && (iter%15 == 0) && (iter%14 == 0) && (iter%13 == 0) && (iter%12 == 0) && (iter%11 == 0)\
        && (iter%10 == 0) && (iter%9 == 0) && (iter%8 == 0) && (iter%7 == 0) && (iter%6 == 0)\
        && (iter%5 == 0) && (iter%4 == 0) && (iter%3 == 0) ){
      found = 1;
      break;
    } 
    iter += 2;
  }

  printf("Smallest multiple = %d\n", iter);

}

