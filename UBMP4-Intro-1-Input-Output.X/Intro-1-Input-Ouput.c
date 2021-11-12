/*==============================================================================
 Project: Intro-1-Input-Output
 Date:    May 16, 2021
 
 This example UBMP4 input and output program demonstrates pushbutton input, LED
 (bit) output, port latch (byte) output, time delay functions, and simple 'if'
 condition structures.
 
 Additional program analysis and programming activities demonstrate byte output,
 logical condition operators AND and OR, using delay functions to create sound,
 and simulated start-stop button functionality.
==============================================================================*/
#include    "xc.h"              // Microchip XC8 compiler include file
#include    "stdint.h"          // Include integer definitions
#include    "stdbool.h"         // Include Boolean (true/false) definitions
#include    "UBMP4.h"           // Include UBMP4 constants and functions
// TODO Set linker ROM ranges to 'default,-0-7FF' under "Memory model" pull-down.
// TODO Set linker code offset to '800' under "Additional options" pull-down.
// The main function is required, and the program begins executing from here.
// FUNCTION abomanation starts here
        void Rest(char Length) {
            while(Length != 0) {
                __delay_us(2272);
                Length--;
            }
        }
	void NoteCustom(char Pitch, char Length, bool Slur) {
            Length = Length-(Slur*25);
	    char SlurPitch = Pitch*25;
            while(Length != 0) {
                BEEPER = !BEEPER;
		while(Pitch != 0) {
                	__delay_us(1);
			Pitch--;
	    	}
                Length--;
            }
            if (Slur == 0) {
		while(SlurPitch != 0) {
                	__delay_us(1); // The other delay times 25
			SlurPitch--;
	    	}
            }
        }
    // Pitch is the period of the wave in microseconds
    // Length is measured in 100ths of 16th notes
    // Slur has to be set to 1 for the last note of a slur (and for non-slurs)
    // Non-sharps
        void NoteF3(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(5727);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(143175); // The other delay times 25
            }
        }
        void NoteG3(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(5102);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(127550); // The other delay times 25
            }
        }
        void NoteA3(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(4545);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(113625); // The other delay times 25
            }
        }
        void NoteB3(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(4049);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(101225); // The other delay times 25
            }
        }
        
        void NoteC4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(3822);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(95550); // The other delay times 25
            }
        }
        void NoteD4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(3405);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(85125); // The other delay times 25
            }
        }
        void NoteE4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(3033);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(75825); // The other delay times 25
            }
        }
    	void NoteF4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(2863);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(71700); // The other delay times 25
            }
        }
	
        void NoteG4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(2551);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(63775); // The other delay times 25
            }
        }
        void NoteA4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(2272);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(56800); // The other delay times 25
            }
        }
        void NoteB4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(2024);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(50600); // The other delay times 25
            }
        }
        void NoteC5(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(1911);
                Length--;
            }
            if (Slur == 0) {
            __delay_us(47775); // The other delay times 25
            }
        }
        void NoteD5(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(1702);
                Length--;
            }
            if (Slur == 0) {
            __delay_us(42550); // The other delay times 25
            }
        }
        void NoteE5(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(1516);
                Length--;
            }
            if (Slur == 0) {
            __delay_us(42550); // The other delay times 25
            }
        }
    // Sharps
        void SharpNoteD5(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(1607);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(40175); // The other delay times 25
                // If this got put in a loop that always runs 25 times that would make it eazy to add pitch to the fuction
            }
        }
int main(void)
{
    // Configure oscillator and I/O ports. These functions run once at start-up.
    OSC_config();               // Configure internal oscillator for 48 MHz
    UBMP4_config();             // Configure on-board UBMP4 I/O devices
	
    // Code in this while loop runs repeatedly.
    while(1)
	{
        // If SW2 is pressed, make a flashy light pattern
        if(SW2 == 0)
        {
            LED3 = 1;
            __delay_ms(100);
            LED4 = 1;
            __delay_ms(100);
            LED5 = 1;
            __delay_ms(100);
            LED6 = 1;
            __delay_ms(100);
		LED1 = 0;
		__delay_ms(100);
            LED3 = 0;
            __delay_ms(100);
            LED4 = 0;
            __delay_ms(100);
            LED5 = 0;
            __delay_ms(100);
            LED6 = 0;
            __delay_ms(100);
		LED1 = 1;
		__delay_ms(100);
        }
        
        // Add code for your Program Analysis and Programming Activities here:
        
        
        // MUSIC starts here
        if(SW5 == 0)
        {
        // Measure 4
            NoteC4(100, 1);
	        NoteD4(100, 1);
	        NoteE4(200, 1);
            NoteG4(200, 1);
            NoteF4(100, 1);
            NoteD4(100, 1);
            NoteE4(100, 1);
            NoteG4(100, 1);
            NoteA4(200, 1);
            NoteG4(400, 1);
        // Measure 5
            NoteC4(100, 1);
	        NoteD4(100, 1);
	        NoteE4(200, 1);
            NoteG4(200, 1);
            NoteE4(100, 1);
            NoteC4(100, 1);
            NoteE4(100, 1);
            NoteC4(100, 1);
            NoteD4(200, 1);
            NoteC4(400, 1);
        // Measure 6
            NoteB3(200, 1);
            NoteC4(100, 1);
            NoteG4(200, 1); // This note is a tie
            NoteC4(100, 1);
            NoteB3(100, 1);
            NoteA3(200, 1);
            NoteC4(100, 1);
            NoteG4(200, 1); // This note is a tie
            NoteC4(100, 1);
            NoteA3(100, 1);
        // Measure 7
            NoteG3(200, 1);
            NoteC4(100, 1);
            NoteG4(200, 1); // This note is a tie
            NoteC4(100, 1);
            NoteG3(100, 1);
            NoteC4(800, 1);
        // Measure 8
            NoteF4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(200, 1);
            NoteD5(200, 1);
            NoteC5(200, 1);
            NoteA4(200, 1);
        // Measure 9
            NoteF3(200, 1);
            NoteG3(200, 1);
            NoteG4(100, 1);
            NoteA4(100, 1);
            NoteC5(200, 1);
            NoteB4(200, 1);
            NoteG4(400, 1);
            NoteG4(100, 1);
            NoteA4(100, 1);
            NoteC5(200, 1);
        // Measure 10
            NoteF4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(200, 1);
            NoteD5(200, 1);
            NoteC5(200, 1);
            NoteA4(200, 1);
        // Measure 11
            NoteF4(100, 1);
            NoteG4(100, 1);
            NoteG3(100, 1);
            NoteC4(400, 1);
            NoteF4(100, 1);
            NoteG4(100, 1);
            NoteG3(100, 1);
            NoteC4(400, 1);
        // Measure 12
            NoteF4(100, 1);
            NoteG4(100, 1);
            NoteG3(100, 1);
            NoteB3(1200, 1);
        // Measure 13
            Rest(400);
            SharpNoteD5(200, 0);
            NoteE5(200, 1);
            NoteD5(200, 0);
            NoteE5(200, 1);
            
            NoteC5(300, 1);
            //More slurs here
            NoteC5(100, 1);
            NoteA4(100, 1);
            NoteC5(100, 1);
        }
        // Activate bootloader if SW1 is pressed.
        if(SW1 == 0)
        {
            RESET();
        }
    }
}

/* Program Analysis
 * 
 * 1. How many times do the LEDs flash if SW2 is quickly pressed and released?
 *    Do the LEDs keep flashing when SW2 is held? Look at the program and
 *    explain why this happens when SW2 is held.
 * 
 #		The pattern plays out once it the buttion is pressed quickly and it loops if held
 #		because the code keeps hiting the if statment and it's always true (while you still hold the buttion)
 *
 * 2. Explain the difference between the statements: LED3 = 0; and LED3 = 1;
 * 
 #		When LED3 is 0 it is off and when it's 1 it is on
 *
 * 3. What voltage do you expect the microcontroller to output to LED D3 when
 *    the statement LED3 = 0; runs? What voltage do you expect the output to be
 *    when the statement LED3 = 1; runs?
 * 
 #		When LED3 is 0 there should be 0 volts
 #		When LED3 is 1 there should be 5 volts
 *
 *    You can confirm the output voltage with a voltmeter if you have access
 *    to one. If you tried that, did the voltage match your prediction?
 * 
 #		// What do you do when you have no voltmeter?
 *
 * 4. The statement 'if(SW2 == 0)' uses two equal signs, while the statement
 *    'LED3 = 1;' uses a single equal sign. What operation is performed by one
 *    equal sign? What operation is performed by two equal signs?
 * 
 #		if(SW2 == 0) is asking the computer if SW2 is 0
 #		LED3 = 1 is telling the computer that LED3 is 1
 *
 * 5. The following program code includes instructions that write to the PORTC
 *    output latches directly. Try it by copying and pasting this code below
 *    the existing SW2 'if' structure, at the location shown by the comment.
 
        if(SW3 == 0)
        {
            LATC = 0b00000000;
            __delay_ms(100);
            LATC = 0b11110000;
            __delay_ms(100);
        }
	
 *    What happens when pushbutton SW3 is pressed? Identify at least one
 *    advantage and one disadvantage of controlling the LEDs using 'LATC' writes
 *    rather than through individual 'LEDn = x;' statements.
 * 
 #		WHen you press SW3 all the lights turn off then, after 100 milliseconds turn on
 *
 #		One advantage is that you can use less lines to get all the lights on
 #		One disadvantage is that you may overwrite values you didn't mean to because LATC doesn't care what it was before
 *
 * 6. Next, compare the operation of 'if' and 'while' structures to simulate
 *    momentary buttons. Replace the code you added in 5, above, with this code:
 
        // Momentary button using if structure
        if(SW3 == 0)
        {
            LED4 = 1;
        }
        else
        {
            LED4 = 0;
        }
	
        // Momentary button using while structure
        while(SW4 == 0)
        {
            LED5 = 1;
        }
        LED5 = 0;
	
 *    First, try pressing and releasing SW3 and SW4 one at a time.
 * 
 *    Next, press and hold SW3 while pressing and releasing SW4. Does it work
 *    as expected?
 * 
 #		!
 *
 *    Next, try press and holding SW4 while pressing and releasing SW3. Does it
 *    work as expected? Explain the difference in operation between the 'if' and
 *    'while' structures making up the momentary button code.
 * 
 #		!
 *
 * 7. Let's explore logical conditions using 'if' statements. Replace the code
 *    added in 6, above, with this nested if code to make a logical AND
 *    condition that will light LED D4 only if both SW3 and SW4 are pressed:
 
        // Nested if 'AND' code
        if(SW3 == 0)
        {
            if(SW4 == 0)
            {
                LED4 = 1;
            }
            else
            {
                LED4 = 0;
            }
        }
        else
        {
            LED4 = 0;
        }
	
 *    Test the code to ensure it works as expected. Does the order of the if
 *    conditions matter? (eg. swap the conditional checks for SW3 and SW4)
 * 
 #		!
 *
 * 8. Next, replace the code from 7 with the following code which implements a
 *    logical AND conditional operator composed of two ampersands '&&':
 
        // Conditional 'AND' code
        if(SW3 == 0 && SW4 == 0)
        {
            LED4 = 1;
        }
        else
        {
            LED4 = 0;
        }
	
 *    Does '&&' work the same way as the nested if structures? Can you think of
 *    at least one advantage of using a logical conditional operator instead of
 *    nested if structures?
 * 
 #		!
 *
 * 9. Replace the double ampersand '&&' with double vertical bars '||)' to make
 *    a logical OR conditional operator. Your code should look like this:
  
        // Conditional 'OR' code
        if(SW3 == 0 || SW4 == 0)
        {
            LED4 = 1;
        }
        else
        {
            LED4 = 0;
        }
	
 *    Describe the conditions under which LED4 turns on.
 * 
 #		!
 *
 * 
 * Programming Activities
 * 
 * 1. The statement '__delay_ms(100);' creates a 100ms delay. Try changing one
 *    or more of the delay values in the program to 500ms and see what happens.
 * 
 *    Can the delay be made even longer? Try 1000 ms. How big can the delay be
 *    before MPLAB-X produces an error message? (Hint: can you think of a fast
 *    and efficient way of guessing an unknown number?)
 * 
 #		!
 *
 * 2. The '__delay_ms();' function only accepts integers as delay values. To
 *    make delays shorter than 1ms, specify a delay in microseconds using the
 *    '__delay_us();' function. You won't be able to see such short LED flashes
 *    with your eyes, but you could measure them using an oscilloscope, or hear
 *    them if they are used to turn the piezo beeper on and off. Try this code:
 
        // Make a tone while SW5 is held
        if(SW5 == 0)
        {
            BEEPER = 1;
            __delay_us(567);
            BEEPER = 0;
            __delay_us(567);
        }
	
 *    Try changing the delay values in both of the __delay_us(); functions.
 *    Does the pitch of the tone increase or decrease if the delay value is
 *    made smaller?
 * 
 #		!
 *
 * 3. This code demonstrates a more compact way of toggling the beeper output
 *    using a logical NOT operator '!'. Replace the code above, with this code:
 
        // Make a tone while SW5 is held
        if(SW5 == 0)
        {
            BEEPER = !BEEPER;
            __delay_us(567);
        }
	
 *    One difference between this code and the code in 2, above, is the state
 *    of the BEEPER pin when SW5 is released. What state will the BEEPER output
 *    be in after this code runs? While one advantage of this method is smaller
 *    code, can you think of one or more disadvantages based on its output when
 *    the button is released?
 * 
 #		!
 *
 * 4. Using modified versions of the original SW2 'if' structure, create a
 *    program that makes a unique LED flashing pattern for each pushbutton.
 * 
 *    Test each of your flashing patterns. Describe what happens when more than
 *    one button is held. Do all of the patterns try to flash the LEDs at the
 *    same time, or sequentially? Explain why this is.
 * 
 #		!
 *
 * 5. Create a program that makes a different tone for each pushbutton.
 * 
 *    Test each tone by pressing each button individually. Next, press two or
 *    more buttons at the same time. Describe what the tone waveform would look
 *    like when more than one button is held.
 * 
 #		!
 *
 * 6. Use individual 'if' structures to simulate 'Start' and 'Stop' buttons for
 *    an industrial machine. LED D4 should turn on when SW3 is pressed, stay on
 *    even after SW3 is released, and turn off when SW4 is pressed. Test your
 *    program to make sure it works.
 * 
 #		!
 *
 * 7. Running your program from 6, above, describe what happens when both SW3
 *    and SW4 are pressed. Does LED D4 stay on? If so, how does the brightness
 *    of LED D4 compare between its normal on state following SW3 being pressed
 *    to this new state when both SW3 and SW4 are bing held? Can you explain
 *    why it changes?
 * 
 #		!
 *
 * 8. As you can imagine, an industrial machine that is able to turn on even
 *    while its 'Stop' button is pressed represents a significant safety hazard.
 *    Using a logical conditional operator, modify the start-stop program from
 *    activity 5 to make it safer. SW3 should only turn on LED D4 if SW4 is
 *    released.
 * 
 #		!
 *
 * 9. LED D1 is normally used to indicate that a program is running, but it can
 *    be controlled by your program as well. If you take a look at the UBMP4
 *    schematic, you will see that LED D1's cathode (or negative) pin is
 *    connected to the microcontroller instead of the anode (positive) pin as
 *    with the other LEDs. This means that you need to make D1's output a zero
 *    to turn D1 on. Try it! Make a program that controls or flashes LED D1.
 *
 #		!
 *
 */
