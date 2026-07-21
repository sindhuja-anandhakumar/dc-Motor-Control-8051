#include<reg51.h>
sbit sw1 = P2^0;
sbit sw2 = P2^2;
sbit m1 = P1^0;
sbit m2 = P1^1;
sbit m3 = P1^6;
sbit m4 = P1^7;
void forward();
void reverse();
void stop();
void main()
{
  while(1)
  {
    if(sw1==0)
	  forward();
	  else if(sw2==0)
	  reverse();
	  else
	  stop();
  }
}  
void forward()
{
	m1=1;
	m2=0;
	m3=0;
	m4=0;
}
void reverse()
{
	m1=0;
	m2=0;
	m3=0;
	m4=1;
}
void stop()
{
	m1=0;
	m2=0;
	m3=0;
	m4=0;
}