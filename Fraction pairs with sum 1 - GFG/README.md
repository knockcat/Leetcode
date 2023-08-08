# Fraction pairs with sum 1
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18.6667px;">Given a list of <strong>N</strong> fractions, represented as two lists <strong>numerator </strong>and <strong>denominator</strong>, the task is to determine the count of pairs of fractions whose sum equals 1.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>I</strong><strong>nput:</strong><br>N = 4<br>numerator = [1, 2, 2, 8]<br>denominator = [2, 4, 6, 12]<span style="font-family: sans-serif; white-space: normal;"><br></span><strong>Output:</strong>
2
<strong>Explanation:<br></strong>Fractions 1/2 and 2/4 sum to 1. Similarly fractions 2/6 and 8/12 sum to 1. So there are 2 pairs of fractions which sum to 1.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:<br></strong>N = 5<br>numerator = [3, 1, 12, 81, 2]<br>denominator = [9, 10, 18, 90, 5]<br><strong>Output:</strong>
2
<strong>Explanation:<br></strong>Fractions 3/9 and 12/18 sum to 1. Similarly fractions 1/10 and 81/90 sum to 1. So there are 2 pairs of fractions which sum to 1.<br></span></pre>
<p><span style="font-size: 14pt;"><strong>Your task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>countFractions()</strong>&nbsp;which take integer&nbsp;<strong>N</strong> and arrays <strong>numerator&nbsp;</strong></span><span style="font-size: 18.6667px;">and </span><strong style="font-size: 14pt;">denominator</strong><span style="font-size: 14pt;"> of size N as arguments, and returns an integer.</span></p>
<p><span style="font-size: 14pt;"><strong style="font-size: 18px;">Expected Time Complexity:</strong><span style="font-size: 18px;"> O(N*log(N))</span><br style="font-size: 18px;"><strong style="font-size: 18px;">Expected Auxiliary Space:</strong><span style="font-size: 18px;">&nbsp;O(N)</span></span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= N &lt;=10<sup>5</sup><br>1 &lt;= numerator[i] &lt;= denominator[i] &lt;= 10<sup>9</sup></span></p></div>