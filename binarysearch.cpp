#include <iostream>
using namespace std;

int blocks[5] = {1,2,3,4,5};

void binarysearch(int array[], int target_number) {
  int middle = 3;
  target_number--;
  bool found = false;
  while (!found) {
    if (middle == blocks[target_number]) {
      cout << "Number found";
      found = true;
    } else if (blocks[target_number] > middle) {
      middle++;
    } else {
      middle--;
    }
  }
  
}

int main() {
  binarysearch(blocks, 2);
}
