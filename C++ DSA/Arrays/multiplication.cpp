#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter rows and column of first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter rows and column of second matrix: ";
    cin>>r2>>c2;
    int arr[r1][c1];
    int brr[r2][c2];
    int crr[r1][c2];

    if(c1!=r2)cout<<"Matrix cannot be multiplied.";
    cout<<"Start entering values of first matrix"<<endl;

      for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Start enteing values of second matrix"<<endl;
      for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>brr[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
             crr[i][j] = 0 ;
            for(int k=0;k<c1;k++){
                 crr[i][j] += (arr[i][k]*brr[k][j]);
            }
        }
        
    }

   for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}