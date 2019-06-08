def function(x):
    if x < 0:
        return x * 2
    else:
        return x * 3


def main():
    for i in range(-3, 4):
        y = function(i)
        print('function(', i, ') = ', y, sep='')


if __name__ == '__main__':
    main()