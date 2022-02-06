 #include <bits/stdc++.h>
 using namespace std;
 int main(){
     int n;
     cin>>n;
      int arr[n];
       for(int i =0; i< n; i++){
           cin>>arr[i];
       }
    //   sort(arr,arr+n);//(begining of array, len of array)
    //    
     
     
     
     //**quick sort // **selection sort // **merge sort // **heap sort //** bubble sort //**insertion sort //bucket sort
     // sheet sort // radix sort // count sort
     
     // selection sort : 
     // 6 3 5 8 1 -> 1 3 5 6 8 
     //int newArr[5] --> space++
     // in-place sorting lago --> s.c. O(1)
     // 1 . find minimum ele 
     // 2. swap(    /   )
     
     // 6 3 5 8 1 //10e18
     int mini;
     for(int i =0; i < n -1; i++){
         mini = i;
         for(int j = i +1; j < n -1; j++){
             if(arr[j] < arr[mini]) mini = j;
             else {
                 swap(arr[j],arr[mini]);
             }
         }
     }
     
       for(int i =0; i< n; i++){
            cout<<arr[i]<<" ";
        }
     
     
     
     return 0;
 }