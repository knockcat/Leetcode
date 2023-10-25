# Knapsack with Duplicate Items
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a set of <strong>N</strong> items, each with a weight and a value, represented by the array <strong>w</strong>&nbsp;and&nbsp;<strong>val</strong>&nbsp;respectively.&nbsp;Also, a knapsack with weight limit <strong>W</strong>.<br>The task is to fill the knapsack in such a way that we can get the maximum profit. Return the maximum profit.<br><strong>Note:</strong> Each item can be taken any number of times.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong> <br>N = 2<br>W = 3
val = {1, 1}
wt = {2, 1}
<strong>Output:</strong> <br>3
<strong>Explanation:</strong> 
1.Pick the 2nd element thrice.
2.Total profit = 1 + 1 + 1 = 3. Also the total weight = 1 + 1 + 1  = 3 which is &lt;= 3.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong> <br>N = 4<br>W = 8
val[] = {6, 1, 7, 7}
wt[] = {1, 3, 4, 5}
<strong>Output:</strong> <br>48
<strong>Explanation:</strong> <br>The optimal choice is to pick the 1st element 8 times.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input&nbsp;or print anything. Your task is to complete the function <strong>knapSack()</strong> which takes the values <strong>N</strong>, <strong>W </strong>and the arrays <strong>val </strong>and <strong>wt </strong>as input parameters and returns the maximum possible value.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N*W)<br><strong>Expected Auxiliary Space: </strong>O(W)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N, W ≤ 1000<br>1 ≤ val[i], wt[i] ≤ 100</span></p></div>