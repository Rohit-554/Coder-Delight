#include<iostream>
using namespace std;
main(){
    int n,m;
    cout<<"Enter the number of rows and columns of matrix A: ";
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the value of element ["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
     int ele;
    cout<<"Enter the Element to search";
    cin>>ele;
    cout<<"Entred";
    bool flag = false;
    int r = 0, c = m-1;
    while(r<n and c>=0){
        if (a[r][c] == ele){
            flag = true;
           }
        if(a[r][c]>ele)
            c--;
        else
            r++;   
    }
    if(flag)
    cout<<"Element found";
    else
    cout<<"NOT FOUND";
}
