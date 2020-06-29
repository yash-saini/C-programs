#code
print("GfG")
def main():
    s=raw_input()
    flag=[0]
    s1=''
    for i in xrange(len(s)):
        if s[i]=='+':
            if flag[-1]==1:
                s1+='-'
            else:
                s1+='+'
        elif s[i]=='-':
            if flag[-1]==1:
                s1+='+'
            else:
                s1+='-'
        elif s[i]=="(" and i>0:
            if s[i-1]=='-':
                flag.append(1)
            else:
                flag.append(0)
        elif s[i]==")":
            del flag[-1]
        else:
            s1+=s[i]
    print s1
main()

