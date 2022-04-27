#include<iostream>
#include<ctime>
using namespace std;
int main(){
    int time = clock();
    int n;
    int r;
    int k = 0;
    cout << "Enter size of array:" << endl;
    cin >> n;
    cout << "Enter max number(range of numbers):" << endl;
    cin >> r;
    int a[n];
    cout << "Non sorted array :"<< endl;
    for (int i=0;i<n;i++){
        a[i] = rand()%r;
        cout << a[i] << " ";
    }
    cout << endl;
    int c[r];
    for(int i = 0; i < r; i++){
        c[i] = 0;
    }
    for (int i = 0;i < n; i++){
        c[a[i]]++;
    }
    cout<< "Sorted array :"<< endl;
    int b[n];
    for (int i = 0; i < r; i++){
        while(c[i] != 0){
            b[k] = i;
            k++;
            c[i]--;
        }
    }
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    cout << ((float)time) / (double)CLOCKS_PER_SEC << "sec" << endl;
    return 0; }
