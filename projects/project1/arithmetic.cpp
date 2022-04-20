/** Arithmetic.cpp
 *@Isaac Muprhy
 *@5741848
 *@Murp1878
 */

#include <iostream>
#include "math.h"


Stat::Stat() {
  // counts of the amount of values 
  total = 0;
  // stores the last value
  last = 0;
  // sum of all values
  sum = 0;
  // largest number in the sequence
  max = 0;
  // smalles number in the sequence
  min = 0;
}

void Stat::input(double value) {

  
  
  if (total == 0) {
    // sets max an min to zero
    max = value;
    min = value;
  } 
  
  if (value < min) {
    min = value;
  }
  if (value > max) {
    max = value;
  }
   // calculates the sum
    sum += value;
    last = value;
   // increments total adding 1 each time
   total++;
  
}

double Stat::GetMin() {
  return min;
}

double Stat::GetMax() {
  return max;
}

void Stat:: clear() {
  total = 0;
  last = 0;
  sum = 0;
  max = 0;
  min = 0;
}

double Stat::GetTotal() {
  return total;
}

double Stat::GetLast() {
  return last;
}

double Stat::GetSum() {
  return sum;
}

double Stat::GetMean() {
  return sum / total;
}


  
    

  
  
     
