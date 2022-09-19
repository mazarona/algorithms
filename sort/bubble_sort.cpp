#include <vector>

/*
* Time Complexity: O(n^2)
*/

void bubble_sort(std::vector<int> &vec){
  int n = vec.size();
  bool is_sorted = true;
  for(int i = 0; i < n - 1; i++){
    for(int k = 0; k < n - i - 1; k++){
      if(vec[k] > vec[k+1] ){
        std::swap(vec[k], vec[k+1]);
        is_sorted = false;
      }
    }
    if(is_sorted) break;
  }
}
