# Longest K unique characters substring
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string you need to print the size of the longest possible substring that has exactly <strong>K&nbsp;unique</strong> characters. If there is no possible substring then print -1.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input:</strong>
S = "aabacbebebe</span><span style="font-size: 18px;">", K = 3
<strong>Output:</strong> <br>7
<strong>Explanation</strong>: <br>"cbebebe" is the longest substring with 3 distinct characters.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input</strong>: 
S = "aaaa", K = 2
<strong>Output:</strong> -1
<strong>Explanation</strong>: <br>There's no substring with 2 distinct characters.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>longestKSubstr()&nbsp;</strong>which takes the string S and an integer K as input and returns the length of the longest substring with exactly K&nbsp;distinct characters. If there is no substring with exactly K distinct characters then return -1.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(|S|).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(|S|).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |S| ≤ 10<sup>5</sup><br>1 ≤ K ≤ 26<br>All characters are lowercase latin characters.</span></p></div>