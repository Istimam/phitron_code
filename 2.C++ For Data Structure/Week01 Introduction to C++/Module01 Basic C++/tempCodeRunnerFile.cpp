 *a,int *b)
{
    /*call by reference*/
    int tmp=*a;
    *a=*b;
    *b=tmp;
}