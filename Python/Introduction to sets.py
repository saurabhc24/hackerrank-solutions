def average(array):
    # your code goes here
    return sum(set(array))/len(set(array)) #using set method to remove the duplicates, finding their sum and then dividing with total number of distinct elements
    
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
