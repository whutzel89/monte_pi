//
//  main.c
//  Monte_Carlo_Pi
//
//  Created by William Hutzel on 4/10/20.
//  Copyright © 2020 William Hutzel. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int seed;
    int Ntot=0, Nmax=100000000  ;
    double x,y,r,area,Ncirc=0,Nbox=0;
    FILE *output = fopen("/Users/whutzel/Documents/practice/Monte_Carlo/pi.dat","w");
    seed = rand();
    srand48(seed);
    while (Ntot<Nmax){
        x=(drand48()-.5)*2;
        y=(drand48()-.5)*2;
        r=pow(x,2)+pow(y,2);
        if (r<=1){
            Ncirc=Ncirc+1;
        }//Ncirc
        else{
            Nbox=Nbox+1;
        }//Nbox
        Ntot=Ntot+1;
        fprintf(output,"%f\t%f\t\n",x,y);
    }//monte carlo while loop
    area=(Ncirc/(Ncirc+Nbox))*4;
    printf("our approximation of pi is: %f\n",area);
    return 0;
}
