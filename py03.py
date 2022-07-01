def pipe(x, *args):
    return x if len(args) == 0 else pipe(args[0](x), *args[1:])

result = pipe(2,
    lambda x: x*3,
    lambda x: x+1,
    lambda x: x*2
)

print(result)
