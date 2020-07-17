max=0
ori_num=0
rev_num=0
num=0
remainder=0
for i in range(10,100):
    for j in range(100,1000): #num=product, rev_num=reversed product, ori_num=original product
        num = i * j
        ori_num = num
        while(num != 0):
            remainder = (num % 10)
            rev_num = (rev_num * 10) + remainder
            numb = num/10
            num = int(numb)
        if(ori_num == rev_num and ori_num > max):
            max = ori_num
        rev_num=0 #reset

print("The largest palindrome is {0}".format(max))