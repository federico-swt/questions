import sys

# def critical():
#     if ...:
#         raise Exception
#     else:
#         ...

def f():
    critical()

def g():
    critical()

def main():
    critical()
    f()
    g()
    
if __name__ == '__main__':
    main()
    sys.exit(0)
