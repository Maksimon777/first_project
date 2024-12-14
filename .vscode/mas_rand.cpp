#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;


int main()
{
    srand(time(NULL));

    int m, n;
    cin >> m >> n;

    // Use dynamic allocation for the 2D array
    int** a = new int*[m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
    }

    // Fill the array with random numbers
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = (rand() % 100) + 1;
        }
    }

    // Print the array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}