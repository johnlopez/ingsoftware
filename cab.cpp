#include <cstdlib>
#include <iostream>
#include <time.h>
#include<stdlib.h>
using namespace std;

int azar()
{
    int n = 0;
    srand(time(NULL));    
    
    long num=(rand()%8)+1;
    return num;
}

int main(int argc, char *argv[])
{
    
    int A[100][100];
    int i=0,j=0,n=0;
    int az=0;
    int x,y;
    
    
    for (i=1;i<=8;i++)
    {    for (j=1;j<=8;j++)
         { 
             A[i][j]=0;
         }
    }
    for (i=1;i<=8;i++)
    {    for (j=1;j<=8;j++)
         {   if(j==8)
             {  cout<<A[i][j]<<endl;//"["<<i<<"]"<<"["<<j<<"]"<<endl;
             }
             else
             {  cout<<A[i][j]<<" ";//"["<<i<<"]"<<"["<<j<<"]"<<" ";
             }
         }
    }


    x=1;
    y=1;
    A[1][1]=1;
    while(n!=1000)
    {  
       az=azar();
       cout<<az<<endl;
       if(az==1)
       {
         if(x+2<=8 && x+2>=1 && y+1<=8 && y+1>=1)
         {
            x=x+2;
            y=y+1; 
            A[x][y]=1;           
            cout<<x<<"-"<<y<<endl;
            system("pause");
            system("CLS");
         }
         else
         {   
             cout<<x<<"-"<<y<<endl;
             system("pause");
            system("CLS");
         }
         
       }
       
       if(az==2)
       {         
         if(x+2<=8 && x+2>=1 && y-1<=8 && y-1>=1)
         {  
            x=x+2;
            y=y-1;
            A[x][y]=1;
            cout<<x<<"-"<<y<<endl;
           system("pause");
            system("CLS");
         }
         else
         {   
             cout<<x<<"-"<<y<<endl;
             system("pause");
            system("CLS");
         }
       }
       
       if(az==3)
       {
         if(x-2<=8 && x-2>=1 && y+1<=8 && y+1>=1)
         { 
           x=x-2;
           y=y+1;
           A[x][y]=1;
           cout<<x<<"-"<<y<<endl;
           system("pause");
            system("CLS");
         }
         else
         {   
             cout<<x<<"-"<<y<<endl;
             system("pause");
            system("CLS");
         }
       }
       if(az==4)
       {
         if(x-2<=8 && x-2>=1 && y-1<=8 && y-1>=1)
         { 
           x=x-2;
           y=y-1;
           A[x][y]=1;
           cout<<x<<"-"<<y<<endl;
           system("pause");
            system("CLS");
         }
         else
         {   
             cout<<x<<"-"<<y<<endl;
             system("pause");
            system("CLS");
         }
       }
       if(az==5)
       {
         if(x-1<=8 && x-1>=1 && y+2<=8 && y+2>=1)
         { 
           x=x-1;
           y=y+2;
           A[x][y]=1;
           cout<<x<<"-"<<y<<endl;
          system("pause");
            system("CLS");
         }
         else
         {   
             cout<<x<<"-"<<y<<endl;
             system("pause");
            system("CLS");
         }
       }
       if(az==6)
       {
         if(x+1<=8 && x+1>=1 && y+2<=8 && y+2>=1)
         { 
           x=x+1;
           y=y+2;
           A[x][y]=1;
           cout<<x<<"-"<<y<<endl;
           system("pause");
            system("CLS");
         }
         else
         {   
             cout<<x<<"-"<<y<<endl;
             system("pause");
            system("CLS");
         }
       }
       if(az==7)
       {
         if(x-1<=8 && x-1>=1 && y-2<=8 && y-2>=1)
         { 
           x=x-1;
           y=y-2;
           A[x][y]=1;
           cout<<x<<"-"<<y<<endl;
           system("pause");
            system("CLS");
         }
         else
         {   
             cout<<x<<"-"<<y<<endl;
             system("pause");
            system("CLS");
         }
       }
       if(az==8)
       {
         if(x+1<=8 && x+1>=1 && y-2<=8 && y-2>=1)
         { 
           x=x+1;
           y=y-2;       
           A[x][y]=1;
           cout<<x<<"-"<<y<<endl;
           system("pause");
            system("CLS");
         }
         else
         {   
             cout<<x<<"-"<<y<<endl;
             system("pause");
            system("CLS");
         }
       }
                     
       
       n++;
       
       for (i=1;i<=8;i++)
       {    for (j=1;j<=8;j++)
            {   if(j==8)
                {  cout<<A[i][j]<<endl;//"["<<i<<"]"<<"["<<j<<"]"<<endl;
                }
                else
                {  cout<<A[i][j]<<" ";//"["<<i<<"]"<<"["<<j<<"]"<<" ";
                }
            }
       }
       system("PAUSE");            
    }
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

