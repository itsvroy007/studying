#include<iostream>
using namespace std;

int arrElemSum(int arr[],int size){
    // arr declaration nd initialization same as C
    // int arr[] = {elem1,elem2,elem3.....};
    int Elems_Sum=0;
    for(int i=0;i<size;i++){
        Elems_Sum += arr[i];
    }
    cout<<"sum of all elem of arr is : "<<Elems_Sum<<endl;
    return 0;
}

int arrElemprod(int arr[],int size){
    int Elems_prod=1;
    for(int i=0;i<size;i++){
        Elems_prod *= arr[i];
    }
    cout<<"prod of all elem of arr is : "<<Elems_prod<<endl;
    return 0;
} 

void Max_MinInArr(int arr[],int size){
    // let max=arr[0] then compare to all elem 
    int max= arr[0];
    int min= arr[0];
    for(int i=1;i<size;i++){
        if (max<arr[i]){
            max = arr[i];
        }
        if (min > arr[i]){
            min = arr[i];
        }
    }
    cout<<"max elem of arr is : "<<max<<endl;
    cout<<"min elem of arr is : "<<min<<endl;
    return;
} 

int squareElemArr(int size){
    int arr[size];
    for(int i=0;i<=size-1;i++){
        arr[i]= (i+1)*(i+1);
    }
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
  cout<<"hello"<<endl;
  int arr1[5] = {1,3,4,6,0};
}