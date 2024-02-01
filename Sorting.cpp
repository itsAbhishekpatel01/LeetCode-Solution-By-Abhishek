#include <bits/stdc++.h>
using namespace std;
/*
Selection sort: Find the minimum element of the remaining unsorted array and swap it
with the first element of the unsorted array. Perform this step n-1 times to get the
array sorted.
Key: Swap minimum
Focus: Minimum at front
*/
void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++) {
        int min=i;
        for(int j=i;j<n;j++) {
            if(arr[min]>arr[j]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min]; 
        arr[min] = temp;
    }
}

/*
Bubble sort: Swap the adjacent elements if they are in wrong order. Perform this step
n-1 times to get the array sorted.
Key: Swap adjacent
Focus: Maximum at the end
Time complexity: Best, Average & Worst = O(n^2)
Space complexity: O(1)
*/
void bubble_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/*
Modified Bubble Sort: Just add arr check after every step whether we swapped in the previous
step or not. If we did't swapped in the previous step, it signifies that the array is now 
sorted and we have to stop
Time complexity: Best = O(n) Average & Worst = O(n^2)
Space complexity: O(1)
*/
void modified_bubble_sort(int arr[], int n){
    for(int i=n-1; i>=1; i--){
        bool swapped = false;
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swapped = true;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

/*
Insertion sort: Take an element from the unsorted array and put it at the right
position in the sorted array. 
Analogy: Every element ask to its left element- hey left element, am i at the right position?
If the left element is in wrong order he will say, hey buddy i don't where do you belong to
actually, but i know that you and me are in the wrong order so let's swap our position then you
can ask to the element which is left to me.
Key: Pick element and put at right position
Focus: As we move farward the array will be getting sorted
Time complexity: Best = O(n) Average & Worst = O(n^2)
Space complexity: O(1)
*/
void insertion_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j=i;
        while(arr[j] < arr[j-1] && j>=1){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
    }
}

int main()
{
    int arr[5] = {2,13,4,1,3};
    int n =5;
    modified_bubble_sort(arr,5);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}