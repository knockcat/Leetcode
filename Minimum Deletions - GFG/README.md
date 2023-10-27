# Minimum Deletions
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string of <strong>S</strong> as input. Your task is to write a program to <strong>delete </strong>the minimum number of characters from the string so that the resultant string is a palindrome.<br><strong>Note:</strong> The order of characters in the string should be maintained.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input: <br></strong>S<strong> </strong>=<strong> "</strong>aebcbda"
<strong>Output:</strong> <br>2
<strong>Explanation</strong>: <br>Remove characters 'e' and 'd'.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="position: relative;"><span style="font-size: 18px;"><strong>Input</strong>: <br>S = "geeksforgeeks"
<strong>Output:</strong> <br>8
<strong>Explanation</strong>: <br>One of the possible result string can be "eefee", so answer is 13 - 5 = 8.
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minimumNumberOfDeletions()</strong>&nbsp;which takes the string <strong>S </strong>as inputs and returns the minimum number of deletions required to convert <strong>S</strong> into a pallindrome.<br><br><strong>Expected Time Complexity:</strong>&nbsp;O(|S|<sup>2</sup>)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(|S|<sup>2</sup>)<br><br><strong>Constraints:</strong><br>1 ≤ |S| ≤ 10<sup>3</sup></span></p></div>