nome = raw_input()
s_fixo = eval(raw_input())
total_vendido = eval(raw_input())

s_total = s_fixo + (total_vendido*(15.0/100.0))

print("TOTAL = R$ %.2f" % round(s_total, 2))