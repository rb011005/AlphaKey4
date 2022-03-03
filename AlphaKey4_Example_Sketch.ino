
//Step 3: The Code
#include <Keyboard.h>
#define Button1  5 // Permanently makes buttonPin's value 7.
#define Button2  6
#define Button3  7 // Permanently makes buttonPin2's value 5.
#define Button4  8 // Permanently makes buttonPin2's value 5.

void setup() {

  pinMode(Button1, INPUT); // Set the pins  as inputs.
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT); // Set the pins  as inputs.
  pinMode(Button4, INPUT);
  Serial.begin(9600);
  Keyboard.begin(); // Start the keayboard funktions

}

void loop() {
  int ButtonRead1 = digitalRead(Button1); //read the state of the button input
  int ButtonRead2 = digitalRead(Button2); //read the state of the button input
  int ButtonRead3 = digitalRead(Button3); //read the state of the button input
  int ButtonRead4 = digitalRead(Button4); //read the state of the button input

  if (ButtonRead1 == LOW) //Pressing switch 1 will trigger this action
  {  
     Keyboard.print ("test1"); //Enter your desired phrase here in the quotation marks. EX ("password")
    delay (500);
  }

  if (ButtonRead2 == LOW)  //Pressing switch 2 will trigger this action
  {
 Keyboard.print ("test2"); //Enter your desired phrase here in the quotation marks. EX ("password")
    delay (500);
  }
 
  if (ButtonRead3 == LOW) //Pressing switch 3 will trigger this action
  {

 Keyboard.print ("test3"); //Enter your desired phrase here in the quotation marks. EX ("password")
    delay (500);
  }

  if (ButtonRead4 == LOW)  // Pressing switch 4 will trigger this action
  {
    Keyboard.print ("test4"); //Enter your desired phrase here in the quotation marks. EX ("password")
    delay (500);
  }


}
