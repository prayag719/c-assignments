#include<iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n<2){
        return 1;
    }
     vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("max is %d",max);
    return 0;
}
