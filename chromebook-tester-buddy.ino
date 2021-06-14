#include "DigiKeyboard.h"

//You will need to enter valid login details below before uploading.
static char* login_string = ""; // username@email
static char* password_string = ""; //password
static unsigned int loadDelay = 60; //How long the USB device should wait for the computer to load after logging in.

void setup() {
  // put your setup code here, to run once

  //sign into your chomebook
  //wait(5);
  press(0);//resloves bug
  //press(43); //tab key HID usb code is 43
  //press(KEY_ENTER);

  //commented out as temperary workaround for a bug
  //sign in to chromebook screen
  //slowSpam(43, 3); //43 is tab
  //press(KEY_ENTER);
  //wait(3);


  //username box
  wait(1);
  DigiKeyboard.write(login_string);
  press(KEY_ENTER);

  //password box
  wait(6); //reduced from 10 seconds to 6 seconds to help speed things up.
  DigiKeyboard.write(password_string); 
  press(KEY_ENTER);
  
  wait(loadDelay);

  //crosh battery test
  //opencrosh();
  //wait(10);
  //press(KEY_ENTER);
  //wait(10);
  //DigiKeyboard.write("battery_test");
  //wait(3);
  //press(KEY_ENTER);

  //crosh has been disabled by policy admin.
  
  //crosh memory test
  //opencrosh();
  //wait(10);
  //press(KEY_ENTER);
  //wait(10);
  //DigiKeyboard.write("memory_test");
  //mkNoise();
  //wait(10);
  
  //web browser
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT); //opens a new crome window.
  wait(21);
  DigiKeyboard.write("onlinemictest.com"); //online mic test
  press(KEY_ENTER);

  wait(3);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT); //opens a new chrome window.
  wait(2);
  DigiKeyboard.write("keyboardtester.com/tester.html"); //online keyboard tester
  press(KEY_ENTER);

  //open the camera
  wait(2);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_RIGHT);
  wait(2);
  DigiKeyboard.write("camera");
  wait(2);
  press(KEY_ENTER);
  wait(2);
  DigiKeyboard.sendKeyStroke(43, MOD_ALT_LEFT); //43 is the HID code for the tab key, alt tabbing so that the cameria does not take a picture of the person testing it.

  //open settings
  wait(2);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_RIGHT);
  wait(2);
  DigiKeyboard.write("settings");
  wait(2);
  press(KEY_ENTER);

  //update the computer from the settings app
  wait(3);  
  slowSpam(43,11);
  press(KEY_ENTER);
  wait(1);
  press(43);
  wait(1);
  press(KEY_ENTER);
  mkNoise();


}
void fixcroshBug()
{
  for (int i=0; i < 5; i++)
  {
    DigiKeyboard.write("help");
    wait(1);
    press(KEY_ENTER);
  }
}
void opencrosh()
{
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_ALT_LEFT | MOD_CONTROL_LEFT); //crtl + alt + t to open crosh
  fixcroshBug();
}

void mkNoise()
{
  DigiKeyboard.sendKeyStroke(KEY_Z, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
  wait(5);
  DigiKeyboard.sendKeyStroke(KEY_Z, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
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
  // put your main code here, to run repeatedly:

}
