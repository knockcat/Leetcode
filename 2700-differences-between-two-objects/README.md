<h2><a href="https://leetcode.com/problems/differences-between-two-objects/">2700. Differences Between Two Objects</a></h2><h3>Medium</h3><hr><div><p>Write a function that accepts two deeply nested objects or arrays&nbsp;<code>obj1</code> and&nbsp;<code>obj2</code>&nbsp;and returns a new&nbsp;object representing their differences.</p>

<p>The function should compare the properties of the two objects and identify any changes.&nbsp;The returned object should only contains keys where the value is different from&nbsp;<code>obj1</code> to&nbsp;<code>obj2</code>. For each changed key, the value should be represented as an&nbsp;array <code>[obj1 value, obj2&nbsp;value]</code>. Keys that exist in one object but not in the other should not be included in the returned object. When comparing two arrays, the indices of the arrays are considered to be their keys.&nbsp;The end result should be a deeply nested object where each leaf value is a difference array.</p>

<p>You may assume that both objects are the output of <code>JSON.parse</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 
obj1 = {}
obj2 = {
&nbsp; "a": 1, 
  "b": 2
}
<strong>Output:</strong> {}
<strong>Explanation:</strong> There were no modifications made to obj1. New keys "a" and "b" appear in obj2, but keys that are added or removed should be ignored.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> 
obj1 = {
&nbsp; "a": 1,
&nbsp; "v": 3,
&nbsp; "x": [],
&nbsp; "z": {
&nbsp; &nbsp; "a": null
&nbsp; }
}
obj2 = {
&nbsp; "a": 2,
&nbsp; "v": 4,
&nbsp; "x": [],
&nbsp; "z": {
&nbsp; &nbsp; "a": 2
&nbsp; }
}
<strong>Output:</strong> 
{
&nbsp; "a": [1, 2],
  "v": [3, 4],
&nbsp; "z": {
&nbsp;   "a": [null, 2]
&nbsp; }
}
<strong>Explanation:</strong> The keys "a", "v", and "z" all had changes applied. "a" was chnaged from 1 to 2. "v" was changed from 3 to 4. "z" had a change applied to a child object. "z.a" was changed from null to 2.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> 
obj1 = {
&nbsp; "a": 5, 
&nbsp; "v": 6, 
&nbsp; "z": [1, 2, 4, [2, 5, 7]]
}
obj2 = {
&nbsp; "a": 5, 
&nbsp; "v": 7, 
&nbsp; "z": [1, 2, 3, [1]]
}
<strong>Output:</strong> 
{
&nbsp; "v": [6, 7],
&nbsp; "z": {
&nbsp;   "2": [4, 3],
&nbsp;   "3": {
&nbsp;     "0": [2, 1]
&nbsp;   }
&nbsp; }
}
<strong>Explanation:</strong> In obj1 and obj2, the keys "v" and "z" have different assigned values. "a" is ignored because the value is unchanged. In the key "z", there is a nested array. Arrays are treated like objects where the indices are keys. There were two alterations to the the array: z[2] and z[3][0]. z[0] and z[1] were unchanged and thus not included. z[3][1] and z[3][2] were removed and thus not included.
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> 
obj1 = {
&nbsp; "a": {"b": 1}, 
}
obj2 = {
&nbsp; "a": [5],
}
<strong>Output:</strong> 
{
  "a": [{"b": 1}, [5]]
}
<strong>Explanation:</strong> The key "a" exists in both objects. Since the two associated values have different types, they are placed in the difference array.</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> 
obj1 = {
&nbsp; "a": [1, 2, {}], 
&nbsp; "b": false
}
obj2 = { &nbsp; 
&nbsp; "b": false,
&nbsp; "a": [1, 2, {}]
}
<strong>Output:</strong> 
{}
<strong>Explanation:</strong> Apart from a different ordering of keys, the two objects are identical so an empty object is returned.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= JSON.stringify(obj1).length &lt;= 10<sup>4</sup></code></li>
	<li><code>2 &lt;= JSON.stringify(obj2).length &lt;= 10<sup>4</sup></code></li>
</ul>
</div>