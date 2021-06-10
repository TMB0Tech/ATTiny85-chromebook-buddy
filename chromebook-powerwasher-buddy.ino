#include "DigiKeyboard.h"

//TODO Add a manual enrollment step; add tag step; add login step; add system test step

//The ssid of the network that the chromebook connects to, this is needed.
static char* ssid= ""; //Wifi SSID

static int tos =                      30;//Time to wait for the ToS, if too soon, system will shutdown or bug out
static int start_delay_powerwash =    1; //time in seconds to wait for the firmware to enter powerwash in the host
void setup() {

  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  
  wait(start_delay_powerwash); // we need to wait for the welcome screen
  
  //welcome screen
  press(KEY_SPACE);

  //Wifi List
  wait(2);
  press(43); //43 is the hid code for the tab key, added this line of code to fix a bug caused by a chromeos update
  spamButton(81, 40); //Downarrow 40 times
  press(KEY_ENTER);

  //Join Wifi network
  wait(4);
  DigiKeyboard.write(ssid); //type this in
  spamButton(43,3); //tab 3 times
  press(KEY_SPACE);

  //leave wifi menu
  wait(6);
  spamButton(43,2);
  press(KEY_SPACE);
  
  //ToS
  //wait(tos);   
  //spamButton(43,3);
  //press(KEY_SPACE);
  
  



}
void slowSpam( byte keycode, int num)
{
  for (int i=0; i < num; i++)
  {
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(keycode);
  }
}

void spamButton( byte keycode, int num )
{
    for (int i=0; i < num; i++)
    {
      DigiKeyboard.delay(20);
      DigiKeyboard.sendKeyStroke(keycode);
    }
}

void press(byte keycode )
{
  DigiKeyboard.delay(10);
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(keycode);
  
}
void wait(int sec)
{
  for (int i = 0; i < sec; i++)
  {
    DigiKeyboard.delay(1000);
  }
}
void loop() {
  // put your code here, to run repeatedly
}
