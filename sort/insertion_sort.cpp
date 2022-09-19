#include <vector>

/*
* Time Complexity: O(n^2)
*/

void insertion_sort(std::vector<int> &vec){
  int sz = vec.size();
  for(int i = 1; i < sz; i++){
    int val = vec[i];
    for(int k = i; k >= 0; k--){
      if(vec[k-1] > val)
        vec[k] = vec[k-1];
      else
        vec[k] = val;
    }
  }
}

