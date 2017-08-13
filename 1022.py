def mdc(m, n):
    if(n == 0):
        return m
    else:
        return mdc(n, m%n)


n = int(input())

#indexes 0, 2, 4 e 6 possuem os operandos
#index 3 possui o operador
nr = 0
dr = 0

for i in range(n):
    expression = input().split(" ")
    n1 = int(expression[0])
    d1 = int(expression[2])
    n2 = int(expression[4])
    d2 = int(expression[6])

    operator = expression[3]
    if(operator == "+"):
        nr = (n1*d2 + n2*d1)
        dr = (d1*d2)
    elif(operator == "-"):
        nr = (n1*d2 - n2*d1)
        dr = (d1*d2)
    elif(operator == "*"):
        nr = n1*n2
        dr = d1*d2
    else:
        nr = n1*d2
        dr = n2*d1
    
    ns = nr/(mdc(nr, dr))
    ds = dr/(mdc(nr, dr))

    print(str(nr)+"/"+str(dr) + " = " + str(int(ns))+"/"+str(int(ds)))