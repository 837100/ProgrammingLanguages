gcd(U, 0, U).
gcd(U, V, X) :- V > 0, W is U mod V, gcd(V, W, X).