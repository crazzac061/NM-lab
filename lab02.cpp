#include <iostream>
#include <cmath>
using namespace std;


float SumX(float x[], int n)
{
   float  sumX=0;
  for (int i=0; i<n;i++)
  {
    sumX=sumX+x[i];
  }
  return sumX;
}
float SumY(float y[], int n)
{
   float  sumY=0;
  for (int i=0; i<n;i++)
  {
    sumY=sumY+y[i];
  }
  return sumY;
}
float SumXY (float x[],float y[], int n)
{
    float sumXY=0;
    for  (int i=0;i<n;i++)
    {
        sumXY=sumXY+(x[i]*y[i]);
    }
    return sumXY;
}
float SumX2( float x[],int n)
{
    float sumX2=0;
    for (int i=0; i<n;i++)
    {
        sumX2= sumX2+ x[i]*x[i];
    }
    return sumX2;
}
int main()
{
    int n;
    float *arrx, *arry,sx,sy,sxy,sx2,d,a,b,*lny;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    arrx= new float [n];
    arry= new float [n];
    lny=new float [n];
    cout<<"enter the elements for x"<<endl;
    for (int i=0; i<n;i++)
    {

        cin>>arrx[i];
    }
    cout<<"enter the elements for y"<<endl;
    for (int i=0; i<n;i++)
    {
        cin>>arry[i];
        lny[i]= log(arry[i]);

    }

    sx=SumX(arrx, n);
    sy=SumY(lny,n);
    sxy=SumXY(arrx,lny,n);
    sx2=SumX2(arrx,n);
    d= (n*sx2)-(sx*sx);
    if (d==0)
    {
       cout<<"Error: divison by zero!!"<<endl;
    }
    else
    {
        a= ((sy*sx2)-(sx*sxy))/d;
        b=((n*sxy)-(sx*sy))/d;
        cout<<"Y="<<exp(a)<<"+"<<b<<"x";
    }
    
    delete []arrx;
    delete []arry;
    return 0;

    

}

