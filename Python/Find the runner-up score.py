if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    b=list(arr) #converting to list
    b.sort() #sorting the list
    b = list(dict.fromkeys(b)) #removing the duplicated
        
    print(b[-2])
