#include <vector>
void selection_sort(std::vector<int> &vec){
  int n = vec.size();
  for(int i = 0; i < n-1; i++){
    int min_index = i;
    for(int k = i + 1; k < n; k++){
      if(vec[k] < vec[min_index])
        min_index = k;
    }
    std::swap(vec[i], vec[min_index]);
  }
}
