#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "Modified by Zhiyong Yang-zhiyongy@usc.edu"; 
}

int Solution::Factorial_recursive(int n){
  if(n<0) {return -1;}
  else if(n==0) {return 1;}
  else {
    return n*Solution::Factorial_recursive(n-1);
  }
}
int Solution::Factorial_non_recursive(int n){
  if(n<0) return -1;
  else if(n==0){
    return 1;
  }
  else {
    int sum=1;
    for(int i=1;i<=n;i++)
    sum=sum*i;
    return sum;
  }
}