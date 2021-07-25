def mutate_string(string, position, character):
    return"".join(list(string[:position]+character+string[position+1:])) 
  #first converting the string into list and then using slice [:] to add the desired character at the required position, then using join() string method to convert it back to string

if __name__ == '__main__':
    s = raw_input()
    i, c = raw_input().split()
    s_new = mutate_string(s, int(i), c)
    print s_new
