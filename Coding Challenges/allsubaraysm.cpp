#include<iostream>
using namespace std;
main(){
int n;
int arr[n];
cin>>n;
for(int i=0;i<n;i++){
 cin>>arr[i];
}

for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
        if(arr[i]==arr[j]){
            cout<<"index is"<<j;
            break;
        }
        break;

    }

}

}

