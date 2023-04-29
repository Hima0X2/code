#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    //E
 for(i=1; i<=4; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    cout<<"*\n";
    for(i=1; i<4; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    cout<<"*\n";
    for(i=1; i<=4; i++)
    {
        cout<<"* ";
    }
    cout<<"\n\n";
    //I
    for(i=1; i<=5; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j==3)
            {
                cout<<"*";
                break;
            }
            else{
               cout<<" ";
            }
        }
        cout<<endl;
    }
     for(i=1; i<=5; i++)
    {
        cout<<"*";
    }
     cout<<"\n\n";
     //D
     for(i=1; i<=5; i++)
    {
        cout<<"*";
    }
    cout<<endl;
     for(i=1; i<=5; i++)
    {
        for(j=1; j<=7; j++)
        {
            if(j==1||j==7)
            {
                cout<<"*";
            }
            else{
               cout<<" ";
            }
        }
        cout<<endl;
    }
     for(i=1; i<=5; i++)
    {
        cout<<"*";
    }
    cout<<"\n\n";
    //M
    for(i=0;i<12;i++){
          if(i==0||i==1||i==10||i==11){
           cout<<"*";
          }
          else{
               cout<<" ";
          }
    }
    cout<<endl;
     for(i=0;i<12;i++){
          if(i==0||i==2||i==9||i==11){
           cout<<"*";
          }
          else{
               cout<<" ";
          }
    }
     cout<<endl;
     for(i=0;i<12;i++){
          if(i==0||i==3||i==8||i==11){
           cout<<"*";
          }
          else{
               cout<<" ";
          }
    }
     cout<<endl;
     for(i=0;i<12;i++){
          if(i==0||i==4||i==7||i==11){
           cout<<"*";
          }
          else{
               cout<<" ";
          }
    }
     cout<<endl;
     for(i=0;i<12;i++){
          if(i==0||i==5||i==6||i==11){
           cout<<"*";
          }
          else{
               cout<<" ";
          }
    }
    cout<<"\n\n";
    //U
    for(j=0;j<5;j++){
    for(i=0;i<=6;i++){
     if(i==0||i==6){
          cout<<"*";
     }
     else{
          cout<<" ";
     }
    }
    cout<<endl;
    }
    cout<<"* ";
    cout<<"* ";
    cout<<"* ";
    cout<<"* \n\n";
//B
for(i=0;i<4;i++){
  cout<<"* ";
}
cout<<"\n";
for(i=0;i<5;i++){
     for(j=0;j<7;j++){
          if((i==0&&j==6)||(i==0&&j==0)){
               cout<<"* ";
          }
          else if((i==1&&j==6)||(i==1&&j==0)){
              cout<<"*";
         }
     else if((i==2&&j==0)||(i==2&&j==1)||(i==2&&j==2)||(i==2&&j==3)||(i==2&&j==4)){
              cout<<"*";
         }
        else if((i==3&&j==0)){
               cout<<"*      *";
          }
          else if((i==4&&j==6)||(i==4&&j==0)){
              cout<<"*";
         }
          else{
               cout<<" ";
          }
     }
     cout<<endl;
}
for(i=0;i<4;i++){
  cout<<"* ";
}
cout<<"\n\n";
//A
for(i=1;i<=7;i++){
     for(j=1;j<=5;j++){
          if(i==1){
               cout<<"*";
          }
          else if((j==1&&i==2)||(i==2&&j==5)){
                cout<<"*";
          }
          else if((j==1&&i==3)||(i==3&&j==5)){
                cout<<"*";
          }
          else if(i==4){
                cout<<"*";
          }
           else if((j==1&&i==5)||(i==5&&j==5)){
                cout<<"*";
          }
          else if((j==1&&i==6)||(i==6&&j==5)){
                cout<<"*";
          }
          else{
               cout<<" ";
          }
     }
     cout<<endl;
}
for(i=0;i<4;i++){
  cout<<"* ";
}
cout<<"\n";
for(i=0;i<=5;i++){
     for(j=0;j<7;j++){
          if((i==0&&j==6)||(i==0&&j==0)){
               cout<<"* ";
          }
          else if((i==1&&j==6)||(i==1&&j==0)){
              cout<<"*";
         }
     else if((i==2&&j==0)||(i==2&&j==1)||(i==2&&j==2)||(i==2&&j==3)||(i==2&&j==4)){
              cout<<"*";
         }
           else if((i==3&&j==6)||(i==3&&j==0)){
              cout<<"*";
         }
           else if((i==4&&j==6)||(i==4&&j==0)){
              cout<<"*";
         }
           else if((i==5&&j==6)||(i==5&&j==0)){
              cout<<"*";
         }
          else{
               cout<<" ";
          }
     }
     cout<<endl;
}
cout<<"\n";
//A
for(i=1;i<=7;i++){
     for(j=1;j<=5;j++){
          if(i==1){
               cout<<"*";
          }
          else if((j==1&&i==2)||(i==2&&j==5)){
                cout<<"*";
          }
          else if((j==1&&i==3)||(i==3&&j==5)){
                cout<<"*";
          }
          else if(i==4){
                cout<<"*";
          }
           else if((j==1&&i==5)||(i==5&&j==5)){
                cout<<"*";
          }
          else if((j==1&&i==6)||(i==6&&j==5)){
                cout<<"*";
          }
          else{
               cout<<" ";
          }
     }
     cout<<endl;
}
int k=5;
for(i=1;i<=9;i++){
     for(j=0;j<=10;j++){
               if(j==1&&i==5){
                    cout<<"*";
               }
          if(j==0||j==k){
               cout<<"*";
          }
          else{
               cout<<" ";
          }
     }
     if(i<=4){
               k--;
          }
          else if(i<=11){
               k++;
          }
       cout<<endl;
}
}
