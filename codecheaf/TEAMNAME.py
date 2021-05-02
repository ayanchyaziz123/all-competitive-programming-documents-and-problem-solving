import sys


def go(a, b):
    s = len(set(a+b))
    return s
if __name__ == "__main__":
    sys.stdin = open("input.txt", "r")
    for _ in range(int(input())):
        s = int(input())
        st = str(input())
        arr = st.split()
        body = {}
        for i in arr:
            p=i[1:]
            if p in body:
                body[p].append(i[0])
            else:
                body[p]=[i[0]]
        body1=list(body.keys())
        s=0
        for i in range(len(body)):
            for j in range(i+1, len(body)):
                temp = go(body[body1[i]], body[body1[j]])
                s += (temp-len(body[body1[i]])) * (temp-len(body[body1[j]]))
        s = s * 2
        print(s)