#include <vector>

/*
 * Time Complexity: O(n+k)
 */

void count_sort(std::vector<int> &vec) {
  int n = vec.size();
  int k = vec[0];

  for (int i = 0; i < n; i++)
    k = std::max(k, vec[i]);

  std::vector<int> freq(k + 1, 0);
  for (int i = 0; i < n; i++)
    freq[vec[i]]++;

  int cnt = 0;
  for (int i = 0; i < k + 1; i++) {
    while (freq[i]--)
      vec[cnt++] = i;
  }
}
