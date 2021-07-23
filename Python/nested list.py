markslist = []
for _ in range(0,int(input())):
    markslist.append([input(), float(input())])

# markslist.sort()
# print(marksheet)
# >>>[['Akriti', 41.0], ['Berry', 37.21], ['Harry', 37.21], ['Harsh', 39.0], ['Tina', 37.2]]

second_high = sorted(list(set([marks for name, marks in markslist])))[1] #selecting the second highest marks by sorting, making a set (unique elements) and choosing the index 1

# >>>print(second_high)
# 37.21 (for the test cases)

second_students=sorted([name for name,marks in markslist if marks==second_high])  #now making a sorted list of students names and checking which names have marks as second higest
    
for name in second_students:
        print(name)

#instead  of above for loop and making another sorted name list, we can use the join function and list comprehension to make it in one line
#print('\n'.join(name for name,marks in sorted(markslist) if marks == second_high))






