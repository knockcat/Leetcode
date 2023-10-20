# Form a number divisible by 3 using array digits
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You will be given an array <strong>arr</strong> of integers of length <strong>N. </strong>You can construct an integer from two integers by treating the integers as strings, and then concatenating them. For example, <strong>19 </strong>and <strong>4</strong> can be used to construct <strong>194 </strong>and <strong>419. </strong></span></p>
<p><span style="font-size: 18px;">The task is to find whether it’s possible to construct an integer using all the digits of these numbers such that it would be <strong>divisible by 3</strong>. <br>If it is possible then print <strong>1</strong> and if not print <strong>0</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong> N = 3
arr = {40, 50, 90}
<strong>Output:</strong> 1
<strong>Explanation:</strong> One such number is 405090.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong> N = 2
arr = {1, 4}
<strong>Output:</strong> 0
<strong>Explanation:</strong> The numbers we can form 
are 14 and 41. But neither of them are 
divisible by 3.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>isPossible()</strong> which takes <strong>N</strong> and <strong>arr</strong> as input parameters and returns <strong>1 i</strong>f we can form a number by the digits of the given number, that would be divisible by 3, otherwise returns <strong>0</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N, arr[i] ≤ 10<sup>5</sup></span></p></div>