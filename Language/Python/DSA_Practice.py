# dsa striver must do pattern problem

#ques 1
def sq_pttr():
  num = int(input('enter your num:'))
  for i in range (0,num):
    for j in range (0,num):
      print('* ',end=" ")
    print('\n')
  return 

#ques 2
def tri_pttr():
  num= int(input("enter num:"))
  for i in range (0,num):
    for j in range (0,i+1):
      print('* ', end=' ')
    print('\n')
  return

#ques 14
def triAlp_pttr(): #alphabet pattern A AB ABC ...
  num= int(input("enter num:"))
  for i in range (65,num):
    for j in range (65,i+1):
      print(chr(j), end=' ')
    print('\n')
  return

#ques 3
def triNumPttr():
  num= int(input("enter num:"))
  for i in range (0,num+1):
    for j in range (1,i+1):
      print(j, end=' ')
    print('\n')
  return

#ques 4
def ques4():
  num= int(input("enter num:"))
  for i in range (0,num+1):
    for j in range (1,i+1):
      print(i, end=' ')
    print('\n')
  return

#ques 16
def ques16(): #alp pttr A BB CCC
  num= int(input("enter num:"))
  for i in range (65,65+num+1):
    for j in range (65,i+1):
      print(chr(i), end=' ')
    print('\n')
  return

#ques 5
def reverse_triangle_pattern(): # ***** / **** / ***...
  num= int(input("enter num:"))
  for i in range (num,0,-1):
    for j in range (0,i):
      print('* ', end=' ')
    print('\n')
  return

#ques 15 
def ques15(): # rev alp pttr ABCDE ABCD ...
  num= int(input("enter num:")) # for num of rows
  for i in range (ord('A')+num-1,ord('A')-1,-1):
    for j in range (ord('A'),i+1):
      print(chr(j), end=' ')
    print('\n')
  return

#ques 6
def RevTriNumPattern():
  num= int(input("enter num:"))
  for i in range (num,0,-1):
    for j in range (1,i+1):
      print(j, end=' ')
    print('\n')
  return

#ques 13
def ques13():
  a=1
  num= int(input("enter num:"))  # 1 /n 2 3 /n 4 5 6 
  for i in range (1,num+1):
    for j in range (0,i):
      print(a, end=' ')
      a=a+1
    print('\n')
  return

#ques prac
def Titlted_Star_Pattern():
  num= int(input("enter num:"))
  for i in range (num,0,-1):
    for j in range (0,i):
      print(' ', end=' ')
    for k in range (0,num):
      print("* ",end=' ')
    print('\n')
  return

def countDigit():
  num=int(input("enter num:"))
  count=0
  while num>0:
    count=count+1
    num=num//10
  print("dig",count)
  return 

def revNum(): # revnum and palindrome
  num=int(input("enter num: "))
  rem=0
  rev=0
  temp=num
  while num>0:
    rem = num%10
    rev = rev*10 + rem
    num = num//10
  print(rev)
  if (temp == rev):
    print("palindrome")
  return

#ques 7 
def ques7(): # star pyrmid
  num= int(input("enter num:"))
  for i in range (num,0,-1):
    for j in range (i,0,-1):
      print(' ',end="")
    for k in range(1,i+1):
      if (k%2!=0):
        print(k*'* ')
    
  return

#ques prac
def getDivisors():
  L1=[]
  num=int(input('enter num: '))
  for i in range (1,num+1):
    if(num%i==0):
      L1.append(i)
      print(i,end=' ')
  return L1

def isPrime():
  num = int(input("enter num: "))
  if (num <=1):
    print ("Not prime")
    return
  for i in range (2,num):
    if (num%i==0):
      print("Not prime")
      return
    else:
      print("it is prime")
      return 

# recusrion prac ques
def recursionTest(n):
  if (n==0):
    return None
  print('hello')
  n=n-1
  recursionTest(n)

def fact(n):
  if (n==1):
    return 1
  return n*fact(n-1)

def sumNaturalNum(n):
  if (n==1):
    return 1
  return n+sumNaturalNum(n-1)

def hcf(num1,num2):#comman fac +hcf
  L1=[]
  if (num1>num2):
    max=num1
  else: max=num2
  for i in range (1,max):
    if (num1%i ==0 and num2%i==0):
      L1.append(i)
  return L1[-1]

def is_armstrg():
  num=int(input('enter num: '))
  temp=num
  arm=0
  while num>0:
    rem = num%10
    arm= arm + rem**3
    num = num//10
  if (arm == temp):
    print("it is armstrg")
  else: print('not armstrg')
  return


def main():
  test()
  
  return 

main()