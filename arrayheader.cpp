#include<iostream>
using namespace std;
int main(){
 int middle,low,high,element,i,size;
 cout<<"Enter the size of the array : ";
 cin>>size;
 int ar[size];
 for(i=0;i<size;i++){
  cin>>ar[i];
 } 
 cout<<"Enter the element you want to search : ";
 cin>>element;
 low=0,high=(size-1);
 bool flag=false;
 while(low<=high){
  middle = (low+high)/2;
  if(ar[middle]==element){
   flag=true;
   break;
  }
  if(ar[middle]<element){
   low=middle+1;
  } 
  else if(ar[middle]>element){
   high=middle-1;
  }
 }
 if(flag){
  cout<<"The number has been found at the position "<<middle<<endl;
 }
 else{
  cout<<"The number is not present in the array :)"<<endl;
 }
return 0;
}