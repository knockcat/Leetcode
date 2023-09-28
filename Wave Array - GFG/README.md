# Wave Array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong>sorted</strong> array <strong>arr[]</strong>&nbsp;of distinct integers. Sort the array into a wave-like array(In Place).<br>In other words, arrange the elements into a sequence such that arr[1] &gt;= arr[2] &lt;= arr[3] &gt;= arr[4] &lt;= arr[5].....</span></p>
<p><span style="font-size: 18px;">If there are multiple solutions, find the lexicographically smallest one.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong>The given array is sorted in ascending order, and you don't need to return anything to make changes in the original array itself.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>n = 5
arr[] = {1,2,3,4,5}
<strong>Output: </strong>2 1 4 3 5<strong>
Explanation: </strong>Array elements after 
sorting it in wave form are 
2 1 4 3 5.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>n = 6
arr[] = {2,4,7,8,9,10}
<strong>Output: </strong>4 2 8 7 10 9<strong>
Explanation: </strong>Array elements after 
sorting it in wave form are 
4 2 8 7 10 9.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your&nbsp;Task:</strong><br>The task is to complete the function <strong>convertToWave</strong>(), which converts the given array to a wave array.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n&nbsp;≤ 10<sup>6</sup><br>0 ≤ arr[i] ≤10<sup>7</sup></span></p></div>