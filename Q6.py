int_num=input("Enter your number: ")
num=int(int_num)
if(num<10):#smaller than 10
    if(num == 0):
        print("zero")
    elif(num == 1):
        print("one")
    elif(num == 2):
        print("two")
    elif(num == 3):
        print("three")
    elif(num == 4):
        print("four")
    elif(num == 5):
        print("five")
    elif(num == 6):
        print("six")
    elif(num == 7):
        print("seven")
    elif(num == 8):
        print("eight")
    elif(num == 9):
        print("nine")
elif(num<100):
    tens=(int)(num/10)
    units=(int)(num%10)
    if(tens == 1):
        if(units == 0):
            print("ten")
        elif(units == 1):
            print("eleven")
        elif(units == 2):
            print("twelve")
        elif(units == 3):
            print("thirteen")
        elif(units == 4):
            print("fourteen")
        elif(units == 5):
            print("fifteen")
        elif(units == 6):
            print("sixteen")
        elif(units == 7):
            print("seventeen")
        elif(units == 8):
            print("eighteen")
        elif(units == 9):
            print("nineteen")
        exit()

    elif(tens==2):
        print("twenty",end="")	
    elif(tens == 3):
        print("thirty",end="")
    elif(tens == 4):
        print("forty",end="")
    elif(tens == 5):
        print("fifty",end="")
    elif(tens == 6):
        print("sixty",end="")
    elif(tens == 7):
        print("seventy",end="")
    elif(tens == 8):
        print("eighty",end="")
    elif(tens == 9):
        print("ninety",end="")

    if(units == 0):
        print("")
    elif(units == 1):
        print("-one")
    elif(units == 2):
        print("-two")
    elif(units == 3):
        print("-three")
    elif(units == 4):
        print("-four")
    elif(units == 5):
        print("-five")
    elif(units == 6):
        print("-six")
    elif(units == 7):
        print("-seven")
    elif(units == 8):
        print("-eight")
    elif(units == 9):
        print("-nine")
else:
    print("OUT OF RANGE")
