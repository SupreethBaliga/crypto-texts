// Naive CPP Program to find inverse permutation. 
#include <bits/stdc++.h> 
using namespace std; 
  
// C++ function to find inverse permutations 
void inversePermutation(int arr[], int size) { 
  
  // Loop to select Elements one by one 
  for (int i = 0; i < size; i++) { 
  
    // Loop to print position of element 
    // where we find an element 
    for (int j = 0; j < size; j++) { 
  
      // checking the element in increasing order 
      if (arr[j] == i + 1) { 
  
        // print position of element where 
        // element is in inverse permutation 
        cout << j + 1 << " "; 
        break; 
      } 
    } 
  } 
} 

int main() {
	int arr[] = {   16,7,20,21, 
        29,12,28,17, 
        1,15,23,26, 
        5,18,31,10, 
        2,8,24,14, 
        32,27,3,9, 
        19,13,30,6, 
        22,11,4,25 
    }; 
    int size = sizeof(arr)/sizeof(arr[0]);
    inversePermutation(arr,size);
    return 0;
}