#include <iostream>
#include<ctime>
using namespace std;
int main() {
    int time = clock();
    int n;

    cout << "Enter size of array: " << endl;
    cin >> n;
    int a[n];
    cout << "Non sorted array: " << endl;
    for(int i = 0; i < n; i ++){
        a[i] = rand() % 1000;
        cout << a[i];
    }
    cout << "Sorted array: " << endl;
    for(int i = 0; i <= n; i++ ){
        for(int j = 0; j <= n - i; i++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }

        }
    }
    cout << endl;
    cout << ((float)time) / (double)CLOCKS_PER_SEC << "sec" << endl;
    return 0;
}