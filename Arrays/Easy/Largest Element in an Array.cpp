/*
 * Find the Largest element in an array
 * Problem Statement: Given an array, we have to find the largest element in the array.

   Examples:
   
   Example 1:
   Input: arr[] = {2,5,1,3,0};
   Output: 5
   Explanation: 5 is the largest element in the array. 
   
   Example2: 
   Input: arr[] = {8,10,5,7,9};
   Output: 10
   Explanation: 10 is the largest element in the array. 
 */
sol 1 : 
Time complexity: O(N)
Auxiliary Space: O(1)
   
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        //sort(arr.begin(), arr.end() );, time complexity is O(nlogn);
        
        //optimised - time complexity is O(n)
        int maxi= arr[0];
        for (int i=1;i<n;i++){
            if (maxi< arr[i]){
                maxi= max( maxi, arr[i]);
            }
        }
        return maxi;
    }
};
int main()
{
    int arr[] = { 10, 324, 45, 90, 9808 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    cout << "Largest in given array is " << largest(arr, n);
    return 0;
}

sol2: recurssion 
Time complexity: O(N)
Auxiliary Space: O(N)
   
#include <bits/stdc++.h>
using namespace std;
 
// Function to find the largest element
int largest(int arr[], int n, int i)
{
    // Last index return the element
    if (i == n - 1) {
        return arr[i];
    }
 
    // Find the maximum from rest of the array
    int recMax = largest(arr, n, i + 1);
 
    // Compare with i-th element and return
    return max(recMax, arr[i]);
}
 
// Driver Code
int main()
{
    int arr[] = { 10, 324, 45, 90, 9808 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    cout << "Largest in given array is "
         << largest(arr, n, 0);
    return 0;
}


sol 3: using max_element which returns the pointer to the maximum element in the container. 
Time complexity: O(NlogN)
Auxiliary Space: O(N)
   
#include <bits/stdc++.h>
using namespace std;
 
// Returns maximum in arr[] of size n
int largest(int arr[], int n)
{
    return *max_element(arr, arr + n);
}
 
// Driver code
int main()
{
    int arr[] = { 10, 324, 45, 90, 9808 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    cout << largest(arr, n);
    return 0;
}

sol4: or using sort function, sort, then return the last element 
Time complexity: O(NlogN)- for sort function
Auxiliary Space: O(N)
