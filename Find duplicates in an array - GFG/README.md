# Find duplicates in an array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>a</strong> of size <strong>N</strong> which contains elements from <strong>0</strong> to <strong>N-1</strong>, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order.&nbsp;</span><span style="font-size: 18px;">If no such element is found, return list containing <strong>[-1]</strong>.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> The extra space is only for the array to be returned. Try and perform all operations within the provided array.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 4
a[] = {0,3,1,2}
<strong>Output: <br></strong>-1<strong>
Explanation: <br></strong></span><span style="font-size: 14pt;">There is no repeating element in the array. </span><span style="box-sizing: inherit; font-size: 14pt;">Therefore output is -1.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 5
a[] = {2,3,1,2,3}
<strong>Output: <br></strong>2 3&nbsp;<strong>
Explanation: <br></strong>2 and 3 occur more than once in the given array.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Complete the function <strong>duplicates()</strong> which takes array a[] and n as input as parameters and returns a list of elements that occur more than once in the given array in a sorted manner.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n).<br><strong>Expected Auxiliary Space:</strong> O(n).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup><br>0 &lt;= A[i] &lt;= N-1, for each valid i</span></p></div>