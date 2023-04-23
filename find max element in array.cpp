//---------------------finding max element in the array---------------------------
#include<iostream>
using namespace std;

int main(){
    int A[7] = {4 ,8 ,6 ,9 ,5 ,100,7};
    int max = A[0];

    for(int i =0 ; i<7 ; i++){
        if(A[i]> max)
        max =A[i];
    }
    cout<<"the max element in the array is "<<max<<endl;
    return 0;
}
