/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */

var debounce = function(fn, t) {
    let timeout = null
    return (...args) => {
        clearTimeout(timeout)
        timeout = setTimeout(fn, t, ...args)
    }
};

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */