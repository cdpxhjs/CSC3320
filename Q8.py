def getNumber(num):
    count=0
    index=0
    length=len(num)
    for i in range(length):
        if(num[i]=='-'):
            count += 1
            index=i
    
    final=0
    if(count<=0):
        if(num=="zero"):
            final+=0
        elif(num=="one"):
            final+=1
        elif(num=="two"):
            final+=2
        elif(num=="three"):
            final+=3
        elif(num=="four"):
            final+=4
        elif(num=="five"):
            final+=5
        elif(num=="six"):
            final+=6
        elif(num=="seven"):
            final+=7
        elif(num=="eight"):
            final+=8
        elif(num=="nine"):
            final+=9
        elif(num=="ten"):
            final+=10
        elif(num=="eleven"):
            final+=11
        elif(num=="twelve"):
            final+=12
        elif(num=="thirteen"):
            final+=13
        elif(num=="fourteen"):
            final+=14
        elif(num=="fifteen"):
            final+=15
        elif(num=="sixteen"):
            final+=16
        elif(num=="seventeen"):
            final+=17
        elif(num=="eighteen"):
            final+=18
        elif(num=="nineteen"):
            final+=19
        elif(num=="twenty"):
            final+=20
        elif(num=="thirty"):
            final+=30
        elif(num=="forty"):
            final+=40
        elif(num=="fifty"):
            final+=50
        elif(num=="sixty"):
            final+=60
        elif(num=="seventy"):
            final+=70
        elif(num=="eighty"):
            final+=80
        elif(num=="ninety"):
            final+=90

    else:
        tens=num[0:index]
        units=num[index+1:len(num)]
        if(tens=="twenty"):
            final+=20
        elif(tens=="thirty"):
            final+=30
        elif(tens=="forty"):
            final+=40
        elif(tens=="fifty"):
            final+=50
        elif(tens=="sixty"):
            final+=60
        elif(tens=="seventy"):
            final+=70
        elif(tens=="eighty"):
            final+=80
        elif(tens=="ninety"):
            final+=90

        if(units=="one"):
            final+=1
        elif(num=="two"):
            final+=2
        elif(num=="three"):
            final+=3
        elif(num=="four"):
            final+=4
        elif(num=="five"):
            final+=5
        elif(num=="six"):
            final+=6
        elif(num=="seven"):
            final+=7
        elif(num=="eight"):
            final+=8
        elif(num=="nine"):
            final+=9

    return final


num1=input("Enter your first number: ")
num2=input("Enter your second number: ")
final=getNumber(num1)*getNumber(num2)
print("{0} * {1} = {2}".format(num1,num2,final))
