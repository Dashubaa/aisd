#include <iostream>
#include<ctime>
using namespace std;
int main() {
    int time = clock();
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int *a;
    a = new int[n];
    cout << "Non sorted array: " << endl;
    for(int i = 0; i < n; i ++){
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    int temp;
    cout << "\nSorted array: " << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i ++)
        cout << a[i] << " ";
    cout << endl;
    cout << ((float)time) / (double)CLOCKS_PER_SEC << "\tsec" << endl;
    delete [] a;
    return 0;
}