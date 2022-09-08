#include <iostream>
using namespace std;

int blocks[10] = {4,6,3,8,3,7,1,4,7,3};

void bubblesort(int array[]) {
  for (int i = 0; i < 10; i++) {
    for (int j = i+1; j < 11; j++) {
      if (array[i] < array[j]) {
        swap(array[i], array[j]);
      }
    }
  }

}

int main() {
  cout << "Bubble sorter ";
  bubblesort(blocks);
  for (int i = 1; i < 10; i++) {
  cout << blocks[i];
    cout << "\n";
  }
}
