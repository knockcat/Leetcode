# First non-repeating character in a stream
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an input stream <strong>A </strong>of <strong>n</strong> characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>A = "aabc"
<strong>Output: </strong>"a#bb"
<strong>Explanation: </strong>For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>A = "zz"
<strong>Output: </strong>"z#"
<strong>Explanation: </strong>For every character first non
repeating character is as follow-
"z" - first non-repeating character is 'z'
"zz" - no non-repeating character so '#'</span>
</pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>FirstNonRepeating()&nbsp;</strong>which takes A as input parameter and returns a string after processing the input stream.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br><strong>Expected Space Complexity:&nbsp;</strong>O(n)</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup></span></p></div>