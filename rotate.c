void rotate(double *a, double *b)
{
    if (*b < *a){
        double temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
}