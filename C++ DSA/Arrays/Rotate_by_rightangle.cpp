#include<iostream>

using namespace std;
int main(){
   int matrix[3][3]={1,2,3,4,5,6,7,8,9};
int n=3;

        for (int i = 0; i < n/2 ; ++i) {
            for (int j = 0; j < n; ++j) {
                swap(matrix[i][j], matrix[n - 1 - i][j]);
            }
        }

  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }

     
}
    