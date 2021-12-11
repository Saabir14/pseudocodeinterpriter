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
    prompt = '-'
    while True:
        args = input(prompt * 3 + ' ').split()
        
        for n in len(args)



main()