# Longest Common Subsequence
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two strings, find the length of longest subsequence present in both of them. Both the strings are in <strong>uppercase </strong>latin alphabets.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>A = 6, B = 6
str1 = ABCDGH
str2 = AEDFHR
<strong>Output: </strong>3<strong>
Explanation: </strong>LCS for input strings “ABCDGH” and “AEDFHR” is “ADH” of length 3.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:
</strong>A = 3, B = 2
str1 = ABC
str2 = AC
<strong>Output: </strong>2<strong>
Explanation: </strong>LCS of "ABC" and "AC" is "AC" of length 2.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Complete the function&nbsp;<strong>lcs()</strong>&nbsp;which takes the length of two strings respectively and two strings as input parameters&nbsp;and returns the&nbsp;length of the longest subsequence present in both of them. </span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong> : O(|str1|*|str2|)<br><strong>Expected Auxiliary Space</strong>: O(|str1|*|str2|)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=size(str1),size(str2)&lt;=10<sup>3</sup></span></p></div>