#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Read input
  int n, m;
  cin >> n >> m;
  vector<vector<int>> gradebook(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> gradebook[i][j];
    }
  }

  // Count successful students
  int successful_students = 0;
  for (int i = 0; i < n; i++) {
    bool is_successful = false;
    for (int j = 0; j < m; j++) {
      bool subject_best = true;
      for (int k = 0; k < n; k++) {
        if (gradebook[k][j] > gradebook[i][j]) {
          subject_best = false;
          break;
        }
      }
      if (subject_best) {
        is_successful = true;
        break;
      }
    }
    if (is_successful) {
      successful_students++;
    }
  }

  // Print result
  cout << successful_students << endl;

  return 0;
}
