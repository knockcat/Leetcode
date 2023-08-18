# Leaders in an array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array A of positive integers. Your task is to find the leaders in the array.&nbsp;An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>n = 6
A[] = {16,17,4,3,5,2}
<strong>Output: </strong>17 5 2<strong>
Explanation: </strong>The first leader is 17 
as it is greater than all the elements
to its right.&nbsp; Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>n = 5
A[] = {1,2,3,4,0}
<strong>Output: </strong>4 0<br><strong>Explanation:</strong> 0 is the rightmost element<br>and 4 is the only element which is greater<br>than all the elements to its right.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything.&nbsp;The task is to complete the function <strong>leader</strong>() which takes array A and n&nbsp;as input parameters and&nbsp;returns an array of leaders in order of their appearance.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong></span><span style="font-size: 18px;">&nbsp;O(n)</span><br><span style="font-size: 18px;"><strong>Expected Auxiliary Space:</strong>&nbsp;O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n&nbsp;&lt;= 10<sup>7</sup><br>0 &lt;= A<sub>i</sub> &lt;= 10<sup>7</sup></span></p></div>