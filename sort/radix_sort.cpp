// TODO:: Handle sorting negative integers
#include <vector>

/*
 * Time Complexity: O(n * d)
 */

void count_sort(std::vector<int> &vec, int d) {
  int n = vec.size();
  int k = vec[0];

  for (int i = 0; i < n; i++)
    k = std::max(k, vec[i]);

  std::vector<std::vector<int>> freq(10);
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < n; j++) {
      if ((vec[j] / d) % 10 == i)
        freq[i].push_back(vec[j]);
    }
  }

  int cnt = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < freq[i].size(); j++) {
      vec[cnt++] = freq[i][j];
    }
  }
}

void radix_sort(std::vector<int> &vec) {
  int sz = vec.size();
  int mx = vec[0];
  for (int i = 0; i < sz; i++)
    mx = std::max(mx, vec[i]);
  for (int d = 1; mx / d; d *= 10) {
    count_sort(vec, d);
  }
}
