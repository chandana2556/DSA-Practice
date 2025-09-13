/*Reverse an Array
  nums:[1,2,3,4,5]
  output:[5,4,3,2,1]
*/


int n = nums.size();
int start = 0, end = n - 1;

while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
}
