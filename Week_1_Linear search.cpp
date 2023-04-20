/*Pseudo code for linear search
Start
procedure linear_search (list,value)
for each item in the list
if match item==key
return match item's location
end if 
end for*/

/*sample linear search code C++*/

#include<iostream>
using namespace std;

int main(){
    int array[]={2,29,67,14,10,5,6};
    int i,n,x;
    x=10;
    for (i=0;i<n;i++)
    if  (array[i]==x)
         { cout<<array[i]<<" "<<"is present at position"<<" "<<i+1<<endl;}
return 0;}
