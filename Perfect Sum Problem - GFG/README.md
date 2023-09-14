# Perfect Sum Problem
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of non-negative integers and an integer <strong>sum</strong>, the task is to count&nbsp;all subsets of the given array with a sum equal to a given <strong>sum</strong>.</span></p>
<p><span style="font-size: 18px;">Note: Answer can be very large, so, output answer modulo 10<sup>9</sup>+7</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input</strong>: N = 6, arr[] = {2, 3, 5, 6, 8, 10}
       sum = 10
<strong>Output:</strong> 3</span>
<span style="font-size: 18px;"><strong>Explanation</strong>: {2, 3, 5}, {2, 8}, {10} are <br>possible subsets.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<div><span style="font-size: 18px;"><strong>Example 2:</strong></span></div>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input</strong>: N = 5, arr[] = {1, 2, 3, 4, 5}
       sum = 10
<strong>Output:</strong> 3</span>
<span style="font-size: 18px;"><strong>Explanation</strong>: {1, 2, 3, 4}, {1, 4, 5}, 
{2, 3, 5} are possible subsets.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<div><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Complete the function <strong><code>perfectSum</code>()&nbsp;</strong>which takes <strong>N, </strong>array<strong> arr[]</strong> and <strong>sum </strong>as input parameters and returns an integer value</span></div>
<div><span style="font-size: 18px;"><br><strong>Expected Time Complexity:</strong> O(<strong>N*sum</strong>)<br><strong>Expected Auxiliary Space:</strong> O(<strong>N*sum</strong>)<br><br><strong>Constraints:</strong><br>1 ≤ <strong>N*sum</strong> ≤ 10<sup>6</sup></span></div>
<div><span style="font-size: 18px;">0&lt;=arr[I]&lt;=10<sup>6</sup></span></div></div>