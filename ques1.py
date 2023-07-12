def ismember(a,b):
    if b in a:
        print(b,"is present in set")
    else:
        print("Not present")

def powerset(a):
    e=[]
    num=len(a)
    for i in range(0,2**num):
        d=[]
        count=0
        while i!=0:
            c=i%2
            i//=2
            if c==1:
                d.append(a[count])
            count+=1
        e.append(d)

    print("Power set= ",e)
    return e

def subset(a,b):
    f=powerset(a)
    if b in f:
        print("Yes ",b," is the subset of ",a)
    else:
        print("Not a subset")

def ui(a,b):
    c=[]
    d=[]
    for i in a:
        c.append(i)
    for i in b:
        if i not in a:
            c.append(i)

    for i in a:
        if i in b:
            d.append(i)

    print("Union of 2 sets is:- ",c)
    print("Intersection of 2 sets is:-",d)

def compliment(a,b):
    c=[]
    for i in a:
        if i not in b:
            c.append(i)
    print("Compliment of the given set is:- ",c)

def diff(a,b):
    print("Enter 1 for a-b and 2 for b-a")
    ch=int(input("Enter your choice"))
    c=[]
    if ch==1:
        for i in a:
            if i not in b:
                c.append(i)
        print(a," - ",b," = ",c)
    elif ch==2:
        for i in b:
            if i not in a:
                c.append(i)
        print(b," - ",a," = ",c)

    print("Symmetric difference of a and b")
    d=[]
    for i in a:
        if i not in b:
            d.append(i)
    for i in b:
        if i not in a:
            d.append(i)
    print(d)

def product(a,b):
    c=[]
    for i in a:
        for j in b:
            c.append((i,j))

    print("Cartiesian product :- ",c)



while True:
    print('1. check member')
    print('2. powerset')
    print('3. subset')
    print('4. union and intersection')
    print('5. compliment')
    print('6. difference and symmetric differnce')
    print('7. cartesian product')
    print('8. exit')
    ch=int(input("enter your choice"))
    if ch==1:
        a=eval(input("enter the set of element in form of list"))
        b=int(input("enter the element you want to check"))
        ismember(a,b)
    elif ch==2:
        a=eval(input("enter the set of element in form of list"))
        powerset(a)
    elif ch==3:
        a=eval(input("enter the set of element in form of list"))
        b=eval(input("enter the subset in form of list"))
        subset(a,b)
    elif ch==4:
        a=eval(input("enter set 1"))
        b=eval(input("enter set 2"))
        ui(a,b)
    elif ch==5:
        a=eval(input("enter the universal set"))
        b=eval(input("enter set for compliment"))
        compliment(a,b)
    elif ch==6:
        a=eval(input("enter set 1"))
        b=eval(input("enter set 2"))
        diff(a,b)
    elif ch==7:
        a=eval(input("enter set 1"))
        b=eval(input("enter set 2"))
        product(a,b)
    elif ch==8:break
    else: print("Enter correct choice")
    
    


            
