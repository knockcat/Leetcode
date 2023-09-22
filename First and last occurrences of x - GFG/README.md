# First and last occurrences of x
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a sorted array <strong>arr</strong> containing <strong>n</strong> elements with possibly duplicate is to find indexes of first </span><span style="font-size: 18px;">elements, the task is to find the first </span><span style="font-size: 18px;">and last occurrences of an element </span><strong style="font-size: 18px;">x</strong><span style="font-size: 18px;"> in the given array.<br></span><strong style="font-size: 18px;">Note:</strong><span style="font-size: 18px;">&nbsp;If the number&nbsp;</span><strong style="font-size: 18px;">x</strong><span style="font-size: 18px;"> is not found in the array then return both the indices as -1.<br><br></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
<strong>Output:</strong>  <br>2 5
<strong>Explanation</strong>: <br>First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5. 
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
<strong>Output:</strong>  <br>6 6<br><strong>Explanation:</strong> <br>First and last occurrence of 7 is at index 6.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>find</strong>() that takes <strong>array arr, integer n and integer x</strong> as parameters and returns the required answer.<br></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(logN)<br><strong>Expected Auxiliary Space:</strong> O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">1 ≤ N ≤ 10<sup>6</sup><br>1 ≤ arr[i],x ≤ 10<sup>9</sup><br></span></p></div>