int Solution::reverse(int A) {
    long long int i,j,k=0,y,c=0;

if(A<0)
{
    k=1;
    A=-A;
}

while(A>0)
{
    int r=A%10;
    c=c*10+r;
    A=A/10;
}
if(k==1)
c=-c;

if(-2147483648 > c)
return 0;

if(2147483647 < c)
return 0;



return c;

}

