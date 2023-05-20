/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var throttle = function(fn, t) {
 let id = null
  let nextTime = 0
  return function(...args) {
    const delay = Math.max(0, nextTime - Date.now())
    clearTimeout(id)
    id = setTimeout(() => { 
      fn(...args)
      nextTime = Date.now() + t;
    }, delay)
  }
};

/**
 * const throttled = throttle(console.log, 100);
 * throttled("log"); // logged immediately.
 * throttled("log"); // logged at t=100ms.
 */