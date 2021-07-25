def split_and_join(line):
    # write your code here
    return "-".join(line.split()) #first splittng the string 'line' to remove the spaces and then using join() method
    

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
