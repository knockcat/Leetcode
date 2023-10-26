# Minimum Operations
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a number N.&nbsp;Find the minimum number of operations required to reach <strong>N</strong>&nbsp;starting from <strong>0</strong>. You have 2 operations available:</span></p>
<ul>
<li><span style="font-size: 18px;">Double the number </span></li>
<li><span style="font-size: 18px;">Add one to the number</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 8
<strong>Output:</strong> 4
<strong>Explanation</strong>: <br>0 + 1 = 1 --&gt; 1 + 1 = 2 --&gt; 2 * 2 = 4 --&gt; 4 * 2 = 8.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
N = 7
<strong>Output:</strong> 5
<strong>Explanation</strong>: <br>0 + 1 = 1 --&gt; 1 + 1 = 2 --&gt; 1 + 2 = 3 --&gt; 3 * 2 = 6 --&gt; 6 + 1 = 7.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minOperation()&nbsp;</strong>which accepts an integer <strong>N </strong>and return number of minimum operations required to reach N from 0.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(LogN)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N&nbsp;&lt;= 10<sup>6</sup></span></p></div>