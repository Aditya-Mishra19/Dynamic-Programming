#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void printF(int arr[], vector<int> &ds, int n, int index) {
    if(index == n) {
        for(auto &it:ds) {
            cout << it << " ";
        }
    if(ds.size() == 0) {
        cout << "{}";
    }

        cnt++;
        cout << endl;
        return;
    }
    
    printF(arr, ds, n, index+1);
    ds.push_back(arr[index]);
    printF(arr, ds, n, index+1);
    ds.pop_back();
    
}

int main(){
    int n=3, index=0;
    int arr[] = {3, 1, 2};
    vector<int> ds;
    printF(arr, ds, n, index);
    cout << "Number of subsequence : " << cnt << endl;
}