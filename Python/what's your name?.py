#
# Complete the 'print_full_name' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING first
#  2. STRING last
#

def print_full_name(first, last):
    # Write your code here
    print("Hello",first,last+"! You just delved into python.") #using '+' instead of ',' as the ',' introduces a space between the strings concatendated, which is not required before '!'
    #using ',' before '!' in the string will print "Hello Ross Taylor ! You just delved into python." which is incorrect according to given test case.
    
    
if __name__ == '__main__':
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)
