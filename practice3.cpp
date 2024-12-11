#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter size of the array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter elements:\n";
    for(int i=0;i<num;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Entered Elements: "<<endl;
    for(int i=0;i<num;i++){
        cout<<arr[i]<<"\t";
    }
    int smallest=arr[0];
    for(int i=0;i<num;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"\nSmallest element in the array is: "<<smallest<<endl;
}