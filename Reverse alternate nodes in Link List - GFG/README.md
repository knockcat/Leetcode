# Reverse alternate nodes in Link List
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a linked list, you have to perform&nbsp;the following task:</span></p>
<ol>
<li><span style="font-size: 14pt;">Extract the&nbsp;alternative nodes&nbsp;starting from second node.</span></li>
<li><span style="font-size: 14pt;">Reverse the extracted list.</span></li>
<li><span style="font-size: 14pt;">Append the extracted list at the end of the original list.</span></li>
</ol>
<p><span style="font-size: 14pt;"><strong>Note</strong>: Try to solve the problem without using any extra memory.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:
</strong>LinkedList = 10-&gt;4-&gt;9-&gt;1-&gt;3-&gt;5-&gt;9-&gt;4
<strong>Output: <br></strong>10 9 3 9 4 5 1 4<strong>
Explanation: <br></strong>Alternative nodes in the given linked list are 4,1,5,4. Reversing the alternative nodes from the given list, and then appending them to the end of the list results in a list 10-&gt;9-&gt;3-&gt;9-&gt;4-&gt;5-&gt;1-&gt;4.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:
</strong>LinkedList = 1-&gt;2-&gt;3-&gt;4-&gt;5
<strong>Output: <br></strong>1 3 5 4 2&nbsp;<strong>
Explanation:<br></strong>Alternative nodes in the given linked list are 2 and 4. Reversing the alternative nodes from the given list, and then appending them to the end of the list results in a list 1-&gt;3-&gt;5-&gt;4-&gt;2.</span></pre>
<p><span style="font-size: 14pt;"><strong>Your Task:</strong><br>You don't have to read input or print anything. Your&nbsp;task is to complete the function&nbsp;<strong>rearrange</strong>() which takes the head of the linked list as input and&nbsp;rearranges the list as required.</span></p>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup><br>0 &lt;= Node_value &lt;= 10<sup>9</sup></span></p></div>