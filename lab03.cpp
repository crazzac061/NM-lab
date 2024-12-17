#include <iostream>
#include <cmath>

using namespace std;

float compFunc(float x)
{
    return (sin(x)*cos(x)/2);    //Function must be changed manually
}
float compMean (float x1, float x2)
{
    return (x1 + x2) / 2;   
}
void bisection(float x1, float x2)
{
    float c;
    int count=0;
    do 
    {
        if (compFunc(x1) * compFunc(x2) > 0)
        {
            cout << "Root is not bracketed" << endl;
            return;
        }
        c = compMean(x1, x2);
        if (compFunc(c) == 0)
        {
            cout << "Root is " << c << endl;
            return;
        }
        if (compFunc(c) * compFunc(x1) < 0)
        {
            x2 = c;
        }
        else
        {
            x1 = c;
        }
        count++;

    }while (abs(compFunc(c)) > 0.001 && count < 100);
    if (count == 100)
    {
        cout << "Root is not found" << endl;
    }
    cout << "Number of iterations: " << count << endl;
    cout << "Root is " << c << endl;

}
int main()
{
    float x1, x2;
    cout<<"enter the lower limit and upper limit of the bracket: "<<endl;
    cin>>x1>>x2;
    bisection(x1, x2);
    return 0;
}