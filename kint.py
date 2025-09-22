from turtle import *

def interpret(pgm):
    t = Turtle()

    for instr in pgm:
        if instr == 'L':
            t.left(60)
        elif instr == 'R':
            t.right(120)
        else:
            print('Syntax error near "{}"'.format(instr))
    t.hideturtle()
    exitonclick()

import sys

if len(sys.argv) < 2:
    print('Usage: {} {}'. format(sys.argv[0], 'koch_pgm'))
else: 
    infile = open(sys.argv[1], 'r')
    pgm = infile.readline().strip()
    interpret(pgm)
    infile.close()