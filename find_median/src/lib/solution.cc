#include "solution.h"
#include <iostream>
double Solution::FindMedian(std::vector<int> &inputs) {
  double result;
  int size=inputs.size();
  if (inputs.size() == 0) {
    return -1;
  }
  else if(size%2==0){
    int index=size>>1;
    result=(double)(inputs[index]+inputs[index-1])/2;
  }
  else{
    int index=(size-1)>>1;
    result=inputs[index];
  }
  return result;
}


