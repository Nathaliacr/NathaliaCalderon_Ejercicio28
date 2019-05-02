#include <fstream>
#include <iostream>
#include <string.h>
using namespace std; 

int main(){


double k=200.;
double c=900.;
double rho=2700.;
double dt=0.5;
double dx=0.01;
double L=2.;
int i=0;
double t=0.;
ofstream outfile;

double old[201];
double vnew[101];

for (i=0;i<101;i++){

        if ((i>0)&&(i<81)){
                  old[i]=300.0;    
            }
        if((i>119)&&(i<201)){
        
            old[i]=300.0;
        }
         else{
                old[i]=500.0;    
            }
          }

  while(t<100){
    
      for (i=0;i<201;i++){

            if((i>0)&&(i<201)){

                vnew[i]=old[i]+dt*k*(old[i+1]+old[i-1]+2*old[i])/dx*dx*rho*c;           
            }
          
          t=t+dt;          
      }
      
      outfile.open("ej.dat");
      
      for (i=0;i<201;i++){
                
          outfile << vnew[i] << " " << i << endl;
                
          old[i]=vnew[i];           
       
      }
      
      outfile.close();
      }
return 0;

}