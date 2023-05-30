<h2><a href="https://leetcode.com/problems/call-function-with-custom-context/">2693. Call Function with Custom Context</a></h2><h3>Medium</h3><hr><div><p>Enhance all functions to have the&nbsp;<code>callPolyfill</code>&nbsp;method. The method accepts an object&nbsp;<code>obj</code>&nbsp;as it's first parameter and any number of additional arguments. The&nbsp;<code>obj</code>&nbsp;becomes the&nbsp;<code>this</code>&nbsp;context for the function. The additional arguments are passed to the function (that the <code>callPolyfill</code>&nbsp;method belongs on).</p>

<p>For example if you had the function:</p>

<pre>function tax(price, taxRate) {
  const totalCost = price * (1 + taxRate);
&nbsp; console.log(`The cost of ${this.item} is ${totalCost}`);
}
</pre>

<p>Calling this function like&nbsp;<code>tax(10, 0.1)</code>&nbsp;will log&nbsp;<code>"The cost of undefined is 11"</code>. This is because the&nbsp;<code>this</code>&nbsp;context was not defined.</p>

<p>However, calling the function like&nbsp;<code>tax.callPolyfill({item: "salad"}, 10, 0.1)</code>&nbsp;will log&nbsp;<code>"The cost of salad is 11"</code>. The&nbsp;<code>this</code>&nbsp;context was appropriately set, and the function logged an appropriate output.</p>

<p>Please solve this without using&nbsp;the built-in&nbsp;<code>Function.call</code>&nbsp;method.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong>
fn = function add(b) {
  return this.a + b;
}
args = [{"a": 5}, 7]
<strong>Output:</strong> 12
<strong>Explanation:</strong>
fn.callPolyfill({"a": 5}, 7); // 12
callPolyfill sets the "this" context to {"a": 5}. 7 is passed as an argument.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> 
fn = function tax(price, taxRate) { 
&nbsp;return `The cost of the ${this.item} is ${price * taxRate}`; 
}
args = [{"item": "burger"}, 10, 1,1]
<strong>Output:</strong> "The cost of the burger is 11"
<strong>Explanation:</strong> callPolyfill sets the "this" context to {"item": "burger"}. 10 and 1.1 are passed as additional arguments.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul style="list-style-type:square;">
	<li><code><font face="monospace">typeof args[0] == 'object' and args[0] != null</font></code></li>
	<li><code>1 &lt;= args.length &lt;= 100</code></li>
	<li><code>2 &lt;= JSON.stringify(args[0]).length &lt;= 10<sup>5</sup></code></li>
</ul>
</div>