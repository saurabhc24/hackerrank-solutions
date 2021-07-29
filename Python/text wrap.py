import textwrap

def wrap(string, max_width):
    #write your code here
    return textwrap.fill(string,max_width) #using fill() method of textwrap package to print the string in new lines (Given in tutorial section)

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
