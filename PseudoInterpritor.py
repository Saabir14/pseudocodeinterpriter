from sys import argv, executable
argc = len(argv)
from subprocess import check_call

# pconst is required
try:
    from pconst import const
except ModuleNotFoundError:
    # Install pconst if not installed
    check_call([executable, '-m', 'pip', 'install', 'pconst'])
    from pconst import const



def main():
    while True:
        line = input('|-- ')
        x = pseudocheck(line)



def pseudocheck(script):
    """
    Checks if script in pseudocode works
    Returns -1 if no error
    Returns a naturel number pointing to the first charector in the syntax error
    """
    n = 0
    while n < len(script): pass



main()