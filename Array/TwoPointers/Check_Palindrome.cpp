/* Check if the array is Palindrome 
	Input: arr = [1, 2, 3, 2, 1]
        Output: Palindrome
           
	Time Complexity: O(n)
	Space Complexity: O(1)
*/

bool isPalindrome true;
for(int i=0;i<n/2;i++){
	if(arr[i]!=arr[n-1-i]){
		isPalindrome false;
		break;
	}
if (isPalindrome)
	cout<<"Palindrome";
else
	cout<<"Not Palindrome";
}
