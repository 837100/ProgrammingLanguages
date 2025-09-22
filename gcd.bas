10 HOME
20 INPUT "Enter A: ";A : INPUT "Enter B: ";B
30 LET C = A - INT(A/B)*B
40 LET A = B : B = C
50 IF B > 0 GOTO 30
60 PRINT "GCD is ";A
70 END



# https://www.calormen.com/jsbasic/