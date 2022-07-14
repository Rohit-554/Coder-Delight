// determining the largest sum subarray using kaden's algorithm
// time complexity is O(n)

#include<iostream>
using namespace std;

//algorithm
int kaden(int a[],int size){
    int cursum = 0;
    int maxsum = 0;
    for(int i=0;i<size;i++){
        cursum = cursum + a[i]; 
        if(cursum > maxsum)
            maxsum = cursum;
        if(cursum < 0)
            cursum = 0;

    }
    return maxsum;

}

main(){
    int n;                       //array size 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<kaden(a,n);

}
