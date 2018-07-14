def countdown(i):
    print(i)
    if i <= 0:  # 基线条件
        return
    else:  # 递归条件
        countdown(i - 1)


def fact(x):
	y = int(x)
    if y == 1:
        return 1
    else:
        print(y * fact(x - 1))


fact(3)
