//Determine if a number is a prime number
function isPrime(e){
    let startnum = 3; 
    let stopnum = Math.sqrt(e);   //No need to check past the square root
    
    if (n == 2 || n == 3){ return true; }
    if (n % 2 == 0){ return false; }

    while (startnum <= stopnum){
        if (n % startnum == 0){ return false; }
        else { startnum += 2;}
    }
    return true;
}

//Direct implementation of Binet's formula for the nth Fibonacci number
//O(1) time
function fibonacci_n_formula(e){
    let phi = ((1+ Math.sqrt(5)) / 2);
    return Math.round((Math.pow(phi, e) - Math.pow(-phi, -e))/((2 * phi) - 1));
}

//Using recursion to find nth Fibonacci number
//Complexity < O(n^2), possibly O(n) depending on map lookup implementation
//ECMA standard calls for sublinear lookups for Map objects but likely higher than O(1) in practice
function fibonacci_recursion(e){
    let m = new Map();
    return function fib(f) {
        if(f <= 2){ return 1; }
        else if(m.has(f)) { return m.get(f); }
        else{
            result = fib(f-1) + fib(f-2);
            m.set(f, result);
            return result;
        }
    }(e);
}