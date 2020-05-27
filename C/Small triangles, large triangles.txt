

double area(triangle t)
{
    double p = (t.a+t.b+t.c)/2.0;
    return sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
}

void sort_by_area(triangle* tr, int n) 
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(area(tr[j]) < area(tr[i]))
            {
                triangle temp = tr[i];
                tr[i]=tr[j];
                tr[j]=temp;
            }
        }
    }
}


