// Binary Search with C++ ,Lower bound and upper bound

// Q1. Check if X exist in the sorted array or not?

A[] = {1, 4, 5, 8, 9};

bool res = binary_search(a, a + n, 3);

// as we know that bool gives 2 result either it is true or it is false

bool res = binary_search(a, a + n, 4);

a[] = {1, 4, 5, 6, 9, 9}

int ind = lower_bound(a, a + n, 4) - a;

int ind = lower_bound(a, a + n, 7) - a;

int ind = lower_bound(a, a + n, 10) - a;

// For vectors

int ind = lower_bound(a.begin(), a.end(), a) - a.begin()

                                               // Lower bound is that stl which returns the first occurance of the element if it occurs and if it doesnt occurs then its iterator pointing
                                               // to the immediate greatest of the given element

                                               a[] = {1, 4, 5, 6, 9, 9};

int ind = upper_bound(a, a + n, 4) - a;

int ind = upper_bound(a, a + n, 7) - a;

int ind = upper_bound(a, a + n, 10) - a;

int ind = upper_bound(a.begin(), a.end(), a) - a.begin();

// Upper bound it will never return iterator pointing to that element it will always return to the next greater element  in the above array

/*
Q1 find the first occurrence of a X in a sorted array. If it does not exists, print -1


A[] = {1, 4,  4, 4 ,4, 9, 9, 10 , 11}

int ind = lower_bound(a, a+n, X) -a;

if(ind !=n && a[ind] ==X) cout << ind;
else cout << -1;


X = 4   1

X = 2   -1

X = 12  -1

Q2 find the last occurrence of a X in a sorted array. If it does not exists, print -1

A[] = {1, 4, 4, 4, ,4,9,9,10,11}

int ind = upper_bound(a,a+n , X) -a;
ind--;

if(ind >= 0 && a[ind] == X) cout << ind;
else cout << -1;


X = 4        1

X = 2       -1

X = 0       -1



Q3 Find the largest number smaller than X in a sorted array. If no number exist print -1

A[] = {1,4,4,4,4,9,10,11}

int ind = lower_bound(a, a+n, X)-a;
ind--;

if(ind>=0 ) cout << a[ind];
else cout << -1;


X = 4       1

X = 2       1

X = 1       -1


Q4. Find the smallest number greater than X in a sorted array. If the no number exist print -1.

A[] = {1, 4, 4, 4, 4 ,9, 9, 10, 11}

int ind = upper_bound(a, a+n , X) - a;

if(ind<n) cout << a[ind];
else cout << -1;

X = 4   - 9

X = 2   - 4

X = 1   - 4

*/

/*

As of know i understood that
consider this array

a[] = { 1 ,2, 3 ,4, 4, 9}

int ind = lower_bound(a, a + n, 4) - a;

So here it's says if 4 is found in array so it returns 4 if not then its iterator points to next location in the array

int ind = upper_bound(a, a + n, 4) - a;

So here its say if 4 is found in array so it return its next immediate element in the array simple

*/