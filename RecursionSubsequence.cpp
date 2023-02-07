#include <bits/stdc++.h>
using namespace std;

//display any subsequence
bool printF(int arr[], vector<int> &ds, int n, int index, int sum, int s) {
    if(index == n) {
        if(s == sum) {
            for(auto &it:ds) {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    } 
    s += arr[index];
    ds.push_back(arr[index]);
    if(printF(arr, ds, n, index+1, sum, s) == true) return true;
    s -= arr[index];
    ds.pop_back();
    if(printF(arr, ds, n, index+1, sum, s) == true) return true;
    return false;
}



//count number of subsequences.
// int printF(int arr[], int n, int index, int sum, int s) {
//     if(index == n) {
//         if(s == sum) return 1;
//         else return 0;
//     } 
//     s += arr[index];
//     int l = printF(arr, n, index+1, sum, s);
//     s -= arr[index];
//     int r = printF(arr, n, index+1, sum, s);
//     return l+r;
// }

// void printF(int arr[], vector<int> &ds, int n, int index) {
//     if(index == n) {
//     for(auto &it:ds) {
//             cout << it << " ";
//     }
//     if(ds.size() == 0) {
//         cout << "{}";
//     }
//         cout << endl;
//         return;
//     } 
//     printF(arr, ds, n, index+1);
//     ds.push_back(arr[index]);
//     printF(arr, ds, n, index+1);
//     ds.pop_back(); 
// }

int main(){
    int n=3, index=0;
    int arr[] = {1, 2, 1};
    vector<int> ds;
    printF(arr, ds, n, index, 2, 0);
   // cout << "Number of subsequence : " << cnt << endl;
}