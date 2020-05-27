

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) 
{
    int i,sum=0;
   for(i=0;i<number_of_students;i=i+2)
  {       if(gender=='b')
                  sum=sum+*(marks+i);
          if(gender=='g')
                  sum=sum+*(marks+i+1);
        }
  return sum;
}

