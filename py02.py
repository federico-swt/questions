import sys

def f():
    critical_op() # can raise Exception

def g():
    critical_op() # can raise Exception

def main():
    critical_op() # can raise Exception
    f()
    g()
    
if __name__ == '__main__':
    main()
    sys.exit(0)
