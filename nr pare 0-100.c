int main() {

    int i=1;
    int n=100;

    printf("Print all even numbers from 1 to %d\n",n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }

       return 0;
}
