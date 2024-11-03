#include <iostream>
using namespace std;
void display(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void inputArray(int arr[], int n){
    cout<<"Enter your elements for your array:\n";
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
}
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int n=5,i,a=1,b=3;
    int arr[n];
    inputArray(arr,n);
    display(arr,n);
    cout<<"\nValues before swapping\na : "<<a<<" and b : "<<b<<endl;
    swap(&a,&b);
    cout<<"\nValues after swapping\na : "<<a<<" and b : "<<b<<endl;
}