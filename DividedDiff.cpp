#include<bits/stdc++.h>
using namespace std;
double y[100][100];
class DividedDiff
{
private:
    /* data */
public:
   void dividedDiff(int n, double x[]){
       for(int i = 1; i<n; i++)
       {
           for(int j = 0; j< n-i; j++){
               y[j][i] = (y[j][i-1] - y[j+1][i-1]) / (x[j] - x[j+i]);
           }

       }
   }
   void print(int n){
       for(int i = 0; i<n; i++){
           for(int j = 0;j<n-i; j++){
               cout<< setprecision(4) <<y[i][j]<<"  ";
           }
           cout<<endl;
       }
   }

   double solve(double x[], int n, double value){
       double ans = y[0][0];
       for(int i = 1; i < n; i++){
           ans += y[0][i]*proterm(i,x,value);
       }
       return ans;
   }
   double proterm(int n, double x[],double value){
       double temp = 1;
       for(int i = 0; i < n; i++)
       {
           temp *= (value-x[i]);
       }
       return temp;
   }
};



int main()
{
    int n;
    cin>>n;
    double x[n];
    for(int i = 0; i<n; i++){
        cin>>x[i];
        cin>>y[i][0];
    }
    double value;
    cin>>value; 
    DividedDiff df;
    df.dividedDiff(n,x);
    // cout<<"Divided diffrence table is: "<<endl;
    // df.print(n);
    cout<<"The ans is: "<<df.solve(x,n,value);
}