def f():
    critical_op() # can raise an exception

def main():
    critical_op() # can raise an exception
    f()
    
if __name__ == '__main__':
    main()
    print('done')
