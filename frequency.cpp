#include<iostream>
using namespace std;
void countfrequency(int arr[],int n){
    for(int i=0;i<n;i++){
         bool flag=false;
         for(int j=0;j<i;j++){
             if(arr[i]==arr[j]){
                 flag=true;
                 break;
             }
         }
         if(flag==true)
         {
             continue;
         }
         int freq=1;
         for(int k=i+1;k<n;k++){
             if(arr[k]==arr[i]){
                 freq++;
             }

         }
         cout<<freq<<" ";
    }
}
int main(){
    int arr[]={10,2,0,10,20,10,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    countfrequency(arr,n);
}