# Flip Bits
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>A[]</strong> consisting&nbsp;of <strong>0’s</strong> and <strong>1’s</strong>. A flip operation is one in which you turn <strong>1</strong> into&nbsp;<strong>0</strong> and a <strong>0</strong> into&nbsp;<strong>1</strong>. You have to do at most one&nbsp;“Flip” operation&nbsp;of any subarray. Formally, select a range <strong>(l, r) </strong>in the array <strong>A[]</strong>, such that (0 ≤ l ≤ r &lt; n) holds and flip the elements in this range to get the maximum ones in the final array. You can possibly make zero operations to get the answer.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 5
A[] = {1, 0, 0, 1, 0} 
<strong>Output:</strong>
4
<strong>Explanation:</strong>
We can perform a flip operation in the range [1,2]
After flip operation array is : [<em> 1</em> <strong>1 1</strong> <em>1 0</em> ]
Count of one after fliping is : 4</span>
<span style="font-size: 14px;"><em>[Note: the subarray marked in bold is the flipped subarray]</em></span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 7
A[] = {1, 0, 0, 1, 0, 0, 1}</span>
<span style="font-size: 18px;"><strong>Output:</strong>
6
<strong>Explanation:</strong></span>
<span style="font-size: 18px;">We can perform a flip operation in the range [1,5]
After flip operation array is : [<em> 1</em> <strong>1 1 0 1 1</strong> <em>1</em></span><span style="font-size: 18px;">]
Count of one after fliping is : 6</span>
<span style="font-size: 14px;"><em>[Note: the subarray marked in bold is the flipped subarray]</em></span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>maxOnes()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns the&nbsp;maximum number of 1's you can have in the array after atmost one flip operation.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N)</span><br><span style="font-size: 18px;"><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>6</sup><br>0 ≤ A[i] ≤ 1</span></p></div>