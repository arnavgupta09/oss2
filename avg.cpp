#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int avg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        avg+=arr[i];
    }
    avg=avg/n;
    cout<<avg;
    return 0;
}
