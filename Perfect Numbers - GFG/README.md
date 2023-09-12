# Perfect Numbers
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given&nbsp;a number <strong>N,</strong> check if a number is perfect or not. A number is said to be perfect if sum of all its factors excluding the number itself is equal to the number. Return 1 if the number is Perfect otherwise return 0.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>N = </strong>6</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">1 </span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">Factors of 6 are 1, 2, 3 and 6.
Excluding 6 their sum is 6 which
is equal to N itself. So, it's a
Perfect Number.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>N = </strong>10</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">0</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">Factors of 10 are 1, 2, 5 and 10.
Excluding 10 their sum is 8 which
is not equal to N itself. So, it's
not a Perfect Number.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>isPerfectNumber()</strong> which takes an Integer N as input and returns 1 if N is a Perfect number else returns 0.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(sqrt(N))<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= N &lt;= 10<sup>12</sup></span></p></div>