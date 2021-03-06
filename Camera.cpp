
# include <stdio.h>
# include <time.h>

extern "C" int init(int d_lev);
extern "C" int Sleep(int sec, int usec);
extern "C" int take_picture();
extern "C" char get_pixel(int row,int col,int colour);

float kp = 1; //proportional error constant
float kd = 0.2; //derivative error constant
float ki = 0.1; //integration error constant 
int prev_error = 0; //previous error signal for derivation
int total_error = 0; //total error signal for integration


int cam_error(){
  //Initialises variables for finding colour of pixel, the running total, and the number of white pixels for averaging
  long total = 0;
  int white = 0;
  int pixel;
  //Takes picture to analyse
  take_picture();
  for(int y=115;y<125;y++){
    for(int x=0;x<320;x++){
      //Read pixel
      pixel = get_pixel(x,y,3);
      //If pixel is white, add to total
      if(pixel>128){
        total = total + (x-160);
        white++;
        };
      };
    };
  //Find average if white pixels were present
  if(white>0){
    total=total/white;
    };
  //Print total
  printf("%s", "Base error value: ");
  printf("%d\n",total);
  
  //Perform PID
  int pid_sum; //Declares sum error variable
  int int_error; //Declares integral error variable
  int prop_error = total*kp; //Find proportional error
  int der_error = ((prop_error-prev_error)/0.2)*kd; //Find derivative error (assume camera check is every 2 seconds)
  prev_error = prop_error; //Update previous error for next iteration
  total_error = total_error + prop_error; //Update total error for integration
  int_error = total_error*ki; //Find integration error
  pid_sum = prop_error+der_error+int_error; //Find sum error
  printf("%s", "Sum error value: ");
  printf("%d\n",pid_sum);
  printf("%s", "Potential error value: ");
  printf("%d\n",prop_error);
  printf("%s", "Derivative error value: ");
  printf("%d\n",der_error);
  printf("%s", "Integration error value: ");
  printf("%d\n",int_error);
  printf("%s", "Previous error value: ");
  printf("%d\n",prev_error);
  printf("%s", "Total error value: ");
  printf("%d\n\n",total_error);
return pid_sum;}

int main(){
  for(int i = 0;i<5;i++){
    int error = cam_error();
    Sleep(0,2);
  }
return 0;}
