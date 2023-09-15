# Partition Equal Subset Sum
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array&nbsp;<strong>arr[]</strong> of size&nbsp;<strong>N</strong>, check if&nbsp;it can be partitioned into two parts such that the sum of elements in both parts&nbsp;is the same.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong> N = 4
arr = {1, 5, 11, 5}
<strong>Output:</strong> YES
<strong>Explanation:</strong> 
The two parts are {1, 5, 5} and {11}.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong> N = 3
arr = {1, 3, 5}
<strong>Output:</strong> NO
<strong>Explanation: </strong>This array can never be 
partitioned into two such parts.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>equalPartition()</strong> which takes the value N and the array as input parameters and returns 1 if the partition is possible. Otherwise, returns 0.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N*sum of elements)<br><strong>Expected Auxiliary Space:</strong> O(N*sum of elements)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 100<br>1 ≤ arr[i] ≤ 1000<br>N*sum of elements&nbsp;≤ 5*10<sup>6</sup></span></p></div>