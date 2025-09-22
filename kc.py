import sys

prologue = '''
from turtle import *
def main():
    t = Turtle()
'''

epilogue = '''
    t.hideturtle()
    exitonclick()
main()
'''

def translate(ofile, pgm):
    for instr in pgm:
        if instr == 'F':
            tcode = 't.forward(50)'
        elif instr == 'L':
            tcode = 't.left(60)'
        elif instr == 'R':
            tcode = 't.right(120)'
        else:
            print('Syntax error near "{}"'.format(instr))
            sys.exit(1)
        ofile.write('    {}\n'.format(tcode))  # 공백 4개로 수정

if len(sys.argv) < 2:
    print('Usage: {} {}'.format(sys.argv[0], 'koch_pgm'))
else:
    ifile = open(sys.argv[1], 'r')
    ofile = open('a.py', 'w')
    pgm = ifile.readline().strip()
    ofile.write(prologue)
    translate(ofile, pgm)
    ofile.write(epilogue)
    ofile.close()
    ifile.close()