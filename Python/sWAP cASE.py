def swap_case(s):
    return "".join([i.lower() if i.isupper() else i.upper() for i in s]) #usign string method join() which will return it in the form of combined string

if __name__ == '__main__':
    s = raw_input()
    result = swap_case(s)
    print result
