# 1. Contains Duplicate

```cpp
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    // Create an unordered set to store the elements we have seen so far
    unordered_set<int> seen;

    // Iterate through each number in the input vector
    for (int num : nums) {
        // Check if the current number is already in the set
        if (seen.count(num) > 0)
            // If it is, we found a duplicate, so return true
            return true;

        // Otherwise, add the current number to the set
        seen.insert(num);
    }

    // If we finish the loop without finding any duplicates, return false
    return false;
}
```
### `Complexity : O(n)`

<br>

# 2. Valid Angram
## Description: a word or phrase that is made by arranging the letters of another word or phrase in a different order

```cpp
bool isAnagram(string s, string t) {
        // If the two strings have different lengths, they cannot be anagrams
       if(s.length() != t.length())
            return false;
//sort both the strings in order
  sort(s.begin(), s.end()); 
  sort(t.begin(), t.end());
 
  // Case 2: check if every character of str1 and str2 matches with each other
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != t[i])
      return false;
  }
  return true;
    }
```
<br>

# 3. Two Sum
## Description: find pairs whose sum is equal to the target value
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // Iterate through each element in the vector
        for (int i = 0; i < n - 1; i++) {
            // For each element, iterate through the remaining elements
            for (int j = i + 1; j < n; j++) {
                // Check if the sum of the two elements equals the target
                if (nums[i] + nums[j] == target) {
                    // If it does, return the indices of the two elements
                    return {i, j};
                }
            }
        }
        // If no such pair is found, return an empty vector
        return {};
    }
};
```

# 3. Group of anagrams

```cpp
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //map that will store group of anagrams
        unordered_map<string,vector<string>>mp;

        //iterate through each word in input vector
        for(auto x:strs){
            string word =x;

            //sort the characters in word
            sort(word.begin(),word.end());
            
            //insert word as the key into unordered map, and we push the original word ("eat") into the vector associated with that key using mp[word].push_back(x).
            mp[word].push_back(x);
        }
        vector<vector<string>> ans;
        //iterate through each key value pair
        for(auto x:mp){
            //for each pair push vector of anagrams into `ans` vector
            ans.push_back(x.second);
        }
        return ans;
        
    }
```

<br>

# 4. Longest Consecutive Sequence

## Description: Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

```cpp
int longestConsecutive(vector<int>& nums) {
    int n = nums.size(); // Get the size of the input vector
    if(n == 0){
        return 0; // If the vector is empty, return 0
    }
    
    sort(nums.begin(), nums.end()); // Sort the vector to bring consecutive numbers together
    
    int currentConsecutiveSequence = 1; // Initialize the current consecutive sequence length
    int longestConsecutiveSequence = 0; // Initialize the longest consecutive sequence length
    
    for(int i = 1; i < n; i++) { // Start from the second element
        if(nums[i] != nums[i-1]) { // Check if the current number is not a duplicate
            if(nums[i] == nums[i-1] + 1) { // Check if the current number is consecutive
                currentConsecutiveSequence++; // Increment the current sequence length
            } else {
                // Update the longest sequence length if the current one is longer
                longestConsecutiveSequence = max(longestConsecutiveSequence, currentConsecutiveSequence);
                currentConsecutiveSequence = 1; // Reset the current sequence length
            }
        }
    }
    
    // Return the maximum of the longest sequence found and the current sequence length
    return max(longestConsecutiveSequence, currentConsecutiveSequence);
}
```
<br>

# 5. valid Palindrome

```cpp

bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1; // Initialize two pointers, one at the start and one at the end of the string

    while (left < right) {
        // Move the left pointer to the right if the current character is not alphanumeric
        if (!isalnum(s[left])) 
            left++;
        // Move the right pointer to the left if the current character is not alphanumeric
        else if (!isalnum(s[right])) 
            right--;
        // If the characters at the left and right pointers do not match, return false
        else if (tolower(s[left]) != tolower(s[right])) 
            return false;
        else {
            // Move both pointers towards the center if the characters match
            left++; 
            right--;
        }
    }
    // If the entire string is checked and all characters match, return true
    return true;
}
```
<br>

# 6. length of longest substring

```cpp
int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxLength=0;
        //stores characters as keys and their indices as value
        unordered_map<char,int> charMap;

        int left=0;

        //iterate through string using right pointer
        for(int right=0;right<n;right++){
            //If the current character is not in the map or its index is less than left, it means it is a new unique character.
            if(charMap.count(s[right])==0 || charMap[s[right]]<left){
                charMap[s[right]]=right; //update charMAp with char index
                maxLength=max(maxLength,right-left+1); //update maxlength
            }
            else{
                left=charMap[s[right]]+1;
                charMap[s[right]]=right;

            }
        }
        return maxLength;
    }
```

<br>

# 7. Reverse LinkedList
```java
public ListNode reverseList(ListNode head) {
    ListNode prev = null; // Initialize the previous node to null
    ListNode next = null; // Initialize the next node to null
    ListNode curr = head; // Start with the head of the list as the current node

    // Iterate through the list until we reach the end
    while (curr != null) {
        next = curr.next; // Store the next node
        curr.next = prev; // Reverse the current node's pointer to the previous node
        prev = curr; // Move the previous node to the current node
        curr = next; // Move to the next node in the list
    }
    return prev; // The previous node will be the new head of the reversed list
}
```
<br>

# 8. Merge two sorted list

```java
public class ListNode {
    int val;
    ListNode next;
    
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        // Create a dummy node to act as the start of the merged list
        ListNode dummy = new ListNode(-1);
        // Tail points to the last node in the merged list (starts with dummy)
        ListNode tail = dummy;

        // Traverse both lists
        while (list1 != null && list2 != null) {
            if (list1.val <= list2.val) {
                // Add list1's node to the merged list if it's smaller or equal
                tail.next = list1;
                list1 = list1.next;  // Move list1 pointer forward
            } else {
                // Add list2's node to the merged list if it's smaller
                tail.next = list2;
                list2 = list2.next;  // Move list2 pointer forward
            }
            tail = tail.next;  // Move tail to the last node in the merged list
        }

        // If one of the lists is not empty, link the remaining part to the merged list
        if (list1 != null) {
            tail.next = list1;
        } else {
            tail.next = list2;
        }

        // Return the merged list, starting from the next node of the dummy (skipping -1)
        return dummy.next;
    }
}
```

<br>

# 9. Valid parantheses

```java
class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>(); // create an empty stack
        for (char c : s.toCharArray()) { // loop through each character in the string
            if (c == '(') // if the character is an opening parenthesis
                stack.push(')'); // push the corresponding closing parenthesis onto the stack
            else if (c == '{') // if the character is an opening brace
                stack.push('}'); // push the corresponding closing brace onto the stack
            else if (c == '[') // if the character is an opening bracket
                stack.push(']'); // push the corresponding closing bracket onto the stack
            else if (stack.isEmpty() || stack.pop() != c) // if the character is a closing bracket
                // if the stack is empty (i.e., there is no matching opening bracket) or the top of the stack
                // does not match the closing bracket, the string is not valid, so return false
                return false;
        }
        // if the stack is empty, all opening brackets have been matched with their corresponding closing brackets,
        // so the string is valid, otherwise, there are unmatched opening brackets, so return false
        return stack.isEmpty();
    }
}
```

