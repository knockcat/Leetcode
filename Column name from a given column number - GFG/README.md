# Column name from a given column number
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a positive integer, return its corresponding column title as appear in an Excel sheet.<br>Excel columns has a pattern like A, B, C, … ,Z, AA, AB, AC,…. ,AZ, BA, BB, … ZZ, AAA, AAB ….. etc. In other words, column 1 is named as “A”, column 2 as “B”, column 27 as “AA” and so on.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 28
<strong>Output:</strong> AB
<strong>Explanation</strong>: 1 to 26 are A to Z.
Then, 27 is AA and 28 = AB.
</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
N = 13
<strong>Output:</strong> M
<strong>Explanation</strong>: M is the 13th character of
alphabet.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>colName()&nbsp;</strong>which takes the column number&nbsp;N as input and returns the column name represented as a string.</span><br><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(LogN).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>18</sup></span></p>
<p>&nbsp;</p></div>