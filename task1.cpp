#include <iostream>
#include <stdio.h>
#include <fstream>

    int main() {
        std::ofstream text1;
        text1.open("text1.txt");
        text1 << "1,2,3,4,5,6,7,8,9,0,q,w,e,r,t,y,u,i,o,p,a,s,d,f,g,h,j,k,l,z,x,c,v,b,n,m,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25\n";
        text1.close();
        
        std::ofstream text2;
        text2.open("text2.txt");
        text2 << "this is true, this is false, char, unsigned, double, square, extern, cmake, make, cclang, build\n";
        text2.close();



        return 0;
    }