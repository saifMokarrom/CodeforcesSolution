import math
def check_move():
    t = int(input())
    for i in range(t):
        n = int(input())
        move = 0
        temp=True
        while (n != 1):
            n/=6
            move+=1
            f,w=math.modf(n)
            if(f==0.5):
                n*=2
                move+=1
            elif (f!=0.0):
                print("-1")
                temp=False
                break
        if temp:
            print(move)
 
check_move()