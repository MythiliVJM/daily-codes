// Given an array H representing heights of buildings. You have to count the buildings which will see the sunrise (Assume : Sun rise on the front side(start) of array starting point).

// Input: 
// N = 5
// H[] = {7, 4, 8, 2, 9}
// Output: 3

// Explanation: 

// As 7 is the first element, it
// can see the sunrise. 4 can't see the
// sunrise as 7 is hiding it.  8 can see.
// 2 can't see the sunrise. 9 also can see
// the sunrise.


code:
#include <stdio.h>
#include<string.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int max=0;
   for(i=0;i<n;i++){
       if(arr[i]>max){
         printf("%d can see sunrise\n",arr[i]);
         max=arr[i];
       }
       else
         printf("%d can't see sunrise\n",arr[i]);
   }
    return 0;
}

 
