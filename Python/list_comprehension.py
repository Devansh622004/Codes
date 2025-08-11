if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    lst = [(x, y, z) for x in range(0, n) for y in range(0, n) for z in range(0, n)]

    for item in lst:
        print(item)