#include <Bounce2.h>  // Bounce library makes button change detection easy
const int channel = 1;
int notes[24] = {
24,36,48,60,     //72
26,38,50,62,     //74
28,40,52,64,     //76
31,43,55,67,     //79
33,45,57,69,     //81
35,47,59,71};    //83

//Row A
Bounce button0 = Bounce(0, 5); 
Bounce button1 = Bounce(1, 5); 
Bounce button2 = Bounce(2, 5); 
Bounce button3 = Bounce(3, 5); 
 

//Row B
Bounce button4 = Bounce(4, 5); 
Bounce button5 = Bounce(5, 5);
Bounce button6 = Bounce(6, 5); 
Bounce button7 = Bounce(7, 5); 

//Row C
Bounce button8 = Bounce(8, 5); 
Bounce button9 = Bounce(9, 5); 
Bounce button10 = Bounce(10, 5); 
Bounce button11 = Bounce(11, 5); 

//Row D
Bounce button12 = Bounce(12, 5); 
Bounce button13 = Bounce(13, 5); 
Bounce button14 = Bounce(14, 5); 
Bounce button15 = Bounce(15, 5); 


//Row E
Bounce button16 = Bounce(16, 5); 
Bounce button17 = Bounce(17, 5); 
Bounce button18 = Bounce(18, 5); 
Bounce button19 = Bounce(19, 5); 

//Row F
Bounce button20 = Bounce(20, 5); 
Bounce button21 = Bounce(21, 5); 
Bounce button22 = Bounce(22, 5); 
Bounce button23 = Bounce(23, 5); 



void setup() {

  for (int thisPin = 0; thisPin < 24; thisPin++) {
   pinMode(thisPin, INPUT_PULLUP);
   }
}

void loop() {
 //Row A
button0.update();
button1.update();
button2.update();
button3.update();

//Row B
button4.update();
button5.update();
button6.update();
button7.update();

//Row C
button8.update();
button9.update();
button10.update();
button11.update();

//Row D
button12.update();
button13.update();
button14.update();
button15.update();


//Row E
button16.update();
button17.update();
button18.update();
button19.update();

//Row F
button20.update();
button21.update();
button22.update();
button23.update();


//Row A
  if (button0.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[0], 99, channel);  
      }
  if (button0.risingEdge()) {
      usbMIDI.sendNoteOff(notes[0], 0, channel);  
      }
      
if (button1.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[1], 99, channel);  
      }
if (button1.risingEdge()) {
      usbMIDI.sendNoteOff(notes[1], 0, channel);  
      }

if (button2.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[2], 99, channel);  
      }
if (button2.risingEdge()) {
      usbMIDI.sendNoteOff(notes[2], 0, channel);  
      }

if (button3.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[3], 99, channel);  
      }
if (button3.risingEdge()) {
      usbMIDI.sendNoteOff(notes[3], 0, channel);  
      }

if (button4.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[4], 99, channel);  
      }
if (button4.risingEdge()) {
      usbMIDI.sendNoteOff(notes[4], 0, channel);  
      }

if (button5.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[5], 99, channel);  
      }
if (button5.risingEdge()) {
      usbMIDI.sendNoteOff(notes[5], 0, channel);  
      }



//Row B
if (button6.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[6], 99, channel);  
      }
if (button6.risingEdge()) {
      usbMIDI.sendNoteOff(notes[6], 0, channel);  
      }
if (button7.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[7], 99, channel);  
      }
if (button7.risingEdge()) {
      usbMIDI.sendNoteOff(notes[7], 0, channel);  
      }

if (button8.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[8], 99, channel);  
      }
if (button8.risingEdge()) {
      usbMIDI.sendNoteOff(notes[8], 0, channel);  
      }

if (button9.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[9], 99, channel);  
      }
if (button9.risingEdge()) {
      usbMIDI.sendNoteOff(notes[9], 0, channel);  
      }

if (button10.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[10], 99, channel);  
      }
if (button10.risingEdge()) {
      usbMIDI.sendNoteOff(notes[10], 0, channel);  
      }

if (button11.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[11], 99, channel);  
      }
if (button11.risingEdge()) {
      usbMIDI.sendNoteOff(notes[11], 0, channel);  
      }




//Row C
if (button12.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[12], 99, channel);  
      }
if (button12.risingEdge()) {
      usbMIDI.sendNoteOff(notes[12], 0, channel);  
      }

if (button13.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[13], 99, channel);  
      }
if (button13.risingEdge()) {
      usbMIDI.sendNoteOff(notes[13], 0, channel);  
      }

if (button14.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[14], 99, channel);  
      }
if (button14.risingEdge()) {
      usbMIDI.sendNoteOff(notes[14], 0, channel);  
      }

if (button15.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[15], 99, channel);  
      }
if (button15.risingEdge()) {
      usbMIDI.sendNoteOff(notes[15], 0, channel);  
      }

if (button16.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[16], 99, channel);  
      }
if (button16.risingEdge()) {
      usbMIDI.sendNoteOff(notes[16], 0, channel);  
      }

if (button17.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[17], 99, channel);  
      }
if (button17.risingEdge()) {
      usbMIDI.sendNoteOff(notes[17], 0, channel);  
      }




//Row D
if (button18.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[18], 99, channel);  
      }
if (button18.risingEdge()) {
      usbMIDI.sendNoteOff(notes[18], 0, channel);  
      }
if (button19.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[19], 99, channel);  
      }
if (button19.risingEdge()) {
      usbMIDI.sendNoteOff(notes[19], 0, channel);  
      }

if (button20.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[20], 99, channel);  
      }
if (button20.risingEdge()) {
      usbMIDI.sendNoteOff(notes[20], 0, channel);  
      }

if (button21.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[21], 99, channel);  
      }
if (button21.risingEdge()) {
      usbMIDI.sendNoteOff(notes[21], 0, channel);  
      }

if (button22.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[22], 99, channel); 
      }
if (button22.risingEdge()) {
      usbMIDI.sendNoteOff(notes[22], 0, channel);  
      }

if (button23.fallingEdge()) {
      usbMIDI.sendNoteOn(notes[23], 99, channel);  
      }
if (button23.risingEdge()) {
      usbMIDI.sendNoteOff(notes[23], 0, channel);  
      }




  // MIDI Controllers should discard incoming MIDI messages.
  while (usbMIDI.read()) {
  }
}
