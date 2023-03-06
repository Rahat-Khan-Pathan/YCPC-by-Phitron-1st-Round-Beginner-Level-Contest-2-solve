words=input()
s=""
ans=[]
for word in words:
    if word.isdigit():
        a=int(word)
    elif word.isalpha():
        s+=word
    else:
        while a>0:
            a-=1
            ans.append(s)
        s=""
        ans.append(word)
if(len(s)>0):
    while a>0:
        a-=1
        ans.append(s)
for c in ans:
    print(c,end="")
