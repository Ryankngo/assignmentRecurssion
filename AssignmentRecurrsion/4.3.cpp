//
//  4.3.cpp
//  AssignmentRecurrsion
//
//  Created by Ryan Ngo on 2/7/15.
//
//

#include <iostream>

using namespace std;

int min_num(int array[],int,int, int);
void sort (int array[], int, int);
void print(int array[], int);







int main() {
    int arr[9] = { 4, 3, 2, 1,5,8,6,7,9 };
    
    cout << "Original array:\t";
    print (arr,9);
    
    sort(arr,0, 9);     
    cout << "Sorted array:\t";
    print(arr, 9);
    
   
    
    return 0;
}

int min_num(int arr[],int index, int minIndex, int size)
{
    
    if (index==size)
        return minIndex;
    else
        if (arr[index]<arr[minIndex])
            minIndex=index;
    
    
    return min_num(arr,index+1,minIndex,size);
}





void sort ( int arr[], int startIndex,int size )
{
    if ( startIndex >= size - 1 )
        return;
    int minIndex=startIndex;
    
    minIndex =(min_num(arr, startIndex,startIndex,size));
    
    int temp = arr[startIndex];
    arr[startIndex] = arr[minIndex];
    arr[minIndex] = temp;
    sort(arr, startIndex + 1,size);
    
}


void print(int arr[], int size) {
    for ( int i = 0; i < size; i++ ) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
 

/*
 Original array:	4 3 2 1 5 8 6 7 9
 Sorted array:	1 2 3 4 5 6 7 8 9
 Program ended with exit code: 0
 */

