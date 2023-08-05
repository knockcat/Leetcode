# Chocolate Distribution Problem
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>A[ ]</strong> of positive integers of size <strong>N</strong>, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are <strong>M</strong> students, the task is to distribute chocolate packets among <strong>M</strong> students&nbsp;such that :</span><br><span style="font-size: 18px;">1. Each student gets <strong>exactly</strong> one packet.<br>2. The difference between maximum number of chocolates given to a student and minimum&nbsp;number of chocolates given to a student is minimum.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 8, M = 5</span>
<span style="font-size: 18px;">A = {3, 4, 1, 9, 56, 7, 9, 12}<strong>
Output: </strong>6
<strong>Explanation: </strong>The minimum difference between maximum chocolates and minimum chocolates is 9 - 3 = 6 by choosing following M packets :{3, 4, 9, 7, 9}.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 7, M = 3</span>
<span style="font-size: 18px;">A = {7, 3, 2, 4, 9, 12, 56}
<strong>Output: </strong>2
<strong>Explanation: </strong>The minimum difference between maximum chocolates and minimum chocolates is 4 - 2 = 2 by choosing following M packets :{3, 2, 4}.</span></pre>
<p><span style="font-size: 18px;"><strong>Your&nbsp;Task:</strong><br>You don't need to take any input or print anything. Your task is to complete the function&nbsp;<strong>findMinDiff()&nbsp;</strong>which takes array A[ ], N and M as input parameters&nbsp;and returns the minimum possible difference&nbsp;between maximum number of chocolates given to a student and minimum&nbsp;number of chocolates given to a student.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N*Log(N))<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ T ≤&nbsp;100<br>1&nbsp;≤&nbsp;N&nbsp;≤&nbsp;10<sup>5</sup><br>1 ≤&nbsp;A<sub>i</sub> ≤&nbsp;10<sup>9</sup><br>1 ≤&nbsp;M ≤&nbsp;N</span></p></div>