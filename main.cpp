//
//  main.cpp
//  Homework4Part2
//
//  Created by Travis Cassell on 7/24/22.
//

#include <iostream>
#include <thread>

using namespace std;

int unsorted_arr[10] = {6,2,9,8,7,3,1,4,0,5}; // Unsorted array of integers
int sorted_arr[10]; // Array which will hold sorted integers

void sort_arr(int [], int, int);

int main(int argc, const char * argv[]) {
    
    // Threads for sorting and merging array
    thread t1  (sort_arr, unsorted_arr, 0, 5);
    thread t2  (sort_arr, unsorted_arr, 5, 10);
    thread merge (sort_arr, sorted_arr, 0, 10);
    
    t1.join();
    t2.join();
    merge.join();
    // Print contents
    for(int x = 0; x < 10; x++) {
        cout << sorted_arr[x] << ", ";
    }
    
    return 0;
}

//Function to sort array values
void sort_arr(int arr[], int start_index, int end_index) {
    for(int x = start_index; x < end_index; x++) {
        for(int y = start_index; y < end_index - x - 1; y++) {
            if(arr[y] > arr[y + 1]) {
                swap(arr[y], arr[y + 1]);
            }
        }
    }
    
    for(int z = start_index; z < end_index; z++) {
        sorted_arr[z] = arr[z];
    }
    cout << endl;
}

