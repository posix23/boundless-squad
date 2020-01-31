                    //////////////////////////////////////////////////////////////////////////////////////////
                    // Basic Function listed below.  Keep scrolling to reach the set() and loop() functions //
                    //////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////
// You can find a full list of functions here:    //
// https://www.arduino.cc/reference/en/#functions //
////////////////////////////////////////////////////

////////////////////////////////////////////////////////////// Loop Specific Functions: ///////////////////////////////////////////////////////////
//////////////////Digital I/O Functions///////////////////////////////////// ///////////Analog I/O Functions///////////////////////////////////////
// "digitalRead()"  //////////////////////////////////////////////////////// // "analogRead()" //////////////////////////////////////////////////// 
//                  Function:                                             // //                  Function:                                       //
//////////////////    Function looks at a specified digital pin and       // //////////////////    Function looks at an Analog In pin (not to    //
//////////////////    returns it's value to the user (HIGH or LOW).       // //////////////////    be confused with a digital I/O pin) and reads //
//////////////////  Syntax (How to call function):                        // //////////////////    in voltage value.  The voltage value is       //
//////////////////    digitalRead(pin_number);                            // //////////////////    returned to the user as an int.               //
//////////////////    pin_number (int): represents the digital pin to be  // //////////////////  Note:                                           //
//////////////////                      read                              // //////////////////    analogRead is based on a 10-bit analog conver-//
//////////////////  Example:                                              // //////////////////    ter that utilizes a voltage reference. The    //
//////////////////    int pin = 8;  //Variable Declaration                // //////////////////    smaller the reference, the more precise       //
//////////////////    digitalRead(pin); //Read digital pin 8 value        // //////////////////    the read, but the analogRead can then only    //
// "digitalWrite()" //////////////////////////////////////////////////////// //////////////////    read a smaller range of values. Look to       //
//                  Function:                                             // //////////////////    "analogReference()" to see configuration      //
//////////////////    Function writes a specific value to a specified     // //////////////////    procedures of the reference voltage.          //
//////////////////    digital pin.  Value can either be "HIGH" or "LOW"   // //////////////////  Syntax:                                         //
//////////////////  Syntax: (How to call function):                       // //////////////////    analogRead(a_pin_number)                      // 
//////////////////    digitalWrite(pin_number, digital_value)             // //////////////////    a_pin_number (int): represents the analog pin //
//////////////////    pin_number (int): represents the digital pin to be  // //////////////////                        to be read                //
//////////////////                      written to                        // //////////////////  Example:                                        //
//////////////////    digital_value (int): The value being written to the // //////////////////    int a_pin = 3; //Variable Declaration         //
//////////////////                         digital pin in question. Either// //////////////////    analogRead(a_pin); //Read V Value of pin 3    //
//////////////////                         a "HIGH" (1) or "LOW" (0)can be// // "analogWrite()" ///////////////////////////////////////////////////
//////////////////                         written to the pin             // //                  Function:
//////////////////  Example:                                              // //////////////////    Function assigns a voltage (analog) to a pin, //
//////////////////    int pin = 5;  //Variable Declaration                // //////////////////    specifically a digital pin, and the assigned  //
//////////////////    digitalWrite(pin, HIGH); //Assign Pin 5 as "HIGH"   // //////////////////    value inherits a PWM wave (Pulse-Width        //
//////////////////    digitalWrite(pin, 0); //Assign Pin 5 as "LOW"       // //////////////////    modulation) with the assignment.  Basically,  //
//////////////////////////////////////////////////////////////////////////// //////////////////    the PWM describes the "on-off" nature of the  //
//////////////////////////////////////////////////////////////////////////// //////////////////    analog output.  A PWM with a max duty cycle   //
//////////////////////////////////////////////////////////////////////////// //////////////////    (100% duty cycle) is a DC source (think of    //
//////////////////////////////////////////////////////////////////////////// //////////////////    this as the voltage from a battery source).   //
//////////////////////////////////////////////////////////////////////////// //////////////////    Thus, 0% duty cycle means the source is never //
//////////////////////////////////////////////////////////////////////////// //////////////////    on.  Look to this site for more information:  //
//////////////////////////////////////////////////////////////////////////// //////////////////    https://www.arduino.cc/en/Tutorial/PWM        //
//////////////////////////////////////////////////////////////////////////// //////////////////  Syntax:                                         //
//////////////////////////////////////////////////////////////////////////// //////////////////    analogWrite(pin_number, duty_cycle)           //
//////////////////////////////////////////////////////////////////////////// //////////////////    pin_number (int): represents the digital pin  //
//////////////////////////////////////////////////////////////////////////// //////////////////                      which will output an analog //
//////////////////////////////////////////////////////////////////////////// //////////////////                      value                       //
//////////////////////////////////////////////////////////////////////////// //////////////////    duty_cycle (int): Any value between 0 (no-vol-//
//////////////////////////////////////////////////////////////////////////// //////////////////                      tage) and 255 (DC voltage). //
//////////////////////////////////////////////////////////////////////////// //////////////////                      The greater the value, the  //
//////////////////////////////////////////////////////////////////////////// //////////////////                      longer the pin outputs an   //
//////////////////////////////////////////////////////////////////////////// //////////////////                      analog value.               //
//////////////////////////////////////////////////////////////////////////// //////////////////  Example:                                        //
//////////////////////////////////////////////////////////////////////////// //////////////////    int pin = 6; // Variable Declaration          //
//////////////////////////////////////////////////////////////////////////// //////////////////    int duty = 128; // Represents 50% Duty Cycle  //
//////////////////////////////////////////////////////////////////////////// //////////////////    analogWrite(pin, duty); // Output an analog   //
//////////////////////////////////////////////////////////////////////////// //////////////////                            // signal with a 50%  //
//////////////////////////////////////////////////////////////////////////// //////////////////                            // Duty Cycle         //
//////////////////////////////////////////////////////////////////////////// //////////////////////////////////////////////////////////////////////

//////////////////////////Setup Function /////////////////////////////////////////////////////////// Time Functions ////////////////////////////////
///////////////////Pin Assignments////////////////////////////////////////// //// Function Name:  "delay()" ///////////////////////////////////////
//// Function Name:  "pinMode()" /////////////////////////////////////////// //// Functionality:  Forces program to wait a certain amount of time//
//// Functionality:  Assigns a mode to a certain Digital I/O pin.   //////// ////                 before doing anything else.  Takes in a long,  //
////                 There are three main modes:  INPUT, OUTPUT, and//////// ////                 and each value represents 1 millisecond.  So   //
////                 INPUT_PULLUP (Inverse Input).  Use INPUT_PULLUP//////// ////                 an assignment of 1000 delays the program for 1 //
////                 if you want to digitally invert inputs to the  //////// ////                 second.                                        //
////                 pin.                                           //////// //// Syntax:         delay(delay_amount)                            //
//// Syntax:         pinMode(pin_number, MODE_Value)                //////// ////                 delay_amount (unsigned long): How many milli-  //  
////                 pin_number (int): Represents pin to be assigned//////// ////                              seconds will the program wait?    //
////                                   one of three modes.          //////// //// Example:        int delay_total = 1000; //1 second delay       //
////                 MODE_Value (?):   One of three Modes to be ass-//////// ////                 delay(delay_total); //Delay program for 1s     //
////                                   igned to the pin: INPUT,     //////// //// Function Name:  "millis()" //////////////////////////////////////
////                                   OUTPUT, or INPUT_PULLUP      //////// //// Functionality:  Counts how long the Arduino has been running   //
//// Example:       int pin = 5; //Variable Declaration             //////// ////                 since initiation of a given program.  Great for//
////                int pin2 = 7;                                   //////// ////                 keeping tack of time.                          //
////                pinMode(pin, INPUT);                            //////// //// Syntax:         millis()   //No parameters                     //
////                pinMode(pin2, OUTPUT);                          //////// //// Example:        int arduino_timer = millis(); //program timer  //
//////////////////////////////////////////////////////////////////////////// //////////////////////////////////////////////////////////////////////

///////////////////Using Interrupts//////////////////////////////////////////////////////////////////////////////
//    An example interrupt is used in the code below.  To use an interrupt, create a function that acts as the //
// interrupt function, and use the "attachInterrupt()" function as specified below:                            //
//        attachInterrupt(interrupt_Number, function_Name, key_word);                                          // 
//        interrupt_Number:  Interrupt Address associated with interrupt being used.  If you want to use pins  //
//                           2 or 3 (which I recommend for interrupt usage), use the function                  //
//                           "digitalPinToInterrupt(pin_number)" for this value.  pin_Number is the integer    //
//                           value of the pin being used (again, only use 2 or 3).                             //
//        function_Name:  Put the name of the function acting as the interrupt function here.  Note that this  //
//                        call does not include two parentheses () at the end.  The function created for this  //
//                        interrupt cannot return any value, and it does not take in any value.                //
//                        Example Interrupt Function:                                                          //
//                        void interrupt_handler(void){                                                        //
//                          //Your Code Here                                                                   //
//                        }                                                                                    //
//        key_Word:  Either one of the following four key words:  LOW, CHANGE, RISING, FALLING                 //
//                   These values define when the Arduino should activate the interrupt                        //
//                   LOW:     Activate Interrupt when value read from input is LOW (0) (HIGH to LOW or LOW to  //
//                            HIGH).                                                                           //
//                   CHANGE:  Activate Interrupt whenever the value changes from its past value.               //
//                   RISING:  Activate Interrupt when the value changes from LOW to HIGH.                      //
//                   FALLING: Activate Interrupt when the value changes from HIGH to LOW.                      //
//    Notes About Interrupts                                                                                   //
//    -- If you decide to use a button as an interrupt, you have to consider the effect of "Debouncing" a      //
//       relatively pesky side-effect of using a button mechanic.  Basically, you need to account for the      //
//       input pin for possibly reading in "bounces" of voltage from the button, activating your interrupt     //
//       more than you really want.  Using the millis() function is really helpful for dealing with this       //
//       problem.  See "Pin2_Handler()" for an example of dealing with debouncing.                             //
//    -- To make sure that your interrupt(s) are actually activated, call the function "interrupt()" (no       //
//       parameters necessary).  This function turns on all possible interrupt registers, which allows         //
//       assignments to said register (this allows use of attachInterrupt()).                                  //
//    -- If you don't want anything to do with interrupts, you can turn them off with "noInterrupts()"         //
//    -- Other interrupts are out there, it's just not as simple to use them.  If you do want to use other     //
//       interrupts, I suggest doing some research online.  The internet is full of people who are just as     //
//       driven as you!                                                                                        //
//    -- Generally, an interrupt function has the word "handler" built into the function name.  This isn't     //
//       necessary for the function to work, but it makes it obvious that the function is an interrupt.        //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////Using Timers///////////////////////////////////////////////////////////////////////////////
// https://playground.arduino.cc/code/timer1:  Installing Classes for Timer1 and Timer3///////////////////////
// https://learn.adafruit.com/multi-tasking-the-arduino-part-2/timers:  Using Timer0 as an interrupt /////////
//  Timers are a great way to use interrupts if you want certain functions to happen at certain times without/
//the need for checking in the loop for certain conditions to be met, a process known as "polling." However,//
//the arduino does not make it easy to use timers.  I advise investing in timers only if you feel like you  //
//really need it.                                                                                           //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//GOAL::  To set up an FSM that turns on two LEDs based on an input button press; one LED (LED1) should turn on when
//        the button is pressed, and the other LED (LED2)should be turned off at this point.  When the button isn't
//        pressed, LED2 is turn on, and LED1 should turn off.  Follow the steps below.  Any pins may be used for this
//        program, as long as they are digital.

// Answers can vary with in usage, and code does not need to match exactly.  It just needs to work!

int LED1_pin = 1; //LED1 Pin Number here
int LED2_pin = 2; //LED2 Pin Number here

int BUTTON_pin = 3; //Button Pin Number here

enum {LED1_On, LED2_On} present_state;


void setup() {
  // put your setup code here, to run once:

  //        Set up functionality of each pin 
  pinMode(LED1_pin, OUTPUT); //Set INPUT or OUTPUT for LED1_pin 
  pinMode(LED2_pin, OUTPUT); //Set INPUT or OUTPUT for LED2_pin
  pinMode(BUTTON_pin, INPUT); // Set INPUT or OUTPUT for BUTTON_pin

  //        Initialize a digital value for OUTPUTS
  digitalWrite(LED1_pin, LOW); //First output
  digitalWrite(LED2_pin, HIGH); //Second output

  present_state = LED2_On;

}
  ////////////////////////////////////////////////////////////////////////////
  //Make sure that the button circuit is setup with a pull-down resistor, or// 
  //you will have a hard time switching states below.                       //
  ////////////////////////////////////////////////////////////////////////////
void loop() {
    
  switch(present_state){
    case LED1_On: //Turn on LED1 here
      digitalWrite(LED2_pin, LOW);
      digitalWrite(LED1_pin, HIGH);
      if(digitalRead(BUTTON_pin) == LOW){
        present_state = LED2_On;
      }
      break;
    case LED2_On: //Turn on LED2 here
      digitalWrite(LED2_pin, HIGH);
      digitalWrite(LED1_pin, LOW);
      if(digitalRead(BUTTON_pin) == HIGH){
        present_state = LED1_On;
      }
      break;
  }  
}
