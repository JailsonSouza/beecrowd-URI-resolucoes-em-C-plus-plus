hi, hf = input().split(" ")
hi = int(hi)
hf = int(hf)
if (hi > hf):
  print('O JOGO DUROU',((24 - hi) + hf),'HORA(S)')
elif (hi < hf):
  print('O JOGO DUROU',(hf-hi),'HORA(S)')
else:
  print('O JOGO DUROU 24 HORA(S)')