test_case = int(input())
l = [2010, 2015, 2016, 2017, 2019]
for k in range(test_case):
    n = int(input())
    if n in l:
        print("HOSTED")
    else:
        print("NOT HOSTED")