#include <vector>

/*
 * Time Complexity: O(n^2)
 */

int partition(std::vector<int> &vec, int l, int r) {
  int pivot = vec[r];
  int low = l - 1;
  for (int i = l; i < r; i++) {
    if (vec[i] <= pivot) {
      low++;
      std::swap(vec[i], vec[low]);
    }
  }
  std::swap(vec[low + 1], vec[r]);
  return low + 1;
}

void q_sort(std::vector<int> &vec, int l, int r) {
  /* Base Case */
  if (l < r) {
    /* Partition */
    int pi = partition(vec, l, r);

    /* Transistion */
    q_sort(vec, l, pi - 1);
    q_sort(vec, pi + 1, r);
  }
}

void quick_sort(std::vector<int> &vec) {
  int l = 0;
  int r = vec.size() - 1;
  q_sort(vec, l, r);
}
