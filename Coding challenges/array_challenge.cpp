#include<iostream>
using namespace std;
main(){
    int a[5]={1,0,5,4,6};
    int max_no = a[0];
    for(int i=0;i<5;i++){
        max_no = max(max_no,a[i]);
        cout<<max_no<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<a[i];
    }
}
