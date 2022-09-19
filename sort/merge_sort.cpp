#include <vector>

/*
* Time Complexity: O(log(n));
*/

void merge(std::vector<int> &vec, int l, int r){
  int m = (l+r)/2;
  int lt = l;
  int rt = m+1;
  int sz = r-l+1;
  std::vector<int> tmp(sz);
  for(int i = 0; i < sz; i++){
    if(lt > m) 
      tmp[i] = vec[rt++];
    else if(rt > r) 
      tmp[i] = vec[lt++];
    else if(vec[lt] < vec[rt]) 
      tmp[i] = vec[lt++]; 
    else 
      tmp[i] = vec[rt++]; 
  }
  for(int i = 0; i < sz; i++){
    vec[l+i] = tmp[i];
  }
}

void merge_sort(std::vector<int> &vec, int l, int r){
  /* Base Case */
  if(l == r) return;

  /* Transition */
  int m = (l+r) / 2;
  merge_sort(vec, l, m);
  merge_sort(vec, m + 1, r);

  /* Merge while returning from the curren state/frame */
  merge(vec, l, r);
}
