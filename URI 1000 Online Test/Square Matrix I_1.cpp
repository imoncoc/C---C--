#include <iostream>
#include <cstdio>

using namespace std;

int matrix[105][105];

int main() {

    //freopen("out.txt" , "w", stdout);

    int n, i, j;
    bool lineprint = false;

    while(cin >> n) {
        if (n == 0) break;

        for (i = 0; i < n; ++i) {
            for (j = i; j < n - i; ++j) {
                matrix[j][i] = i + 1;
                matrix[j][n - i - 1] = i + 1;
            }

            for (j = i; j < n - i; ++j) {
                matrix[i][j] = i + 1;
               matrix[n - i - 1][j] = i + 1;
            }
        }

        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {

                //cout << matrix[i][j];
                printf("%3d", matrix[i][j]);
                if (j < n - 1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return (0);
}
