/**
 * @param {any} obj
 * @param {any} classFunction
 * @return {boolean}
 */
var checkIfInstanceOf = function(obj, classFunction) {
    
    if(obj == null || obj == undefined || typeof classFunction !== 'function')
        {
            return false;
        }
    
    let currPrototype = Object.getPrototypeOf(obj);
    
    while(currPrototype !== null)
        {
            if(currPrototype === classFunction.prototype)
            {
                return true;
            }
            currPrototype = Object.getPrototypeOf(currPrototype);
        }
    return false;
};

/**
 * checkIfInstanceOf(new Date(), Date); // true
 */