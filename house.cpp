#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class house{
const int width= 40, hight= 32;
int x, y,k,p,h,L,R ,doorx, doory,lcx,lcy, rcx,rcy;
int windowx, windowy, rwindowx, rwindowy;
int t;
char c;
public :
void setup(){
    x= width/2;
    t=0;
    k=0;
    p=0;
    h=0;
    lcx=0;
    L=0;
    R=0;
    lcy=16;
    rcx=width-2;
    rcy=16;
    y= width/2;
    windowx=(width/2)-6;
    windowy=8;
    rwindowx=(width/2)+1;
    rwindowy=8;
    doorx=(width/2)+1;
    doory=25;
    c='O';
}
void drow();

};
void house :: drow(){

    cout<< endl;
    for(int i=0; i< hight ; i++){
        for(int j= 0; j<width; j++){

            if(j>x&& j<y ){
            if(j == windowx && i == windowy){
            cout<<" ";
            if(k<=8){
            windowx ++;
            k++;
            if(k == 5){
    
                windowx=(width/2)-6;
                windowy++;
                if(windowy!=11){
                k=0;
                }
            }
            }
        }
        else if(j == rwindowx && i== rwindowy){
            cout<<" ";
            if(p<=8){
                rwindowx++;
                p++;
                if(p == 5){
        
                    rwindowx=(width/2)+1;
                    rwindowy++;
                    if(rwindowy!=11){
                    p=0;
                    }
                }
                }
        }
            else if(j== doorx && i== doory){
                if(j== (width/2)+8 && i== 27){
                    cout<<"*";
                }
                else{
                cout<<" ";
                }
            if(h<10){
              doorx++;
              h++;
              if(h==9){
                doorx=(width/2)+1;
                doory++;
                h=0;
              }
            }
            }
            else if(j== lcx && i== lcy){
           cout<<" ";
           if(L<=2){
            lcx ++;
            L++;
            if(L==2){
              lcx=0;
              lcy++;
              L=0;
            }
           }
            }
            else if(j== rcx && i==rcy){
                cout<<" ";
                if(R<=2){
                    rcx++;
                    R++;
                    if(R==2){
                        rcy++;
                        rcx=width-2;
                        R=0;
                    }
                }
            }
        else 
           {
            cout<<c;
            Sleep(1);
           }
        }
     
else{
    cout<<" ";
}
        }
        cout<<endl;
        t++;
        y++;
        x--;
        if(t==2){
        y++; 
        x--;
        t=0;
        }
      
    }

}
int main(){
    house h;
    h.setup();
    h.drow();   
    Sleep(2000);

}