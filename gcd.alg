PROC gcd = (INT a, b) INT: (
    IF b = 0 THEN
        a
    ELSE
        gcd(b, a MOD b)
    FI   
);
main:(
    INT a = 54, b = 96;
    printf(($x"GCD("g", "g") is "gl$,a,b,gcd(a,b)))
)

# https://www.tutorialspoint.com/compilers/online-algol-compiler.htm