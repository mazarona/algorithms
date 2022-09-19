#include <vector>

/*
 * Time Complexity: O(max(mx, sz))
 */

void count_sort(std::vector<int> &vec){
  int sz = vec.size();
  int mx = vec[0];

  for(int i = 0; i < sz; i++) mx = std::max(mx, vec[i]);

  std::vector<int> freq(mx + 1, 0);
  for(int i = 0; i < sz; i++)
    freq[vec[i]]++;

  int cnt = 0;
  for(int i = 0; i < mx + 1; i++){
    while(freq[i]--)
      vec[cnt++] = i;
  }
  
}
