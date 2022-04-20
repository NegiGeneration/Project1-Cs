/** main.cpp
 *@Isaac Murphy
 *@5741848
 *@Murp1878
 */
#include <iostream>
using namespace std;
#include "math.h"

int main() {
  
  Stat seq; // sequence object
  
    
  cout << " " << endl;
  cout << "Test 1: Empty sequence " << endl; 

  cout << "Total " << seq.GetTotal() << endl;
  cout << "last " << seq.GetLast() << endl;
  cout << "sum " << seq.GetSum() << endl;
  cout << "Mean " << seq.GetMean() << endl;
  cout << "Max " << seq.GetMax() << endl;
  cout << "Min " << seq.GetMin() << endl;
  seq.clear();
  
  cout << " " << endl;
  cout << "Test 2: Single value " << endl;
  seq.input(4.3);

  cout << "Total " << seq.GetTotal() << endl;
  cout << "Last " << seq.GetLast() << endl;
  cout << "Mean " << seq.GetMean() << endl;
  cout << "Sum " << seq.GetSum() << endl;
  cout << "Max " << seq.GetMax() << endl;
  cout << "Min " << seq.GetMin() << endl;
  seq.clear();
  
  cout << " " << endl;
  cout << "Test 3: Increasing " << endl;
  seq.input(3.2);
  seq.input(3.5);
  seq.input(4.7);
  seq.input(8.5);
  seq.input(9.54);
  
  
  cout << "Total " << seq.GetTotal() << endl;
  cout << "Last " << seq.GetLast() << endl;
  cout << "Mean " << seq.GetMean() << endl;
  cout << "Sum " << seq.GetSum() << endl;
  cout << "Max " << seq.GetMax() << endl;
  cout << "Min " << seq.GetMin() << endl;
  seq.clear();

  cout << " " << endl;
  cout << "Test 4: Decreasing values " << endl;
  seq.input(19.3);
  seq.input(18.5);
  seq.input(14.5);
  seq.input(12.4);
  seq.input(10.4);

  cout << "Total " << seq.GetTotal() << endl;
  cout << "Last " << seq.GetLast() << endl;
  cout << "Mean " << seq.GetMean() << endl;
  cout << "Sum " << seq.GetSum() << endl;
  cout << "Max " << seq.GetMax() << endl;
  cout << "Min " << seq.GetMin() << endl;
  seq.clear();

  cout << " " << endl;
  cout << "Test 5: Random Sequence " << endl;
  seq.input(34.4);
  seq.input(66.4);
  seq.input(69.3);
  seq.input(3.3);
  seq.input(4.55);

  cout << "Total " << seq.GetTotal() << endl;
  cout << "Last " << seq.GetLast() << endl;
  cout << "Mean " << seq.GetMean() << endl;
  cout << "Sum " << seq.GetSum() << endl;
  cout << "Max " << seq.GetMax() << endl;
  cout << "Min " << seq.GetMin() << endl;
  seq.clear();
  
  cout << " " << endl;
  cout << "Test 6: Constant Sequence " << endl;
  seq.input(3.4);
  seq.input(3.4);
  seq.input(3.4);
  seq.input(3.4);
  seq.input(3.4);

  cout << "Total " << seq.GetTotal() << endl;
  cout << "Last " << seq.GetLast() << endl;
  cout << "Mean " << seq.GetMean() << endl;
  cout << "Sum " << seq.GetSum() << endl;
  cout << "Max " << seq.GetMax() << endl;
  cout << "Min " << seq.GetMin() << endl;
  seq.clear();

  cout << " " << endl;
  cout << "Test 7: Sequence sum to zero " << endl;
  seq.input(5.4);
  seq.input(-5.4);

  cout << "Total " << seq.GetTotal() << endl;
  cout << "Last " << seq.GetLast() << endl;
  cout << "Mean " << seq.GetMean() << endl;
  cout << "Sum " << seq.GetSum() << endl;
  cout << "Max " << seq.GetMax() << endl;
  cout << "Min " << seq.GetMin() << endl;
  seq.clear();

  
  
} // end of main
