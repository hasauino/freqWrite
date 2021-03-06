#include <freqWrite.h>



Frequency::Frequency(){
    }//Frequency (constructor) method


void Frequency::config(){
      ICR5=65536;
      TCCR5A=0x54;
      TCCR5B=0x18; 
    }//config method


void Frequency::write(float hz){ //hz: desired frequency in hz
        float rcount=1.0/(hz*2.0)*16000000.0; //total clock counts
        int CS5=5;  //prescalar register value 1,2,3,4,5 correspond to 1,8,64,256,1024 prescalar values, respectivley
        
        //choose the right prescalar
        if((rcount/65536.0)<256){ CS5=4; 
        if((rcount/65536.0)<64){ CS5=3;  
        if((rcount/65536.0)<8){ CS5=2; 
        if((rcount/65536.0)<1){ CS5=1;
        }}}}
        
        TCCR5B= 0x18|CS5; //assign chosen prescalar
        
        
        ICR5=int(rcount/PRE_SCALAR[CS5-1]); // calculate and assign vaue to compare timer with (TOP value, see datasheet)  
  }//write method
    
