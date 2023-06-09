#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897
#define max(x,y) x>y?x:y
#define min(x,y) x<y?x:y
#define get getchar_unlocked
double MaxVolume(double W,double H)
{
 double r=min(W/PI,2*H/3);
 double Ans=PI/4*r*r*(H-r);
 double hp=H/(PI+1);
 double D=min(W/2,hp);
 if(2*hp-W>0)
 {
 double wp=W/((PI+1)*(PI+1));
 double Temp=min(W,hp+wp-sqrt(wp*(wp+2*hp-W)));
 D=max(D,Temp);
 }
 Ans=max(Ans,PI/4*D*D*W);
 return Ans;
}
int main()
{
 int T,W,H;
 scanf("%d",&T);
 while(T--)
 {
 scanf("%d %d",&W,&H);
 double Ans=max(MaxVolume(W,H),MaxVolume(H,W));
 printf("%.11e\n",Ans);
 }
 return 0;
}
