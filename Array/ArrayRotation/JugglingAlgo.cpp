/*This is an extension of method 2. Instead of moving one by one, divide the array in different sets
where number of sets is equal to GCD of n and d and move the elements within sets.
If GCD is 1 as is for the above example array (n = 7 and d =2), 
then elements will be moved within one set only, 
we just start with temp = arr[0] and keep moving arr[I+d] to arr[I] and 
finally store temp at the right place.
*/