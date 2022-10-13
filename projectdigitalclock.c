#include<stdio.h>
#include<windows.h>

int main(){
    int h,m,s;
    int d=1000;//we are add the delay of 1000 millisecond and we will use if in the function sleep.
    printf("\nSet Time:");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>59 || s>59){
            printf("\nError!");
            exit(0);
        }
    while(1)//create infinite loop to repet the program to many time.
    {
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        printf("\nClock:");
        printf("\n%02d:%02d:%02d",h,m,s);//the function sleep slowdown the while 00:00:00 
        //loopand make more like the a real clock  
        sleep(d);
        system("cls");
    }
    return 0;
}