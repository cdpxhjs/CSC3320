def guessKey(text):
    num=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    alphabet="abcdefghijklmnopqrstuvwxyz"

    for l in text:
        if l in alphabet:
            index=alphabet.find(l)#find the index in alphabet chart
            num[l]+=1

    first_max=0
    fitst_index=0
    for j in range(26):
        if(first_max < num[j]):
            first_max = num[j]
            first_index=j
    
    key=first_index-4
    if(key<0):
        key+=26

    return key

filename=input("Enter the file name: ")
text=open("{0}".format(filename)).read()
key = guessKey(text)
print("The key is: {0}".format(key))
